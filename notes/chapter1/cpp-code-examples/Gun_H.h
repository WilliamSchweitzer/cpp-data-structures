#ifndef Gun_H
#define Gun_H

/** 
 * A class for simulating a video game like gun with interger values stored in memory.
 */

class Gun
{
	public:
		explicit Gun( int currentAmmo = 0, int maxAmmo = 6 );

		int reload() const;

		void write( int x );

	private:
		int storedAmmo;
};

#endif

