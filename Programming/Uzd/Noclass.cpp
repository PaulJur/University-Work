#include <iostream>

using namespace std;

struct Data{
int y,m,d;
};

struct Person{

string vardas,pavarde;
Data data;
int amzius;
float ugis;
};
const int y= 2021;
const int m= 2;
const int d= 11;


int main()

{
    int metai=0;

    Person persons[5];
    for ( int i=0;i<5;i++){
    cin>> persons[i].vardas>>persons[i].pavarde>>persons[i].data.y>>persons[i].data.m>>persons[i].data.d>>persons[i].ugis;

}
cout<<endl;
for ( int i=0;i<5;i++){
    cout<< persons[i].vardas<<"  "<<persons[i].pavarde<<" "<<persons[i].data.y<<" "<<persons[i].data.m<<" "<<persons[i].data.d<<" "<<persons[i].ugis<<endl;

}
for ( int i=0;i<5;i++){
if(persons[i].data.m<m || (persons[i].data.m==m && persons[i].data.d>=d)){
            persons[i].amzius=y-persons[i].data.y;
        }
        else {

            persons[i].amzius=y-persons[i].data.y-1;
        }

}
int indexMax=0;
int indexMin=0;

Person auksc=persons[0];
Person zemiaus=persons[0];

for(int i=1;i<5;i++){
    if(persons[indexMax].amzius<persons[i].amzius) indexMax=i;
    if(persons[indexMin].amzius>persons[i].amzius) indexMin=i;

   if(auksc.ugis<persons[i].ugis) auksc=persons[i];
    if(zemiaus.ugis>persons[i].ugis)  zemiaus=persons[i];


}
int n=5;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(persons[i].amzius>persons[j].amzius) swap(persons[i],persons[j]);
    }
}
cout<<endl;
cout<<"Auksc"<<" "<<auksc.vardas<<" "<<auksc.pavarde<<" "<<auksc.ugis<<endl;
cout<<"Zemi"<<" "<<zemiaus.vardas<<" "<<zemiaus.pavarde<<" "<<zemiaus.ugis<<endl;
cout<<"seniaus"<<" "<<persons[indexMax].vardas<<" "<<persons[indexMax].pavarde<<" "<<persons[indexMax].amzius<<endl;
cout<<"jaun"<<" "<<persons[indexMin].vardas<<" "<<persons[indexMin].pavarde<<" "<<persons[indexMin].amzius<<endl;



}


