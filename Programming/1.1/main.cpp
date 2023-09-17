#include <iostream>

using namespace std;

int main()
{
  int tv,tm,ts,mv,mm,ms,t,laikas;
  cin>>tv>>tm>>ts>>mv>>mm>>ms>>t;
  float g,atstumas;

  g=331.5+0.6*t;
  laikas=(mv-tv)*60*60+(mm-tm)*60+ms-ts;
  atstumas=g*laikas/2;

  cout<<atstumas;










    return 0;
}

