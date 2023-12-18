#include <iostream>
#include "Gun_H.h"
using namespace std;

// Compile command: g++ Gun.cpp TestGun.cpp -o TestGun

int main()
{
    Gun glock(10, 17, 50);

    cout << "Stored ammo: " << glock.currentStoredAmmo() << endl;

    cout << "Reload." << endl;

    glock.reload();

    cout << "Stored ammo: " << glock.currentStoredAmmo() << endl;

    cout << "Pickup 20 ammo: " << endl;

    glock.moreAmmo(20);

    cout << "Stored ammo: " << glock.currentStoredAmmo() << endl;

    return 0;
}