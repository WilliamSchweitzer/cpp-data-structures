#ifndef Gun_H
#define Gun_H

/** 
 * A interface (Abstract Class) for simulating a video game like gun with interger values stored in memory.
 */

class Gun
{
	public:
		explicit Gun( int loadedAmmo = 0, int maxAmmo = 6, int storedAmmo = 0);

		void reload();

		void moreAmmo( int x );

		int currentStoredAmmo() const;

	private:
		int loadedAmmo;

		int maxAmmo;

		int storedAmmo;
};

#endif

