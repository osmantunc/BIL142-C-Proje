//
// Created by User on 24.02.2024.
//

#ifndef CosmicVoyager_ASTEROIDKUSAGI_H
#define CosmicVoyager_ASTEROIDKUSAGI_H
#include "Event.h"
#include "Gemi.h"


class AsteroidKusagi : public Event {
public:
    void Olay(Kullanici &kullanici, Gemi &gemi) override;
};


#endif //CosmicVoyager_ASTEROIDKUSAGI_H
