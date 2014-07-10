/*Initialise*/
void initialise (void)
{
  for ( int y = 0 ; y < NY+2 ; y++ )
    for ( int x = 0 ; x < NX+2 ; x++ )
      {
	rho[y][x] = 1.;
	U[y][x].x=0;
	U[y][x].y=0;
	for ( int m = 0; m < Q ; m++ )
	  {
	    fnow[y][x][m] = 1.0/9.0;
	  }
	
      }

  updateQtys();
  writeOutput(0);
  double outp = checkMass();
  cout << "Mass after initialise "<<outp<<" "<<endl;
}
