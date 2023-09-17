#include <iostream>

using namespace std;

struct Zmogus{

  string vardas,pavarde;
  int h,m,s,h1,m1,s1;
  int uztruko=0;



};
int kiekUztruko(Zmogus zmogiukas){

    int uztruko=zmogiukas.h1*3600+zmogiukas.m1*60+zmogiukas.s1-zmogiukas.h*3600-zmogiukas.m*60+zmogiukas.s;
    return uztruko;
}



int main()
{
Zmogus zmogus1;

zmogus1.vardas="Petras";
zmogus1.pavarde="Jonaitis";
zmogus1.h=1;
zmogus1.m=22;
zmogus1.s=15;
zmogus1.h1=2;
zmogus1.m1=20;
zmogus1.s1=15;

zmogus1.uztruko=kiekUztruko(zmogus1);


cout<<zmogus1.uztruko<<endl;
    return 0;
}
