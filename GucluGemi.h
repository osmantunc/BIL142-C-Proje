//
// Created by User on 9.03.2024.
//

#ifndef CosmicVoyager_GUCLUGEMI_H
#define CosmicVoyager_GUCLUGEMI_H
#include "Gemi.h"

class GucluGemi : public Gemi {
public:
    float GetHasarCarpani() const override { return 0.5; }
    float GetKacmaCarpani() const override { return 0.5; }
};

#endif //CosmicVoyager_GUCLUGEMI_H
