/*Check Mass*/
double checkMass (void)
{
 double mass=0;

 FOR(y,1,NY+1){//cout << endl;
   FOR(x,1,NX+1){
     double den = 0.;
     for ( int m = 0 ; m < Q; m++ )
       {
	 den += fnow[y][x][m] ;
       }
     mass+=den;
     //cout<<rhoCheck[y][x]<<" ";
   }
 }
 
 // mass+=rhoCheck[y][x];
 return mass;
}
