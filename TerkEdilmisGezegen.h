//
// Created by User on 24.02.2024.
//

#ifndef CosmicVoyager_TERKEDILMISGEZEGEN_H
#define CosmicVoyager_TERKEDILMISGEZEGEN_H
#include "Event.h"
#include "Oyun.h"
#include "Gemi.h"

class TerkEdilmisGezegen : public Event {
public:
    void Olay(Kullanici &kullanici, Gemi &gemi) override ;
};

#endif //CosmicVoyager_TERKEDILMISGEZEGEN_H