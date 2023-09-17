#include <iostream>

using namespace std;

class Medziaga{
public:
string pavadinimas;
double kaina;
int ID;

};



class Detale{
public:
string pavadinimas;
Medziaga medziaga;
double kiekis;
double savikaina;
double kokybe;
int ID;

void apskaiciuotiSavikaina(){

}
};
class Baldas{
public:
Detale partlist[10];
string medziaga;
double kaina;
double savikaina;
int kiekis;
int ID;

void apskaiciuotiSavikaina(){

}


};

class Darbuotojas{
public:
string vardas;
string pavarde;
double alga;
};

class Gamykla {
public:
string pavadinimas;
Baldas BalduSarasas[10];
int balduKiekis=0;
Detale DetaliuSarasas[10];
int detaliuKiekis=0;
Medziaga MedziaguSarasas[10];
int medziaguKiekis=0;
Darbuotojas DarbuotojuSarasas[10];
int darbuotojuKiekis=0;
string adresas;
Darbuotojas Direktorius;
double balansas;
Medziaga medziaga;
Baldas baldas;

void GamintiDetales(Detale detale){
    DetaliuSarasas[detaliuKiekis]=detale;
    detaliuKiekis++;
}

void SurenkameDetales(){

}

void PerkameMedziagas(Medziaga medziaga){
    medziaga.kaina*medziaguKiekis;

}

void ParduodameBaldus(Baldas baldas){
    baldas.kaina+balduKiekis;

}

void PriskirtiDirektoriu(){
}

void priimameDarbuotoja(){
}

void atleistiDarbuotoja(){

}

void apskaiciuotiPajamas(){
    ParduodameBaldus()-GamintiDetales-PerkameMedziagas;
}

void setName(string name){

    pavadinimas=name;
}

void pridetMedziaga(Medziaga medziaga){

MedziaguSarasas[medziaguKiekis]=medziaga;
medziaguKiekis++;

}

void pridetiBalda(){};

};




int main()
{
    Gamykla gamykla;
    gamykla.setName("IKEA");
    Detale detale;
    detale.pavadinimas="Varstai";
    detale.ID=2;
    detale.savikaina=10;
    Medziaga medziaga;
    medziaga.ID=0;
    medziaga.kaina=1;
    medziaga.pavadinimas="medis";
    Baldas baldas;
    baldas.ID=33;

    gamykla.PerkameMedziagas(medziaga);
    gamykla.GamintiDetales(detale);
    gamykla.pridetMedziaga(medziaga);





    cout << "Hello world!" << endl;
    return 0;
}
