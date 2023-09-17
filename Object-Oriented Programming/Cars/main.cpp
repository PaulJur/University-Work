#include <iostream>

using namespace std;
/*
Audi 80 600
BMW 330 3600
Audi A4 2700
Volkswagen Golf 1300
Audi A6 5100
BMW 320 6000
BMW 530 2000
Volvo V50 3000
*/

struct Benas{
private:

    int kaina;

public:

    void Kaina(int a){
        kaina=a;
    }

    int gautiKaina(){
        int b;
        b=kaina;
        return b;
    }
};

struct Tomas{
private:

    int kaina;

public:

    void Kaina(int a){
        kaina=a;
    }

    int gautiKaina(){
        int b;
        b=kaina;
        return b;
    }
};

struct Masina{
private:
    int kaina;
    string pavadinimas;
    string masinosMarke;

    Benas ben;
    Tomas tom;
public:

    void setKaina(int k){
        kaina=k;
    }
    void setPavadinimas(string p){
        pavadinimas=p;
    }
    void setMarke(string m){
        masinosMarke=m;
    }

    int getKaina(){
        int k;
        k=kaina;
        return k;
    }
    string getPavadinimas(){
        string p;
        p=pavadinimas;
        return p;
    }
    string getMarke(){
        string m;
        m=masinosMarke;
        return m;
    }

   void printBenas(){
       int kaina;
       string pavadinimas;

       kaina=ben.gautiKaina();
       cout<<"Audine"<<pavadinimas<<" "<<kaina<<endl;

   }
void printTomas(){
       double kaina;
       string pavadinimas;

       kaina=tom.gautiKaina();
       cout<<"BMW"<<pavadinimas<<" "<<kaina<<endl;

   }
    double tomKaina() {
        double kaina;
        kaina = tom.gautiKaina();

        return kaina;
    }
    int benKaina() {
        double kaina;
        kaina = ben.gautiKaina();

        return kaina;
    }
   void getKainaT(int a){
       tom.Kaina(a);
   }
   void getKainaB(int b){
       ben.Kaina(b);
   }

   /* void irasymas(){
        int n;
        cout<<"Irasykite kiek noretumete masinu"<<endl;
        cin>>n;
        cout<<"Irasykite masinos pavadinima,marke ir kaina"<<endl;
        cout<<endl;
        for(int i=0;i<n;i++){
        string a;
        string b;
        int c;
            cin>>a>>b>>c;
            setMarke(a);
            setPavadinimas(b);
            setKaina(c);

           cout<<a<<" "<<b<<" "<<c<<endl; //nezinau kaip padaryti, kad dvigubai nespausdintu.
        }


    }*/

};


int main()
{
  Masina masina[8];

  int n;
   cout<<"Irasykite kiek noretumete masinu"<<endl;
   cin>>n;
   cout<<"Irasykite masinos pavadinima,marke ir kaina"<<endl;
   cout<<endl;
    for(int i=0;i<n;i++){
    string a;
    string b;
    int c;
            cin>>a>>b>>c;
            masina[i].setMarke(a);
            masina[i].setPavadinimas(b);
            masina[i].setKaina(c);
     }



int benList=0,tomList=0;

 for(int i=0;i<n;i++){
    int kaina;
    kaina=masina[i].getKaina();

    if (masina[i].getMarke()=="Audi"){
        masina[benList].getKainaB(kaina);
        benList++;
    }else if (masina[i].getMarke()=="BMW"){
        masina[tomList].getKainaT(kaina);
        tomList++;
    }
 }


int pigiausiaBeno=masina[0].benKaina(),pigausiaTomo=masina[0].tomKaina();
int brangiausiaBeno=0,brangiausiaTomo=0;

for (int i = 0; i <benList; i++) {
        int kaina;
        kaina = masina[i].benKaina();

        if (kaina < pigiausiaBeno) {
            pigiausiaBeno = kaina;
        }
        else if (kaina > brangiausiaBeno) {
            brangiausiaBeno = kaina;
        }
    }

   for (int i = 0; i <tomList; i++) {
        int kaina;
        kaina = masina[i].tomKaina();

        if (kaina < pigausiaTomo) {
            pigausiaTomo = kaina;
        }
        else if (kaina > brangiausiaTomo) {
            brangiausiaTomo = kaina;
        }
    }
    cout<<endl;
     cout << "Beno pigiausia: " <<" "<< pigiausiaBeno << endl;
    cout << "Beno brangiausia: " << brangiausiaBeno << endl;
    cout << endl;
    cout << "Tomo pigiausia: " << pigausiaTomo << endl;
    cout << "Tomo branngiausia:  " << brangiausiaTomo << endl;
    cout<<endl<<endl;


    //if(brangiausiaBenoTomo>brangiausiaBeno){
        //cout<<"Brangiausia: Tomo"<<endl;
    //}else {
        //cout<<"Brangiausia: Benno"<<endl; Nezinau kaip sita vieta padaryti del rezultatu.
   // }





    return 0;
}
