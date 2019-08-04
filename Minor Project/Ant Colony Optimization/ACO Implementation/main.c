#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <climits>
#include "ACO.h"      //includes the aco.h file in the previous directory

#define ITERATIONS (int) 5

struct acoptimization{
    NUMBEROFANTS (int) 4
    NUMBEROFCITIES (int) 8
    ALPHA (double) 0.5      // if (ALPHA == 0) { stochastic search & sub-optimal route }
    BETA (double) 0.8       // if (BETA  == 0) { sub-optimal route }
    Q (double) 80           // Estimation of the suspected best route.
    RO (double) 0.2         // Pheromones evaporation. 
    TAUMAX (int) 2          // Maximum pheromone random number.
    INITIALCITY	(int) 0
};
typedef struct acoptimization ACO
typedef aco *ACOPTIMIZATION


int main()
{
	ANTS -> init();

	ANTS -> connectCITIES (0, 1);
	ANTS -> connectCITIES (0, 2);
	ANTS -> connectCITIES (0, 3);
	ANTS -> connectCITIES (0, 7);
	ANTS -> connectCITIES (1, 3);
	ANTS -> connectCITIES (1, 5);
	ANTS -> connectCITIES (1, 7);
	ANTS -> connectCITIES (2, 4);
	ANTS -> connectCITIES (2, 5);
	ANTS -> connectCITIES (2, 6);
	ANTS -> connectCITIES (4, 3);
	ANTS -> connectCITIES (4, 5);
	ANTS -> connectCITIES (4, 7);
	ANTS -> connectCITIES (6, 7);
	/* ANTS -> connectCITIES(8, 2);
	ANTS -> connectCITIES(8, 6);
	ANTS -> connectCITIES(8, 7); */

	ANTS -> setCITYPOSITION (0,  1,  1);
	ANTS -> setCITYPOSITION (1, 10, 10);
	ANTS -> setCITYPOSITION (2, 20, 10);
	ANTS -> setCITYPOSITION (3, 10, 30);
	ANTS -> setCITYPOSITION (4, 15,  5);
	ANTS -> setCITYPOSITION (5, 10,  1);
	ANTS -> setCITYPOSITION (6, 20, 20);
	ANTS -> setCITYPOSITION (7, 20, 30);
	// ANTS -> setCITYPOSITION(8, 26, 20);

	ANTS -> printGRAPH ();

	ANTS -> printPHEROMONES ();

	ANTS -> optimize (ITERATIONS);

	ANTS -> printRESULTS ();

	return 0;
}
