#include <iostream>
#include<iomanip>
#include<fstream>


using namespace std;


const int y= 2021;
const int m= 2;
const int d= 11;

class Person{
    public:

struct Data{
int y,m,d;
};

void Amzius(){
    if(data.m<m || (data.m==m && data.d>=d))
            amzius=y-data.y;
        else amzius=data.y-1;
}
int GetAge(){
    return amzius;
}

void Vardas(string name){
    vardas=name;
}

string GetVardas(){
    return vardas;
}
void Pavarde(string lname){
    pavarde=lname;
}
string GetLName(){
    return pavarde;
}

void YearDate(int Ydate, int Mdate, int Ddate){
    data.y=Ydate;
    data.m=Mdate;
    data.d=Ddate;
}
Data GetDate(){
    return data;
}

void Height(float Fheight){
    ugis=Fheight;
}
float GetHeight(){
    return ugis;
}

void  SetALL(string name, string lname, int Ydate,int Mdate,int Ddate,float Fheight){
    vardas=name;
    pavarde=lname;
    data.y=Ydate;
    data.m=Mdate;
    data.d=Ddate;
    ugis=Fheight;
    GetAge();
}

  private:
string vardas,pavarde;
Data data;
int amzius;
float ugis;
};


int main()

{

    Person persons[5];
    string name,lname;
    int Ydate,Mdate,Ddate;
    float Fheight;
    for ( int i=0;i<5;i++){
    cin>>name>>lname>>Ydate>>Mdate>>Ddate>>Fheight;
    persons[i].SetALL(name,lname,Ydate,Mdate,Ddate,Fheight);
}
cout<<endl;
for ( int i=0;i<5;i++){
    cout<<persons[i].GetVardas<<"  "<<persons[i].GetLName<<" "<<persons[i].GetDate<<" "<<persons[i].GetHeight<<endl;

}
int indexMax=0;
int indexMin=0;

Person auksc=persons[0];
Person zemiaus=persons[0];

for(int i=1;i<5;i++){
    if(persons[indexMax].Amzius<persons[i].Amzius) indexMax=i;
    if(persons[indexMin].Amzius>persons[i].Amzius) indexMin=i;

   if(auksc.GetHeight<persons[i].GetHeight) auksc=persons[i];
    if(zemiaus.GetHeight>persons[i].GetHeight)  zemiaus=persons[i];

}

//Nezinau kur yra problema, padariau su jusu video pagalba ir grupioku.

cout<<endl;
cout<<"Auksc"<<" "<<auksc.GetVardas<<" "<<auksc.GetLName<<" "<<auksc.GetHeight<<endl;
cout<<"Zemi"<<" "<<zemiaus.GetVardas<<" "<<zemiaus.GetLName<<" "<<zemiaus.GetHeight<<endl;
cout<<"seniaus"<<" "<<persons[indexMax].GetVardas<<" "<<persons[indexMax].GetLName<<" "<<persons[indexMax].Amzius<<endl;
cout<<"jaun"<<" "<<persons[indexMin].GetVardas<<" "<<persons[indexMin].GetLName<<" "<<persons[indexMin].Amzius<<endl;

int n=5;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(persons[i].GetVardas>persons[j].Amzius) swap(persons[i],persons[j]);
    }

}
}
