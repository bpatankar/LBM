void writeOutput ( int t )
{
  sprintf(OutDir,"Velocity");
  {
    
    sprintf(fname,"%s/vel.%d.txt",OutDir,t);
    fout.open(fname);
    for ( int y = 1; y < NY+1 ; y++ )
      {
	for ( int x = 1 ; x < NX+1 ; x++ )
	  {
	    fout << x <<" "<<y<<" "<<U[y][x].x<<" "<<U[y][x].y<<endl;
	  }
      }
    fout.close();
  }

  sprintf(OutDirDen,"Density");
  {
    sprintf(fnamed,"%s/den.%d.txt",OutDirDen,t);
    fout.open(fnamed);
    for ( int y = 1; y < NY+1 ; y++ )
      {
	fout << endl;
	for ( int x = 1 ; x < NX+1 ; x++ )
	  {
	    fout <<rho[y][x]<< " ";
	    //	    printf ("%g ",rho[y][x]);
	  }
      }
    fout.close();
  }
}
