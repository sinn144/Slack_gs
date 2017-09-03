#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double Y,Ya,Yd;
  double Yh,Ym;
 
  cout << "please write the time > " << flush;
  cin >> Y;

  Yd = floor(Y);
  Yh = floor((Y-Yd)*24);
  Ym = floor(((Y-Yd)*24-Yh)*60);
  Ya = ((Y-Yd)*24-Yh)*60-Ym;

  cout << "Your writing time is:"<<Yd<<" days "<<Yh<<" hours "<<Ym<<" minutes leave "<<Ya<<"."<<endl; 

  return 0;
}