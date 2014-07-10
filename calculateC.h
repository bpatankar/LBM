void calculateC ( void )
{
  for ( int y=1 ; y < NY+1 ; y++ )
    for ( int x=1 ; x < NX+1 ; x++ )
      {
	c[y][x][0].y=0;                   c[y][x][0].x=0;
	c[y][x][1].y=0;                   c[y][x][1].x=X[y][x+1]-X[y][x];
	c[y][x][2].y=Y[y+1][x]-Y[y][x];   c[y][x][2].x=0;
	c[y][x][3].y=0;                   c[y][x][3].x=X[y][x-1]-X[y][x];
	c[y][x][4].y=Y[y-1][x]-Y[y][x];   c[y][x][4].x=0;
	c[y][x][5].y=Y[y+1][x+1]-Y[y][x]; c[y][x][5].x=X[y+1][x+1]-X[y][x];
	c[y][x][6].y=Y[y+1][x-1]-Y[y][x]; c[y][x][6].x=X[y+1][x-1]-X[y][x];
	c[y][x][7].y=Y[y-1][x-1]-Y[y][x]; c[y][x][7].x=X[y-1][x-1]-X[y][x];
	c[y][x][8].y=Y[y-1][x+1]-Y[y][x]; c[y][x][8].x=X[y-1][x+1]-X[y][x];
      }
}
