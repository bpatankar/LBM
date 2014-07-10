

vector U[NY+2][NX+2] ; // Velocity grid
double rho[NY+2][NX+2] ;             // Density
double fnow[NY+2][NX+2][Q]; //f current
double fprev[NY+2][NX+2][Q]; //f prev
double ftemp[NY+2][NX+2][Q]; // f temp
vector c[NY+2][NX+2][Q]; // refined mesh non constant c's
double feq[Q];
double outp = 0.;

//Mesh
double Y[NY+2][NX+2];
double X[NY+2][NX+2];

//File Output
ofstream fuout,fvout,fout;
char fnameu[128],OutDir[128],fnamev[128],OutDirDen[128];
char fname[128],fnamed[128];
