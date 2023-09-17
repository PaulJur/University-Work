#include <iostream>
#include <vector>


using namespace std;

class Variklis{
private:
    double litrazas;
    string kuras;
    double kaina;
public:
    Variklis() {
        litrazas = 0;
        kuras = "";
        kaina = 0;
    }
    Variklis(double a, string b, double c) {
        litrazas = a;
        kuras = b;
        kaina = c;
    }
    void setLitrazas(double a){
        litrazas=a;
    }
    void setKaina(double a){
        kaina=a;
    }
    void setKuras(string a){
        kuras=a;
    }
    double getLitrazas() {
        return litrazas;
    }
    double getKaina() {
        return kaina;
    }
    string getKuras(){
        return kuras;
    }
};
class Kebulas{
private:
    string pavadinimas;
    double kaina;
public:
    Kebulas(){
        pavadinimas="";
        kaina=0;
    }
    Kebulas(string a,double b){
        pavadinimas=a;
        kaina=b;
    }
    void setKaina(double a){
        kaina=a;
    }

    double getKaina(){
        return kaina;
    }
    void setPavadinimas(string a){
        pavadinimas=a;
    }
    string getPavadinimas(){
        return pavadinimas;
    }
};
class Automobilis{
private:
    Variklis varikliai;
    Kebulas kebulai;
    double kaina;
    string pavadinimas;
public:
    Automobilis(){
        kaina=paskaiciuoti();
    }
    Automobilis(Variklis a,Kebulas b,string name){
        varikliai=a;
        kebulai=b;
        pavadinimas=name;
        kaina=paskaiciuoti();

    }
    double paskaiciuoti(){
        return varikliai.getKaina()+kebulai.getKaina();
    }
    void setKaina(double a){
        kaina=a;
    }
    double getKaina(){
        double a = kaina;
        return a;
    }
    void setPavadinimas(string a){
        pavadinimas=a;
    }
    string getPavadinimas(){
        return pavadinimas;
    }




};
class Parduotuve{

vector <Variklis> varikliai;
vector <Kebulas> kebulai;
vector <Automobilis> automobiliai;

int parinktiVarikli(){
        int ats;
        cout<<"Pasirinkite varikli :"<<endl;
        atspausdintiVariklius();
        cin>>ats;
        return ats-1;
}
void atspausdintiVariklius(){
    for(int i=0;i<varikliai.size();i++){
        cout<<i+1<<" "<<varikliai[i].getLitrazas()<<"L "<<varikliai[i].getKuras()<<" "<<varikliai[i].getKaina()<<" "<<"Shekeliai"<<endl;
        }
    }
    void atspausdintiKebula(){
        for(int i=0;i<kebulai.size();i++){
        cout<<i+1<<" "<<kebulai[i].getPavadinimas()<<" "<<kebulai[i].getKaina()<<endl;
    }
}
void atspausdintiAutomobili(){
    for(int i=0;i<automobiliai.size();i++){
        cout<<i+1<<" "<<automobiliai[i].getPavadinimas()<<" "<<automobiliai[i].getKaina()<<endl;
        }
}
int parinktiAuto(){
    string ats;
    cout<<"Pasivadinkite savo masina"<<endl;
    cin>>ats;
}

int parinktiKebula(){
    int ats;
    cout<<"Kebulu sarasas"<<endl;
    atspausdintiKebula();
    cout<<"Pasirinkite kebula"<<endl;
    cin>>ats;
    return ats-1;
}
string parinktiString(){
    string name;
    cin>>name;
    return name;
}
void atspausdinti(string a){
    cout<<a<<endl;
}
double parinktiFloat(){
    double a;
    cin>>a;

    return a;
}


public:
    Parduotuve(){
    }
    void addVariklis(Variklis a){
        varikliai.push_back(a);
    }
    void addKebulas(Kebulas a){
        kebulai.push_back(a);
    }
    void addAutomobilis(Variklis a,Kebulas b,string name){
    automobiliai.push_back(Automobilis(a,b,name));
    }
    void sukurti(){
        system("cls");
        int a=parinktiVarikli();
        system("cls");
        int c=parinktiKebula();
        system("cls");
         cout<<"Pavadinkite savo masinos marke"<<endl;
        string b=parinktiString();
        cout<<endl;
        cout << "Automobilis: " << b << endl;
        cout << endl;
        cout << "Variklis: " << varikliai[a].getKuras() << " " << varikliai[a].getLitrazas() << "l " << varikliai[a].getKaina() <<" "<< endl;
        cout << "Kebulas: " << kebulai[c].getPavadinimas() << " " << kebulai[c].getKaina() <<" "<< endl;
        cout<<endl<<endl;
        atspausdinti("Automobilis sukurtas");
         system("pause");

    }

    void runShop(){
            int a;
            do {
            menu();
            cin >> a;
            menuSwitch(a);
        } while (a != 2);{
            cout<<"Select valid option"<<endl;
        }
        }

    void menu() {
        cout << "-------------------------------------------" << endl;
        cout << "            CAR PART DESTROYER 3000" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "[0] - Sukurti automobili " << endl;
        cout << "[1] - Iseiti is programos" << endl;
        cout << "-------------------------------------------" << endl;
    }
    void menuSwitch(int a){
        switch(a){
        case 0:
            sukurti();
            break;
        case 1:
            cout<<"GOODBYE MISTER"<<endl;
            exit(0);
        }


    }
    void shopData() {
        Variklis tfsi(2.1, "Benzinas", 9000);
        Variklis TDI(5.5, "Dyzelis", 4000);
        Kebulas k1("Universalas", 15000);
        Kebulas k2("Sedanas",22000);


        addVariklis(tfsi);
        addVariklis(TDI);
        addKebulas(k1);
        addKebulas(k2);
    }
};




int main()
{
Parduotuve AudiCentras;
AudiCentras.shopData();
AudiCentras.runShop();






    return 0;
}
