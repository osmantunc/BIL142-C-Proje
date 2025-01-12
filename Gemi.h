//
// Created by User on 24.02.2024.
//

#ifndef CosmicVoyager_GEMI_H
#define CosmicVoyager_GEMI_H

class Gemi {
public:
    virtual float GetHasarCarpani() const = 0;
    virtual float GetKacmaCarpani() const = 0;
    virtual ~Gemi() = default;
};

#endif //CosmicVoyager_GEMI_H