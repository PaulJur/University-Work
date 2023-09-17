#include <iostream>

using namespace std;

class Paspirtukas{
protected:

int mSvoris;
float rDiametras;
float aukstis;
string pTipas;

public:
    Paspirtukas(){
    mSvoris=0;
    aukstis=0;
    pTipas="";
    }
    Paspirtukas(int svoris,float aukst,string tipas){
        mSvoris=svoris;
        aukst=aukstis;
        pTipas=tipas;
    }

    void setSvoris(int a){
       mSvoris=a;
    }
    void setAukstis(float a){
        aukstis=a;
    }
    void setpTipas(string a){
        pTipas=a;
    }
    void setrDiametras(float a){
    rDiametras=a;
    }
    int getSvoris(){
        return mSvoris;
    }
    float getAukstis(){
        return aukstis;
    }
    string getpTipas(){
        return pTipas;
    }
    float getrDiametras(){
        return rDiametras;
    }
};

class ePaspirtukas:public Paspirtukas{
protected:

int bDydis;
float aNuvaz;
int mGreitis;

public:
    ePaspirtukas(){
        bDydis=0;
        aNuvaz=0;
        mGreitis=0;
    }
    ePaspirtukas(int Dydis,float Nuvaz,int Greitis){
        bDydis=Dydis;
        aNuvaz=Nuvaz;
        mGreitis=Greitis;
    }

    void setbDydis(int a){
        bDydis=a;
    }
    void setaNuvaz(float a){
        aNuvaz=a;
    }
    void setmGreitis(int a){
        mGreitis=a;
    }
    int getbDydis(){
        return bDydis;
    }
    float getaNuvaz(){
        return aNuvaz;
    }
    int getmGreitis(){
        return mGreitis;
    }


};



int main()
{
ePaspirtukas elekt;
elekt.Paspirtukas::setSvoris(8);
elekt.Paspirtukas::setAukstis(80);
elekt.Paspirtukas::setpTipas("Lietuviskas");
elekt.Paspirtukas::setrDiametras(2.8);

elekt.setbDydis(20);
elekt.setaNuvaz(50);
elekt.setmGreitis(70);

cout<<"SVORIS"<<" "<<elekt.Paspirtukas::getSvoris()<<"kg "<<"AUKSTIS "<<elekt.Paspirtukas::getAukstis()<<"cm "<<"TIPAS "<<elekt.Paspirtukas::getpTipas()<<" "<<"RATU DIAMETRAS "<<elekt.Paspirtukas::getrDiametras()<<"cm2"<<endl;
cout<<"BATERIJOS DYDIS"<<" "<<elekt.getbDydis()<<"kWh "<<"ATSTUMA GALI NUVAZIUOTI "<<elekt.getaNuvaz()<<"km "<<"MAXIMUM GREITIS "<<elekt.getmGreitis()<<"km/h"<<endl;






    return 0;
}
