//
// Created by User on 9.03.2024.
//

#ifndef CosmicVoyager_HIZLIGEMI_H
#define CosmicVoyager_HIZLIGEMI_H
#include "Gemi.h"

class HizliGemi : public Gemi {
public:
    float GetHasarCarpani() const override { return 1.5; }
    float GetKacmaCarpani() const override { return 1.5; }
};

#endif //CosmicVoyager_HIZLIGEMI_H
