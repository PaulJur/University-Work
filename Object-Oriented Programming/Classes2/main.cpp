#include <iostream>

using namespace std;

class Tipas{
     public:
    float treesInSquare;
    float derliusPerMetus;
    float derliausKiekis;
    float derliausKaina;
    float vienetoValanduKiekis;
    float tipinisMirimas;
    float vandensKiekis;
    float seklosKaina;
    float trasuKiekis;
};

class Kastai{
    public:
    float trasosKaina;
    float vandenskaina;
    float darboKaina;
};

class augalas{
    string pavadinimas;
    Tipas tipas;
    Kastai kastai;

    public:
        void SetPavadinimas(string a){
        pavadinimas=a;
    }
        string GetPavadinimas(){
            return pavadinimas;
        }
        void setTipas(float k1, float k2, float k3, float k4, float k5, float k6, float k7,float k8,float k9){
     tipas.treesInSquare=k1;
     tipas.derliusPerMetus=k2;
     tipas.derliausKiekis=k3;
     tipas.derliausKaina=k4;
     tipas.vienetoValanduKiekis=k5;
     tipas.tipinisMirimas=k6;
     tipas.vandensKiekis=k7;
     tipas.seklosKaina=k8;
     tipas.trasuKiekis=k9;
        }


        void setKastai(float k1, float k2, float k3){
            kastai.trasosKaina=k1;
            kastai.vandenskaina=k2;
            kastai.darboKaina=k3;
        }

    float savikainamedzio(){
        float rezultatas;
        rezultatas=tipas.seklosKaina+kastai.darboKaina*tipas.vienetoValanduKiekis+kastai.vandenskaina*tipas.vandensKiekis+kastai.trasosKaina*tipas.trasuKiekis;
        return rezultatas;
    }
    float savikainaKvadrato(){
        float rezultatas;
        rezultatas=savikainamedzio()*tipas.treesInSquare;
        return rezultatas;
    }
    float Pelnasmedzio(){
        float rezultatas=tipas.derliausKaina*tipas.derliausKiekis*tipas.derliusPerMetus*(1-tipas.tipinisMirimas)-savikainamedzio();
        return rezultatas;
    };

    float PelnasKvadrato(){
         float rezultatas=Pelnasmedzio()*tipas.treesInSquare;
         return rezultatas;
    }
};
 int main(){

   augalas medis;
   medis.setTipas( 4, 1,300, 1.5, 20, 0.05, 100, 2, 3);
   medis.SetPavadinimas("lopas");
   medis.setKastai(2.5,0.001,6.20);



    cout<<"savikaina "<<" "<<medis.savikainamedzio();
    cout<<"\n Savikaina kvadrato"<<" "<<medis.savikainaKvadrato();
    cout<<"\n pelnas is medzio"<<" "<<medis.Pelnasmedzio();
    cout<<"\n pelnas is medziu kvadrato"<<" "<<medis.PelnasKvadrato();

  return 0;
 }

