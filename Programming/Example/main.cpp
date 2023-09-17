#include <iostream>

using namespace std;

int funkcija(int a,int b){

int result;
result= 2*a+9+b;
return result;

}
bool pilnaF(int a){

if (a>17) return true;
else return false;


}
void pilna(int metai[],int n,bool ar[]){
for(int i=0;i<n;i++)
ar[i]=pilnaF(metai[i]);

}
void irasymas(string vardai[],string pavarde[],int amziai[],int n){

for(int i=0;i<n;i++){
cin>>vardai[i]>>pavarde[i]>>amziai[i];

}

}
void spausdinimas(string vardai[],string pavarde[],int amziai[],bool pilna[],int n){

for(int i=0;i<n;i++){
cout<<i+1<<"."<<vardai[i]<<" "<<pavarde[i]<<" "<<amziai[i]<<" "<<pilna[i]<<endl;

}

}

int main()
{
int n;
cin>>n;
string vardai[n],pavarde[n];
int gimimo[n];
bool pilnametis[n];


string vardas;
cin>>vardas;
cout<<vardas[11];

irasymas(vardai,pavarde,gimimo,n);
spausdinimas(vardai,pavarde,gimimo,pilnametis,n);

pilna(gimimo,n,pilnametis);
spausdinimas(vardai,pavarde,gimimo,pilnametis,n);

return 0;
}
