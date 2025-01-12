//
// Created by User on 24.02.2024.
//
#include "Oyun.h"


Oyun::Oyun() : Oyunbitti(false), KacinciEvent(0) {
    srand(time(NULL));
    GemiAyari();
}

void Oyun::GemiAyari() {
    int gemisecim;
    bool secimgecerli = false;
    while (!secimgecerli) {
        cout << "Gemini sec (1: Guclu gemi, 2: Hizli gemi, 3: Normal gemi): \n" ;
        cin >> gemisecim;
        switch (gemisecim) {
            case 1:
                gemi = make_unique<GucluGemi>();
                secimgecerli = true;
                break;
            case 2:
                gemi = make_unique<HizliGemi>();
                secimgecerli = true;
                break;
            case 3:
                gemi = make_unique<NormalGemi>();
                secimgecerli = true;
                break;
            default:
                cout << "Gecersiz secim.1, 2 veya 3 numaralardan birini secin.\n" ;
                break;
        }
    }
}

void Oyun::OyunSistemi() {
    while (!Oyunbitti && KacinciEvent < 5) {
        int rastgeleevent = rand() % 3;
        switch (rastgeleevent) {
            case 0:
                eventler.push_back(make_unique<AsteroidKusagi>());
                break;
            case 1:
                eventler.push_back(make_unique<TerkEdilmisGezegen>());
                break;
            case 2:
                eventler.push_back(make_unique<UzayKorsanlari>());
                break;
        }

        eventler.back()->Olay(kullanici, *gemi);

        if (kullanici.saglik <= 0 || kullanici.yakit <= 0) {
            Oyunbitti = true;
        }


        KacinciEvent++;
    }

    Oyunbitisi();
}

void Oyun::Oyunbitisi() {
    cout << "Oyun Sonu. Saglik: " << kullanici.saglik << "\nYakit: " << kullanici.yakit << "\nPara: " << kullanici.para << "\n" ;
    float puan = puanHesapla();
    cout << "Toplam Puan: " << puan << "\n";
}

float Oyun::puanHesapla() const {
    return (kullanici.yakit * 5) + (kullanici.saglik * 10) + (kullanici.para*10);
}

