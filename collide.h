void collide ( void )
{
  double invtau;

  invtau = 1.0 / tau;
  updateQtys();
  
  /*Collisions*/
  for ( int y = 1 ; y < NY+1 ; y++ )
    for ( int x = 1 ; x < NX+1 ; x++ )
      for ( int m = 0 ; m < Q ; m++ )
	{
	  feq[m] = calcDistEqFunction (U[y][x],cinit[m]);
	  fnow[y][x][m]=fnow[y][x][m]-(invtau)*(fnow[y][x][m]-w[m]*rho[y][x]*feq[m]);
	  }
}
