void generateMesh ( void )
{
  double deltaX = LX/NX;
  double deltaY = LY/NY;
  Y[0][0] = 0 ;
  X[0][0] = 0 ;
  for ( int y = 1 ; y < NY+2 ; y++)
    for ( int x = 1; x < NX+2 ; x++ )
      {
	Y[y][x] = Y[y-1][x] + deltaY ;
	X[y][x] = X[y][x-1] + deltaX;
      }
}
