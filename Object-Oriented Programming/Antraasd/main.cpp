#include <iostream>

using namespace std;

class Gyvunas{
protected:
    float ugis;
    float svoris;
    string pavadinimas;
public:

void setUgis(float a){
    ugis=a;
}
float getUgis(){
    return ugis;
}

void setSvoris(float a){
    svoris=a;
}
float getSvoris(){
    return svoris;
}
void setPavadinimas(string a){
    pavadinimas=a;
}
string getPavadinimas(){
    return pavadinimas;
}

};

class vaikasGyvunass: public Gyvunas{
private:
    string gTipas;
    string rTipas;

public:

void setgTipas(string a){
    gTipas=a;
}
string getgTipas(){
    return gTipas;
}
void setrTipas(string a){
    rTipas=a;
}
string getrTipas(){
    return rTipas;
}

void Data(){

}




};




int main()
{
    vaikasGyvunass vaikas;


    return 0;
}
