/*D2Q9*/
#define D 2
#define Q 9
#define ff 0.00005




/*Constants*/
#define LX 1
#define LY 0.1
#define NX 20
#define NY 50
#define MAXITER 100000
#define pi 3.141
/*Debug*/
#define FOR(i,a,b) for ( int i = a; i < b; i++)
#define ERR(...) cerr<<(__VA_ARGS__)<<" ";

double tau = 0.666;
/*Lattice Weights*/
double w[]={4./9. ,1./9., 1./9., 1./9., 1./9. ,1./36. ,1./36. ,1./36. ,1./36.};

/* The c's */

vector cinit[9] = {
  {0,0},
  {1,0},
  {0,1},
  {-1,0},
  {0,-1},
  {1,1},
  {-1,1},
  {-1,-1},
  {1,-1}
};

#define cs2  (1.0 /  3.0)
#define cs22 (2.0 *  cs2)
#define cssq (2.0 /  9.0)

#define rt0  (4.0 /  9.0)
#define rt1  (1.0 /  9.0)
#define rt2  (1.0 / 36.0)

/*Metric Tensor*/
double g[3][3]={{0,0,0},{0,0,0},{0,0,0}}; // Polar Coordinates.
