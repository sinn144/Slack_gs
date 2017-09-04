#include <iostream>
#include <cmath>
using namespace std;

double pi = 3.14159265359;
double Yday = 365.2425;

double SAm(double e,double w){
  double fs,fa,us,ua,ls,la,n;
  fs = (180 - w)*pi/180;
  fa = (360 - w)*pi/180;
  us = 2 * atan( sqrt( (1-e)/(1+e) ) * tan( fs/2 ));
  ua = 2 * pi + 2 * atan( sqrt( (1-e)/(1+e) ) * tan( fa/2 ));
  ls = us - e*sin(us);
  la = ua - e*sin(ua);
  n = la - ls;
  cout << n <<endl; 
  return n * Yday / (2 * pi);
}

int main(){

  double e,w,Y,Ya,Yd,Yh,Ym;
 
  cout << "please write Eccentricity e:" << flush;
  cin >> e;

  cout << "please write Perihelion longitude w~:" << flush;
  cin >> w;

  Y = SAm(e,w);
  Yd = floor(Y);
  Yh = floor((Y-Yd)*24);
  Ym = floor(((Y-Yd)*24-Yh)*60);
  Ya = ((Y-Yd)*24-Yh)*60-Ym;

  cout << "Your writing time is:"<<Yd<<" days "<<Yh<<" hours "<<Ym<<" minutes leave "<<Ya<<"."<<endl; 

  return 0;
}