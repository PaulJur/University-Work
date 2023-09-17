#include <iostream>
#include <string>

using namespace std;

class Varykliai{
private:
    int litrazas=0;
    string tipas;
    float kaina=0;
public:

    void setLitrazas(int a){
        litrazas=a;
    }
    void setTipas(string a){
        tipas=a;
    }
    void setKaina(float a){
        kaina=a;
    }

    int getLitrazas(){
        int a;
        litrazas=a;
        return a;
    }

    string getTipas(){
        string a;
        tipas=a;
        return a;
    }

    float getKaina(){
        float a;
        kaina=a;
        return a;
    }



};

class Automobilis{
private:
    Varykliai varikliis;
    float variklis;
    string pavadinimas;
    float visoKaina;
public:

    void setVariklis(float a){
        variklis=a;
    }

    void setPavadinimas(string a){
       pavadinimas=a;
    }

    void setVisoAutoKaina(float a){
        visoKaina=a;
    }



    string getVariklis(){
        string a;
        pavadinimas=a;
        return a;
    }

    string getPavadinimas(){
        string a;
        pavadinimas=a;
        return a;
    }
    float getVisoKaina(){
        float a;
        visoKaina=a;
        return a;
    }
    void kainaviso(){
        double a;
        a=varikliis.getKaina()+Automobilis.getVisoKaina();

    }



};


int main()
{
Variklis tfsi(2.0,"TFSI 155KW",12000);
    Variklis TDI(2.2,"TD 102KW",6000);
    Kebulas  k1("Sedanas",20000);
    Automobilis audi(tfsi,k1);
    Parduotuve AudiCentras;
    AudiCentras.addVariklis(tfsi);
    AudiCentras.addVariklis(TDI);
    AudiCentras.getVariklisName();




   /* Varykliai varykliai[2];
    Automobilis automobilis[2];
    int a;
    string b;
    float c;


    cout<<"Irasykite variklio litraza(be kableliu,aciu),kaina ir pavadinima"<<endl;
    cout<<endl;
    cout<<"Butu labai geri jeigu paspaustumete Enter po kiekvieno irasymo, aciu"<<endl;
    cout<<endl;
    for(int i=0;i<1;i++){
        cin>>a>>c>>b;
        varykliai[i].setLitrazas(a);
        varykliai[i].setKaina(c);
        varykliai[i].setTipas(b);
        cout<<a<<" "<<c<<" "<<b<<endl;
    }

    cout<<endl<<endl;

    cout<<"Irasykite Variklio kaina,Automobilio kaina ir markes pavadinima"<<endl;
    cout<<endl;
    float d;
    for(int i=0;i<1;i++){

        cin>>a>>d>>b;
        automobilis[i].setVariklis(a);
        automobilis[i].setVisoAutoKaina(d);
        automobilis[i].setPavadinimas(b);
        cout<<a<<" "<<d<<" "<<b<<endl;
        cout<<endl;
        cout<<"Variklis + Automobilio kaina be variklio : "<<endl;
        a+=d;
        cout<<endl;
        cout<<a<<endl;
    }
cout<<"------------------------------"<<endl;
cout<<endl<<endl;
cout<<"CAR LIST:"<<endl;
     string car[2]={"BMW,kaina 3000","AUDI, kaina 4000"};
     string engine[2]={"Inline,kaina 440","Straight,kaina 532 "}; //As nieko apie masinas nezinau,tai random kainas uzdejau


    for(int i=0;i<2;i++){
    cout<<car[i]<<endl;

    }
    cout<<endl;
    for(int i=0;i<2;i++){
    cout<<engine[i]<<endl;

    }
cout<<endl;

cout<<"Irasykite kokios masinos norite ir variklio"<<endl;

 string pavadinimas;
 string variklis;
cin>>pavadinimas>>variklis;

if((pavadinimas=="BMW")&&(variklis=="Inline")){
        cout<<"Masinos kaina :"<<" "<<3000+440<<endl;

}
if((pavadinimas=="BMW")&&(variklis=="Straight")){
        cout<<"Masinos kaina :"<<" "<<3000+532<<endl;

}
if((pavadinimas=="AUDI")&&(variklis=="Inline")){
        cout<<"Masinos kaina :"<<" "<<4000+440<<endl;

}
if((pavadinimas=="AUDI")&&(variklis=="Straight")){
        cout<<"Masinos kaina :"<<" "<<4000+532<<endl;

}
*/
    return 0;
}
