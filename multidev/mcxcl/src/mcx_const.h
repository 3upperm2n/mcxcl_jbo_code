#ifndef _MCEXTREME_CONSTANT_H
#define _MCEXTREME_CONSTANT_H


#define ONE_PI             3.1415926535897932f     /*pi*/
#define TWO_PI             6.28318530717959f       /*2*pi*/
#define EPS                1e-10f                  /*round-off limit*/

#define C0                 299792458000.f          /*speed of light in mm/s*/
#define R_C0               3.335640951981520e-12f  /*1/C0 in s/mm*/

#define VERY_BIG           1e10f                   /*a big number*/
#define JUST_ABOVE_ONE     1.0001f                 /*test for boundary*/
#define SAME_VOXEL         -9999.f                 /*scatter within a voxel*/
#define NO_LAUNCH          9999                    /*when fail to launch, for debug*/
#define MAX_PROP           2000                     /*maximum property number*/
#define MAX_DETECTORS      2000

#define DET_MASK           0xFFFF0000
#define MED_MASK           0x0000FFFF


#endif
