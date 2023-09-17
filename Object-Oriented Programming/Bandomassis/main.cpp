#include <iostream>
#include <vector>
using namespace std;

class Knyga{
private:
    string Autorius;
    int leidMetai;
    string ISBN;
    string Pavadinimas;
    string Leidykla;
    int vKiekis;
public:

   void setAutorius(string a){
        Autorius=a;
    }
   string getAutorius() {
        return Autorius;
   }
   void setleidMetai(int a){
       leidMetai=a;
   }
   int getleidMetai(){
       return leidMetai;
   }
   void setISBN(string a){
       ISBN=a;
   }
   string getISBN(){
       return ISBN;
   }
   void setPavadinimas(string a){
       Pavadinimas=a;
   }
   string getPavadinimas(){
       return Pavadinimas;
   }
   void setLeidykla(string a){
       Leidykla=a;
   }
   string getLeidykla(){
       return Leidykla;
   }
   void setvKiekis(int a){
       vKiekis=a;
   }
   int getvKiekis(){
       return vKiekis;
   }


};

class Lentyna{
private:
    float Pozicija;
    int Talpumas;
    int aKiekis;
    int vKiekis;
public:

    void setPozicija(float a){
        Pozicija=a;
    }
    float getPozicija(){
        return Pozicija;
    }
    void setTalpumas(int a){
        Talpumas=a;
    }
    int getTalpumas(){
        return Talpumas;
    }
    void setaKiekis(int a){
        aKiekis=a;
    }
    int getaKiekis(){
        return aKiekis;
    }
    void setvKiekis(int a){
        vKiekis=a;
    }
    int getvKiekis(){
        return vKiekis;
    }

};

class Biblioteka{

vector <Knyga> knygas;
vector <Lentyna> lentynas;

void atspausdintiKnyga(){
    for(int i=0;i<knygas.size();i++){
        cout<<i+1<<" "<<knygas[i].getAutorius()<<","<<"'"<<knygas[i].getPavadinimas()<<"', "<<knygas[i].getLeidykla()<<", "<<knygas[i].getleidMetai()<<", "<<knygas[i].getvKiekis()<<", "<<knygas[i].getISBN()<<endl;
        }
}
void atspausdintiLentynas(){
    for(int i=0;i<lentynas.size();i++){
        cout<<"Pozicija: "<<lentynas[i].getPozicija()<<" "<<"Lentynu talpumas: "<<lentynas[i].getTalpumas()<<" "<<"Aukstu kiekis: "<<lentynas[i].getaKiekis()<<" "<<"Vietu kiekis: "<<lentynas[i].getvKiekis()<<endl;
    }
}


int parinktiKnyga(){
        int ats;
        cout<<"Pasirinkite knyga kuria norite ideti :"<<endl;
        cout<<endl;
        cout<<"AUTORIUS,PAVADINIMAS,LEIDYKLA,LEIDIMO METAI,VIETU KIEKIS,ISBN"<<endl;
        cout<<endl;
        atspausdintiKnyga();
        cin>>ats;
}

public:

void addKnyga(Knyga a){
        knygas.push_back(a);
    }
void addLentyna(Lentyna a){
        lentynas.push_back(a);
    }
void sukurti(){
        system("cls");
        int a=parinktiKnyga();
        system("cls");
        cout<<endl;
        cout<<"Knyga atiduota"<<endl;

}
void sukurti1(){
    system("cls");
    atspausdintiLentynas();
}

    void runLibrary(){
            int a;
            do {
            menu();
            cin >> a;
            menuSwitch(a);
        } while (a != 3);{
            cout<<"Pasirinkite normaliai"<<endl;
        }
        }

    void menu() {
        cout << "-------------------------------------------" << endl;
        cout << "            LIBRARY OF LITUANIA" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "[0] - Ideti knyga " << endl;
        cout << "[1]  - Perziureti lentynas" << endl;
        cout << "[2] - Iseiti is programos" << endl;
        cout << "-------------------------------------------" << endl;
    }
    void menuSwitch(int a){
        switch(a){
        case 0:
            sukurti();
            break;
        case 1:
            sukurti1();
            break;
        case 2:
            cout<<"Cya nerd"<<endl;
            exit(0);
        }

}
void yourInventory(){
    Knyga knyga1("Biliunas","Liudna pasaka","Svietimo ministerija",2003,2,"978-23-3525-123");
    Knyga knyga2("Adolfas Nezabitauskis","Jonas Basnavicius","Vaga",1999,5,"124-1235-543-5235");

    addKnyga(knyga1);
    addKnyga(knyga2);
}
void libaryBookcasse(){
    Lentyna lentyna1(25,50,5,10);
    Lentyna lentyna2(30,40,10,15);

    addLentyna(lentyna1);
    addLentyna(lentyna2);
}


};
int main()
{

Biblioteka bibliotekinis;
bibliotekinis.yourInventory();
bibliotekinis.libaryBookcasse();
bibliotekinis.runLibrary();

    return 0;
};
