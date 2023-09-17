#include <iostream>
#include <vector>

using namespace std;

class Kelnes{
private:
    string Pavadinimas;
    string Tipas;
    float Kaina;
    int Dydis;
    int Sudetingumas;
public:
    Kelnes(){
    Pavadinimas="";
    Tipas="";
    Kaina=0;
    Dydis=0;
    Sudetingumas=0;
    }
    Kelnes(string Name,string Type,float Price,int Size,int Difficulty){
    Pavadinimas=Name;
    Tipas=Type;
    Kaina=Price;
    Dydis=Size;
    Sudetingumas=Difficulty;
    }

    void setPavadinimas(string a){
    Pavadinimas=a;
    }
    void setTipas(string a){
    Tipas=a;
    }
    void setKaina(float a){
    Kaina=a;
    }
    void setDydis(int a){
    Dydis=a;
    }
    void setSudetingumas(int a){
    Sudetingumas=a;
    }
    string getPavadinimas(){
    return Pavadinimas;
    }
    string getTipas(){
    return Tipas;
    }
    float getKaina(){
    return Kaina;
    }
    int getDydis(){
    return Dydis;
    }
    int getSudetingumas(){
    return Sudetingumas;
    }

    void gKaina(){
    float Kaina;
    Kaina=Dydis*Sudetingumas;
    cout<<"Galutine Kaina: "<<Kaina<<endl;

    }
};
class Virsus{
private:
    string Pavadinimas;
    string Tipas;
    float Kaina;
    int Dydis;
    int Sudetingumas;
public:
    Virsus(){
    Pavadinimas="";
    Tipas="";
    Kaina=0;
    Dydis=0;
    Sudetingumas=0;
    }
    Virsus(string Name,string Type,float Price,int Size,int Difficulty){
    Pavadinimas=Name;
    Tipas=Type;
    Kaina=Price;
    Dydis=Size;
    Sudetingumas=Difficulty;
    }

    void setPavadinimas(string a){
    Pavadinimas=a;
    }
    void setTipas(string a){
    Tipas=a;
    }
    void setKaina(float a){
    Kaina=a;
    }
    void setDydis(int a){
    Dydis=a;
    }
    void setSudetingumas(int a){
    Sudetingumas=a;
    }
    string getPavadinimas(){
    return Pavadinimas;
    }
    string getTipas(){
    return Tipas;
    }
    float getKaina(){
    return Kaina;
    }
    int getDydis(){
    return Dydis;
    }
    int getSudetingumas(){
    return Sudetingumas;
    }

    void gKaina(){
    float Kaina;
    Kaina=Dydis*Sudetingumas;
    cout<<"Galutine Kaina: "<<Kaina<<endl;
    }


};
class Parduotuve{
private:
    vector<Kelnes> keln;
    vector<Virsus> virs;


    void atspausdintiVirsu(){
        for(int i=0;i<virs.size();i++){
        cout<<i+1<<" "<<virs[i].getPavadinimas()<<" "<<virs[i].getTipas()<<" "<<virs[i].getKaina()<<"$ "<<" Dydis: "<<keln[i].getDydis()<<endl;
        }
    }
    void atspausdintiKelnes(){
    for(int i=0;i<keln.size();i++){
        cout<<i+1<<" "<<keln[i].getPavadinimas()<<" "<<keln[i].getTipas()<<" "<<keln[i].getKaina()<<"$ "<<" Dydis: "<<keln[i].getDydis()<<endl;
        }
    }

    int sukurtiKomplekta(){
        cout<<endl;
        cout<<"KOMPLEKTAI JUMS: ";
        for(int i=0;i<keln.size();i++){
        cout<<" "<<virs[i].getTipas()<<" + "<<keln[i].getTipas()<<" "<<virs[i].getKaina()+keln[i].getKaina()<<"$ "<<endl;
        }
}
    int Akcija(){//Akcijos kodas prekem.
        string nKodas;
        float nuolaida;
        float nuolaida1;
        cout<<endl;
        cout<<"Jeigu turite nuolaidos koda, irasykite"<<endl;
        cout<<endl;
        cout<<"PSSs kodas yra 'AKCIJA'"<<endl;
        cout<<endl;
        cin>>nKodas;
        if(nKodas=="AKCIJA"){
            cout<<"JUS GAUNATE:-5$ VISIEM RUBAM! "<<endl;
            for(int i=0;i<keln.size();i++){
                cout<<keln[i].getPavadinimas()<<" "<<keln[i].getTipas()<<" "<<keln[i].getKaina()-5<<"$ "<<" Dydis: "<<keln[i].getDydis()<<endl;
                cout<<virs[i].getTipas()<<" + "<<keln[i].getTipas()<<" "<<virs[i].getKaina()+keln[i].getKaina()-5<<"$ "<<endl;

            }
        }
            return nuolaida;
    }


public:

     Parduotuve(){
    }
    void addKelnes(Kelnes a){
        keln.push_back(a);
    }
    void addVirsus(Virsus a){
        virs.push_back(a);
    }
    void israsytiKelnes(){
    atspausdintiKelnes();
    }
    void israsytiVirsu(){
        cout<<endl;
    atspausdintiVirsu();
    }
    void israsytiKomplekta(){
    sukurtiKomplekta();
    }
    void israsytiAkcija(){
    Akcija();
    }
    void shopStock(){

        Kelnes Dzinsai("'Dzinsu rojus'","Melyni Dzinsai",60,10,10);
        Kelnes Treningai("'Treningu JUMS!'","Raudoni treningai",20,15,4);
        Kelnes Kelnutes("'BASIC APPAREAL'","Rudos kelnes",25,20,7);

        Virsus Marskineliai("'Shop4U'","Marskineliai",30,20,20);
        Virsus Marskiniai("'Profesionali apranga","Marskiniai'",35,23,40);
        Virsus Megzstinis("'Silti rubai","Megzstinis'",15,40,30);

        addKelnes(Dzinsai);
        addKelnes(Treningai);
        addKelnes(Kelnutes);

        addVirsus(Marskineliai);
        addVirsus(Marskiniai);
        addVirsus(Megzstinis);

    }


};

int main()
{
Parduotuve Shop;
Shop.shopStock();
Shop.israsytiKelnes();
Shop.israsytiVirsu();
Shop.israsytiKomplekta();
Shop.israsytiAkcija();




    return 0;
}
