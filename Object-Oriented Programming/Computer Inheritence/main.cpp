#include <iostream>

using namespace std;

class Kompiuteris{
private:
    int RAM;
    int SSD;
    string CPU;
public:
    Kompiuteris(){
    RAM=0;
    SSD=0;
    CPU="";
    }
    Kompiuteris(int R,int S, string C){
    RAM=R;
    SSD=S;
    CPU=C;
    }

    void setRAM(int a){
    RAM=a;
    }
    void setSSD(int a){
    SSD=a;
    }
    void setCPU(string a){
    CPU=a;
    }
    int getRAM(){
    return RAM;
    }
    int getSSD(){
    return SSD;
    }
    string getCPU(){
    return CPU;
    }
};
class Nesiojamas:public Kompiuteris{
private:
    int bDydis;
    float Svoris;
    int pGalingumas;
public:
    Nesiojamas(){
    bDydis=0;
    Svoris=0;
    pGalingumas=0;
    }
    Nesiojamas(int Size,float Weight,int Power){
    bDydis=Size;
    Svoris=Weight;
    pGalingumas=Power;
    }

    void setbDydis(int a){
    bDydis=a;
    }
    void setSvoris(float a){
    Svoris=a;
    }
    void setpGalingumas(int a){
    pGalingumas=a;
    }
    int getbDydis(){
    return bDydis;
    }
    float getSvoris(){
    return Svoris;
    }
    int getpGalingumas(){
    return pGalingumas;
    }
};





int main()
{
    Nesiojamas komp;
    komp.Kompiuteris::setRAM(8);
    komp.Kompiuteris::setSSD(1);
    komp.Kompiuteris::setCPU("'Intel'");

    komp.setbDydis(5000);
    komp.setSvoris(2000);
    komp.setpGalingumas(40);

    cout<<"RAM "<<komp.Kompiuteris::getRAM()<<" GB "<<"SSD kiekis "<<komp.Kompiuteris::getSSD()<<" "<<"CPU pavadinimas "<<komp.Kompiuteris::getCPU()<<endl;
    cout<<"BATERIJOS DYDIS "<<komp.getbDydis()<<" WATT "<<"SVORIS "<<komp.getSvoris()<<"G "<<"PAKROVEJO GALINGUMAS "<<komp.getpGalingumas()<<" WATT"<<endl;



    return 0;
}
