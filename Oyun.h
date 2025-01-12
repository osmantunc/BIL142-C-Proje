//
// Created by User on 24.02.2024.
//

#ifndef CosmicVoyager_OYUN_H
#define CosmicVoyager_OYUN_H
#include "Kullanici.h"
#include "Gemi.h"
#include "GucluGemi.h"
#include "HizliGemi.h"
#include "NormalGemi.h"
#include "Event.h"
#include "AsteroidKusagi.h"
#include "TerkEdilmisGezegen.h"
#include "UzayKorsanlari.h"
#include <memory>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Oyun {
    Kullanici kullanici;
    unique_ptr<Gemi> gemi;
    vector<unique_ptr<Event>> eventler;
    bool Oyunbitti;
    int KacinciEvent;


public:
    Oyun();
    void GemiAyari();
    void OyunSistemi();
    void Oyunbitisi();
    float puanHesapla() const;
};


#endif //CosmicVoyager_OYUN_H