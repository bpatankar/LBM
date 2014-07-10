void force() 
{
  double ff_true;
  ff_true = ff / 6.0;
  for (int y=1; y<NY+1; y++)
    for (int x=1; x<NX+1; x++) {
      fnow[y][x][1] += ff_true;
      fnow[y][x][5] += ff_true;
      fnow[y][x][8] += ff_true;
      fnow[y][x][3] -= ff_true;
      fnow[y][x][6] -= ff_true;
      fnow[y][x][7] -= ff_true;
    }
}
