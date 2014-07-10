void updateQtys( void ) 
{
 /*Update Density and Velocity*/
      for ( int y = 1 ; y < NY+1; y++ )
	{
	for ( int x = 1 ; x < NX+1 ; x++ )
	  {
	    /*Density*/
	    double den=0.;
	    for ( int m = 0 ; m < Q; m++ )
	      {
		den += fnow[y][x][m] ;
	      }

	    rho[y][x] = den;//(den!=1?1:den);

	    /*Velocity*/
	    double rhou=0. ;
	    double rhov=0. ;
	    for ( int m = 0 ; m < Q; m++ )
	      {
		rhou += (fnow[y][x][m]*cinit[m].x);
		rhov += (fnow[y][x][m]*cinit[m].y);
	      }
	
	    U[y][x].x = rhou/rho[y][x]; 
	    U[y][x].y = rhov/rho[y][x];
	    
	    
	  }
	}
}
