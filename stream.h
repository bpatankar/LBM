void stream ( void )
{
 
  /*Streaming*/
  
  for ( int y = 1 ; y < NY+1 ; y++ )
    {
      for ( int x = 1 ; x < NX+1 ; x++ )
	{
	  for ( int m = 0 ; m < Q ; m++ )
	    {
	      ftemp[y][x][m] = fnow[y-(int)cinit[m].y][x-(int)cinit[m].x][m] ;
	    }
	}
    }  
  
  
  for ( int y = 1 ; y < NY+1 ; y++ )
    for ( int x = 1 ; x < NX+1 ; x++ )
      for ( int m = 0 ; m < Q ; m++ )
	fnow[y][x][m] = ftemp[y][x][m];  
  
  
}
