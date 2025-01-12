//
// Created by User on 24.02.2024.
//

#ifndef CosmicVoyager_UZAYKORSANLARI_H
#define CosmicVoyager_UZAYKORSANLARI_H
#include "Event.h"
#include "Gemi.h"

class UzayKorsanlari : public Event {
public:
    void Olay(Kullanici &kullanici, Gemi &gemi) override;
};

#endif //CosmicVoyager_UZAYKORSANLARI_H