//
// Created by User on 9.03.2024.
//

#ifndef CosmicVoyager_NORMALGEMI_H
#define CosmicVoyager_NORMALGEMI_H
#include "Gemi.h"

class NormalGemi : public Gemi {
public:
    float GetHasarCarpani() const override { return 1.0; }
    float GetKacmaCarpani() const override { return 1.0; }
};

#endif //CosmicVoyager_NORMALGEMI_H
