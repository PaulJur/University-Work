#include <iostream>

using namespace std;

class Medziaga {
public:
    string pavadinimas;
    double kaina;
    int ID;

};



class Detale {
public:
    string pavadinimas;
    Medziaga medziaga;
    double kiekis;
    double sanaudos;
    double savikaina;
    double kokybe;
    int ID;

    void apskaiciuotiSavikaina() {

    }
};
class Baldas {
public:
    int  partlist[10];
    int partAmount = 0;
    string medziaga;
    double kaina;
    double savikaina;
    int kiekis;
    int ID;

    void apskaiciuotiSavikaina() {

    }


};

class Darbuotojas {
public:
    string vardas;
    string pavarde;
    double alga;
};

class Gamykla {
public:
    string pavadinimas;
    Baldas BalduSarasas[10];
    int balduKiekis = 0;
    Detale DetaliuSarasas[10];
    int detaliuKiekis = 0;
    Medziaga MedziaguSarasas[10];
    int medziaguKiekis = 0;
    Darbuotojas DarbuotojuSarasas[10];
    int darbuotojuKiekis = 0;
    string adresas;
    Darbuotojas Direktorius;
    double balansas;


    void GamintiDetales() {

    }

    void SurenkameDetales() {
    }

    void PerkameMedziagas(Medziaga MedzKiekis, int n, Gamykla g) {

        Medziaga m;
        m=MedzKiekis;
        MedziaguSarasas[medziaguKiekis] = m;
        medziaguKiekis++;

        while(medziaguKiekis++){
            g.balansas-m.kaina;
        }
        //padidiname medziagu kieki ;
        //sumaziname balansa;

    }

    void ParduodameBaldus(Baldas bald, int n) {
        Baldas b;
        b = bald;
        b.kiekis = b.kiekis * b.kaina;
        b.kiekis = BalduSarasas[n].kiekis-b.kiekis;
    }

    void PriskirtiDirektoriu(Darbuotojas d,Gamykla g) {
          DarbuotojuSarasas[darbuotojuKiekis] =d;
          darbuotojuKiekis++;
          if(darbuotojuKiekis++){
            g.balansas-d.alga*12;
          }
    }

    void priimameDarbuotoja(Darbuotojas d, Gamykla g) {
        DarbuotojuSarasas[darbuotojuKiekis]=d;
        darbuotojuKiekis++;
        if(darbuotojuKiekis++){
            g.balansas-d.alga*12; //Is gamyklos balanso atiemu visu metu darbotuojo alga.
        }

    }


    void apskaiciuotiGalimasPajamas(Baldas baldVienetas, Gamykla g) {
        Baldas b;
        b=baldVienetas;
        g.balansas=g.balansas-b.kaina*b.savikaina;
        g.balansas=g.balansas/MedziaguSarasas[medziaguKiekis].kaina;

        //apskaiciuoti uz kiek pinigu turime baldu atimant savikaina;

    }

    void setName(string name) {

        pavadinimas = name;
    }

    void pridetMedziaga(Medziaga medziaga) {

        MedziaguSarasas[medziaguKiekis] = medziaga;
        medziaguKiekis++;

    }

    void pridetiDetale(Detale a, int n) {
        Detale d;
        d = a;
        d.medziaga = MedziaguSarasas[n];
        d.savikaina = d.sanaudos * MedziaguSarasas[n].kaina / d.kokybe;
        d.ID = detaliuKiekis;
        d.kiekis = 0;

        DetaliuSarasas[detaliuKiekis] = d;
        detaliuKiekis++;
    }

    void pridetiBalda(Baldas a) {
        Baldas b;
        b=a;
        BalduSarasas[balduKiekis]=a;
        //BalduSarasas[balduKiekis].savikaina Nezinau sitos vietos.

        balduKiekis++;



    }
};

//Nelabai buvau suprates uzduoties pilnai, tai papildziau tiesiog duomenys.


int main()
{
    Gamykla gamykla;
    gamykla.setName("IKEA");
    Medziaga medziaga;
    medziaga.ID = 0;
    medziaga.kaina = 1;
    medziaga.pavadinimas = "medis";


    gamykla.pridetMedziaga(medziaga);

    Detale  detale;
    detale.kokybe = 0.95;
    detale.pavadinimas = "lenta";
    int medziagaID = 0;
    detale.sanaudos = 1.5;
    gamykla.pridetiDetale(detale, medziagaID);


    Baldas komoda;
    komoda.medziaga = "medis";
    komoda.kaina = 200;
    komoda.kiekis = 150;
    komoda.partlist[0] = 0;
    komoda.partlist[1] = 1;
    komoda.partAmount = 2;





    gamykla.pridetiBalda(komoda);








    cout << gamykla.pavadinimas;





    //cout << "Hello world!" << endl;
    return 0;
}
