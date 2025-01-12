//
// Created by User on 24.02.2024.
//
#include "UzayKorsanlari.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void UzayKorsanlari::Olay(Kullanici &kullanici, Gemi &gemi) {
    cout << "Uzay korsanlariyla karsilastin.\n";
    bool secimgecerli = false;
    while (!secimgecerli) {
        int secim;
        cout << "Ne yapmak istersin (1: Kac, 2: Savas, 3: Pazarlik Yap): \n";
        cin >> secim;
        int rastgelepara = (rand() % 3 + 1) * 10;

        switch (secim) {
            case 1:
                if (kullanici.yakit < 33) {
                    cout << "Yeterli yakit yok. Baska bir secenek sec.\n";
                } else {
                    kullanici.YakitGuncelle(-33);
                    if ((rand() % 100) < (gemi.GetHasarCarpani() * 50)) {
                        cout << "kactin\n";
                    } else {
                        cout << "Kacamadin, korsanlar karsinda.\n";
                        UzayKorsanlari uzayKorsanlari;
                        uzayKorsanlari.Olay(kullanici, gemi);
                    }
                }
                secimgecerli = true;
                break;
            case 2:
                if (rand() % 2) {
                    cout << "Kazandin\n";
                } else {
                    cout << "Kaybettin. gemi hasar aldi.\n";
                    kullanici.SaglikGuncelle(-30 * gemi.GetHasarCarpani());
                }
                secimgecerli = true;
                break;
            case 3:
                if (kullanici.para >= rastgelepara) {
                    kullanici.ParaGuncelle(-rastgelepara);
                    cout << rastgelepara << " altin verdin\n";
                } else {
                    cout << "Yeterli para yok. " << kullanici.para << " altin verdin. ";
                    kullanici.ParaGuncelle(-kullanici.para);

                    if (rand() % 2) {
                        cout << "Kazandin\n";
                    } else {
                        cout << "Kaybettin. gemi hasar aldi.\n";
                        kullanici.SaglikGuncelle(-30 * gemi.GetHasarCarpani());
                    }
                }
                secimgecerli = true;
                break;
            default:
                cout << "Gecersiz secim.\n";
                break;
        }
    }
    kullanici.MevcutDurum();
}