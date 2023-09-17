#include <iostream>

using namespace std;

class Treneris{
    string vardas,pavarde;
public:
    Treneris (string b){
    pavarde=b;
    }

    Treneris(){


    }

    void atspaudinti(){
    cout<<vardas<<" "<<pavarde<<endl;
    }
    // funkcijoms vieta


};

class Komanda {
    string pavadinimas;
    Treneris treneris;
    int kiekL=0;
    int kiekP=0;
    int pelnyti=0;
    int praleista=0;

public:
    Komanda (string a,string c){
    pavadinimas=c;
    treneris=Treneris(a);

    }

    Komanda (){

    }

    void atspausdinti (){
    cout<<pavadinimas<<" ";
    treneris.atspaudinti();
    }

    void atspausdintiL (){
    cout<<pavadinimas<<" "<<kiekL<<" "<<kiekP<<" "<<kiekL+kiekP<<" "<<pelnyti-praleista<<endl;
    }

//nezinau kokia problema iskyla,bet kazkodel vietuj vardu ir pavarde, coutina skaicius.

    void laimejo(int a, int b){
        kiekL++;
        pelnyti=pelnyti+a;
        praleista=praleista+b;
        //cout<<endl;
        //cout<<"Laimejo : "<<pavadinimas<<endl;
    }

    void pralaimejo(int a,int b){
        kiekP++;
        pelnyti=pelnyti+a;
        praleista=praleista+b;
    }

    //Funkcijos

};

class Turnyras{
    Komanda komandos;
    int kiekK=0;
    string turnyroTipas;

public:
    Turnyras(string a){
    turnyroTipas=a;
    }

    void ivestiKomandas(int a,string b,string c){
        cout<<"Irasykite Komandu kieki"<<endl;
        cin>>a;
        cout<<"Irasykite Komandos pavadinima ir Trenerio pavarde"<<endl;
        for(int i=0;i<a;i++){
                cin>>b>>c;
            komandos=Komanda(b,c);
            kiekK++;
        }
     }


    void atspausdinti(){
    for(int i=0;i<kiekK;i++){
        cout<<i+1<<" ";komandos.atspausdinti();

    }

    };

    void zaistiRungtynes(int a,int b,int tA,int tB,int n){
           cin>>n;
         for(int i=0;i<n;i++){
            if(tA>tB){
                komandos.laimejo(tA,tB);
                komandos.pralaimejo(tB,tA);
            }else{
                komandos.pralaimejo(tA,tB);
                komandos.laimejo(tB,tA);
            }

         }

    };

    void lentele(){
    cout<<endl<<endl;
    cout<<"-------Spausdiname lentele-----------"<<endl;
    cout<<" Pavadinimas    Laimeta   Pralosta  Zaista   +-  "<<endl;
    for (int i=0;i<kiekK;i++){
        komandos.atspausdintiL();



    }


    }
};

int main()
{


    Turnyras lkl("Sezonas");
    lkl.ivestiKomandas(1," "," ");
    lkl.zaistiRungtynes(0,0,0,0,0);
    lkl.atspausdinti();
    lkl.lentele();

}
