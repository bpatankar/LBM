
/*Calculate Distribution Function*/
double calcDistEqFunction (vector U,vector cin)
{
  double ret = 0 ;
  double Usqr = dot (U,U);
  double cu = dot (cin,U);
  ret = (1 + 3 * cu + cu*cu * 9.0/2.0 - Usqr * 3.0/2.0 );
  return ret ;
}

