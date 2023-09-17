#include <iostream>

using namespace std;

struct PersonType {

string vardas,pavarde;
int h,m,s,h1,m1,s1;
int uztruko=0;

};

int  kiekUztruko(PersonType zmogiukas){

    int uztruko=zmogiukas.h1*3600+zmogiukas.m1*60+zmogiukas.s1-zmogiukas.h*3600-zmogiukas.m*60-zmogiukas.s;
return uztruko;
}


int main()
{
    int kintamasis;

    PersonType zmones[5];

    zmones[0].vardas="petras";
    zmones[0].pavarde="jonaitis";
    zmones[0].h=1;
    zmones[0].m=22;
    zmones[0].s=15;
    zmones[0].h1=2;
    zmones[0].m1=22;
    zmones[0].s1=15;

    zmones[0].uztruko=kiekUztruko(zmones[0]);

    cout <<zmones[0].uztruko << endl;
    return 0;
}
