/*******************************************************************************
**
**  Monte Carlo eXtreme - GPU accelerated Monte Carlo Photon Migration
**  
**  Author     : Qianqian Fang
**  Email      : <q.fang at neu.edu>
**  Institution: Department of Bioengineering, Northeastern University
**  Address    : ISEC 223, 360 Huntington Ave, Boston, MA 02115
**  Homepage   : http://fanglab.org
**
**  MCX Web    : http://mcx.space
**
**  Unpublished work, see LICENSE.txt
**
*******************************************************************************/

#include <stdio.h>
#include "tictoc.h"
#include "mcx_utils.h"
#include "mcx_host.hpp"


int main (int argc, char *argv[]) {
     Config mcxconfig;
     float *fluence=NULL,totalenergy=0.f;

     mcx_initcfg(&mcxconfig);

     // parse command line options to initialize the configurations
     mcx_parsecmd(argc,argv,&mcxconfig);

     mcx_createfluence(&fluence,&mcxconfig);

     // this launches the MC simulation
     mcx_run_simulation(&mcxconfig,fluence,&totalenergy);

     // clean up the allocated memory in the config
     mcx_clearfluence(&fluence);
     mcx_clearcfg(&mcxconfig);
     return 0;
}
