//
// Created by User on 24.02.2024.
//
#include "TerkEdilmisGezegen.h"
#include "UzayKorsanlari.h"
#include <iostream>
#include <cstdlib>

void TerkEdilmisGezegen::Olay(Kullanici &kullanici, Gemi &gemi) {
    cout << "Terkedilmis gezegene geldin\n";
    if (rand() % 2) {
        kullanici.ParaGuncelle(10);
        cout << "10 altin buldun\n";
        kullanici.MevcutDurum();
    } else {
        cout << "Uzay korsanlarina yakalandiniz\n";
        UzayKorsanlari uzayKorsanlari;
        uzayKorsanlari.Olay(kullanici, gemi);
    }

}