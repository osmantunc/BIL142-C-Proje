//
// Created by User on 24.02.2024.
//
#include "AsteroidKusagi.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void AsteroidKusagi ::Olay(Kullanici &kullanici, Gemi &gemi){
    cout << "Asteroid kusagindan geciyorsun\n" ;
    for (int i = 0; i < 3; i++) {
        if(rand() & 2) {
            float Hasar = (10) * gemi.GetHasarCarpani();
            kullanici.SaglikGuncelle(-Hasar);
            cout << i+1 << ". hasar: " << Hasar << " hasar aldiniz.\n" ;
        }else{
            cout<<"hasar almadin \n";
        }
    }

    if (kullanici.saglik <= 0) {
        cout << "Saglik = 0 \n. oyun sona erdi.\n" ;
    } else {
        cout << "Asteroid kusagindan gectin.\n" ;
    }

    kullanici.MevcutDurum();
}