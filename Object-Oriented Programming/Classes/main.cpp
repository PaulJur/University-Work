#include <iostream>
#include <vector>

using namespace std;

class Patiekalas{
private:
    string Tipas;
    float Kaina;
    int kcal;
    float Svoris;
public:

    kPatiekalas(){
    Tipas="";
    Kaina=0;
    kcal=0;
    Svoris=0;
    }

    kPatiekalas(string Type,float Price,int Calorie,float Weight){
    Tipas=Type;
    Kaina=Price;
    kcal=Calorie;
    Svoris=Weight;
    }

    void setTipas(string a){
    Tipas=a;
    }
    void setKaina(float a){
    Kaina=a;
    }
    void setKcal(int a){
    kcal=a;
    }
    void setSvoris(float a){
    Svoris=a;
    }
    string getTipas(){
    return Tipas;
    }
    float getKaina(){
    return Kaina;
    }
    int getKcal(){
    return kcal;
    }
    float getSvoris(){
    return Svoris;
    }

    void kKaloriju(){
    float Kaloriju;
    Kaloriju=kcal/Svoris*100;
    cout<<Kaloriju<<" Patiekalo KCAL"<<endl;
    }
};
class Garnyras{
private:
    Patiekalas patiek;
    string Pavadinimas;
    string Tipas;
    float Kaina;
    int kcal;
    float Svoris;
public:

    Garnyras(){
    Pavadinimas="";
    Tipas="";
    Kaina=0;
    kcal=0;
    Svoris=0;
    }

    Garnyras(string Name,string Type,float Price,int Calorie,float Weight){
    Pavadinimas=Name;
    Tipas=Type;
    Kaina=Price;
    kcal=Calorie;
    Svoris=Weight;
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
    void setKcal(int a){
    kcal=a;
    }
    void setSvoris(float a){
    Svoris=a;
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
    int getKcal(){
    return kcal;
    }
    float getSvoris(){
    return Svoris;
    }

    void gKaloriju(){
    float Kaloriju;
    Kaloriju=kcal/Svoris*100;
    cout<<Kaloriju<<" Garnyro KCAL"<<endl;
    }
    void Type(string a){
        string b=patiek.getTipas();
        if(a == b){
            cout<<"Tinka"<<endl;
    }
            else cout<<"Netinka"<<endl;

    }


};
class Kavine{
private:
    vector<Patiekalas> kPatiekalas;
    vector<Garnyras> garnyr;
public:



};








int main()
{

    Patiekalas p;
    Garnyras g;
    Kavine k;

    p.setTipas("V");
    p.setKaina(20);
    p.setKcal(1000);
    p.setSvoris(500);


    g.setTipas("V");
    g.setKaina(5);
    g.setKcal(600);
    g.setSvoris(150);
    g.Type("Mesa");

    p.kKaloriju();
    g.gKaloriju();



    return 0;
}
