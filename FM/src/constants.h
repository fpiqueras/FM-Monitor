#ifndef CONSTANTS_H
#define CONSTANTS_H

// Purpose: Global Constants for Lib Utils
namespace Constants {

	/* Used for < operator in Card */
	const int OrderHighestAtk = 1;
	const int OrderLowestAtk = 2;
	const int OrderHighestFusions = 3;
	const int OrderLowestFusions = 4;

	/* Card Types */
	const int Dragon = 1;
	const int Thunder = 2;
	const int Spellcaster = 3;

	/* Card Attributes */
	const int Light = 1;
	const int Dark = 2;
	const int Water = 3;
	const int Earth = 4;
	const int Wind = 5;
	const int Fire = 6;
}

#endif //CONSTANTS_H