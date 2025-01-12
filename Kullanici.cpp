// Player.h
#include "Kullanici.h"
#include <iostream>

using namespace std;

Kullanici::Kullanici() : saglik(100), yakit(100), para(0) {}

void Kullanici::SaglikGuncelle(float saglikdegeri) {
    saglik += saglikdegeri;
    if (saglik < 0) saglik = 0;
}

void Kullanici::YakitGuncelle(float yakitdegeri) {
    yakit += yakitdegeri;
    if (yakit < 0) yakit = 0;
}

void Kullanici::ParaGuncelle(float paradegeri) {
    para += paradegeri;
}

void Kullanici::MevcutDurum() const {
    cout << "Guncel Durum -> Saglik: " << saglik << "\nYakit: " << yakit << "\nPara: "  <<para<< "\n";
}