void bcs ( void )
{
      /*Reset all boundaries*/
      for ( int x = 0; x < NX+2 ; x++ )
	for ( int m = 0; m < Q ; m++ )
	  {
	    fnow[0][x][m] = 0.0;
	    fnow[NY+1][x][m] = 0.0; 
	  }

      for ( int y = 0; y < NY+2 ; y++ )
	for ( int m = 0; m < Q ; m++ )
	  {
	    fnow[y][0][m] = 0.0;
	    fnow[y][NX+1][m] = 0.0; 
	  }

      for ( int x = 1 ; x < NX+1 ; x++ )
	{

	  /*Wall Bottom*/

	  fnow[0][x ][2] = fnow[1][x][4];
	  fnow[0][x-1][5] = fnow[1][x][7];
	  fnow[0][x+1][6] = fnow[1][x][8];

	  /*Wall Top*/

	  fnow[NY+1][x ][4] = fnow[NY][x][2];
	  fnow[NY+1][x-1][8] = fnow[NY][x][6];
	  fnow[NY+1][x+1][7] = fnow[NY][x][5];
	}
      

	  /*Periodic bc along x*/
      for ( int y=1; y < NY+1 ; y++ )
	for ( int m=0; m < Q ; m++ )
	  {
 	    fnow[y][0][m] = fnow[y][NX][m];
	    fnow[y][NX+1][m] = fnow[y][1][m];
	  }
}
