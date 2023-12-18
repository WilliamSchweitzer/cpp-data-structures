#include "Gun_H.h";

// Implementation of Gun interface

/**
 * Construct the Gun with arguments passed to private data members
*/
Gun::Gun( int initLoadedAmmo, int initMaxAmmo, int initStoredAmmo ) : 
    loadedAmmo{initLoadedAmmo}, 
    maxAmmo{initMaxAmmo},
    storedAmmo{initStoredAmmo} 
    {}
// Implement member functions

void Gun::reload() 
{
    // Reloading empties the loaded ammo
    if (storedAmmo >= maxAmmo) {
        storedAmmo -= maxAmmo;
        loadedAmmo = maxAmmo;
    }
    else {
        loadedAmmo = storedAmmo;
        storedAmmo = 0;
    }
}

void Gun::moreAmmo( int x ) 
{
    storedAmmo += x;
}

int Gun::currentStoredAmmo() 
{
    return storedAmmo;
}