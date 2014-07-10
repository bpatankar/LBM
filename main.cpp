/*LBM with mesh refinement*/
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

#include "structs.h"
#include "param.h"
#include "decVar.h"
#include "maths.h"

#include "updateQtys.h"
#include "checkMass.h"
#include "force.h"
#include "calcDistEqFunction.h"
#include "bcs.h"
#include "writeOutput.h"
#include "initialise.h"
#include "calculateC.h"
#include "generateMesh.h"
#include "stream.h"
#include "collide.h"


int main()
{
  
  /*Algorithm*

    Input Data
    Main Loop
    Calculate Distribution Eq Function
    Collision
    Streaming
    Boundaries
    Calculate Density and Velocity
    End Main Loop
    Output Data

   */

  initialise();
  generateMesh();
  calculateC();

  for ( int t = 0 ; t < MAXITER ; t++ )
    {

      
      /*Boundaries*/
      bcs();
      updateQtys();
      stream();

      //outp = checkMass();
      //cout << "Mass after Collisions at time "<<t<<" "<<outp<<endl;

      bcs();
      collide();

      //outp = checkMass();
      // cout << "Mass after streaming at time "<<t<<" "<<outp<<endl;

      force();
      outp=checkMass();

      if(!(t%1000))
	writeOutput(t);
      
      cout << "Mass after time t "<<t<<" "<<outp<<endl;   
    }

     
  return 0;
}

 
