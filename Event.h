//
// Created by User on 24.02.2024.
//

#ifndef CosmicVoyager_EVENT_H
#define CosmicVoyager_EVENT_H
#include "Kullanici.h"
#include "Gemi.h"

class Event {
public:
    virtual void Olay(Kullanici &kullanici, Gemi &gemi) = 0;
    virtual ~Event() = default;
};

#endif //CosmicVoyager_EVENT_H