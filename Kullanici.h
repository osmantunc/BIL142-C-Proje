//
// Created by User on 24.02.2024.
//

#ifndef CosmicVoyager_KULLANICI_H
#define CosmicVoyager_KULLANICI_H

class Kullanici {
public:
    float saglik;
    float yakit;
    float para;

    Kullanici();

    void SaglikGuncelle(float saglikdegeri);
    void YakitGuncelle(float yakitdegeri);
    void ParaGuncelle(float paradegeri);
    void MevcutDurum() const;
};

#endif //CosmicVoyager_KULLANICI_H