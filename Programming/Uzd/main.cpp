#include<cmath>
#include<iomanip>
#include<fstream>
#include<iostream>

using namespace std;

struct Zmogus
{
    string vardas,pavarde;
    int h,m,s,h1,m1,s1;
    int uzt;
};

void Yrasimas(Zmogus &zmogus)
{
    cin>>zmogus.vardas;
    cin>>zmogus.pavarde;
    cin>>zmogus.h;
    cin>>zmogus.m;
    cin>>zmogus.s;
    cin>>zmogus.h1;
    cin>>zmogus.m1;
    cin>>zmogus.s1;
}

int kiek_Uztruko(int h,int m,int s,int h1,int m1,int s1)
{
    int uzt=h1*3600+m1*60+s1-h*3600-m*60-s;
    return uzt;
}

void SpeedTest(int &fasti,int &slowi,int i,int &fast,int &slow,int time)
{
    if(time<fast)
    {
        fast=time;
        fasti=i;
    }
    if(time>slow)
    {
        slow=time;
        slowi=i;
    }
}

int main ()
{
    int n, fasti, slowi,fast,slow;
    cin>>n;
    Zmogus  zmones[n];
    for(int i=0;i<n;i++)
    {
        Yrasimas(zmones[i]);
        zmones[i].uzt=kiek_Uztruko(zmones[i].h,zmones[i].m,zmones[i].s,zmones[i].h1,zmones[i].m1,zmones[i].s1);
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            fasti=i;
            slowi=i;
            fast=zmones[i].uzt;
            slow=zmones[i].uzt;
        }
        else SpeedTest(fasti,slowi,i,fast,slow,zmones[i].uzt);
    }
    cout<<"greiciausias: "<<zmones[fasti].vardas<<" "<<zmones[fasti].pavarde<<" truko:"<<zmones[fasti].uzt<<"sekundes"<<endl;
    cout<<"leciausas: "<<zmones[slowi].vardas<<" "<<zmones[slowi].pavarde<<" truko:"<<zmones[slowi].uzt<<"sekundes"<<endl;
    return 0;
}