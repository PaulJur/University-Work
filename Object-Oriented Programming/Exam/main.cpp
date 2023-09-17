#include <iostream>
#include <vector>

using namespace std;

//0.11
class Procesorius{
    float Greitis;
    int Kaina;
    string Architektura; //amd,apple,intel
    float EConsumption;
    float yEPrice;
public:
    Procesorius(){
    Greitis=0;
    Kaina=0;
    Architektura="";
    EConsumption=0;
    yEPrice=0;
    }

    Procesorius(float Speed,int Price,string Arch,float EKomp){
    Greitis=Speed;
    Kaina=Price;
    Architektura=Arch;
    EConsumption=EKomp*12;
    yEPrice=EConsumption/0.11;
    }

    void setGreitis(float a){
    Greitis=a;
    }
    void setKaina(int a){
    Kaina=a;
    }
    void setArchitktura(string a){
    Architektura=a;
    }
    void setEConsumption(float a){
    EConsumption=a;
    }
    float getGreitis(){
    return Greitis;
    }
    int getKaina(){
    return Kaina;
    }
    string getArchitektura(){
    return Architektura;
    }
    float getEConsumption(){
    return EConsumption;
    }
};
class vaizdoPlokste{

    string Pavadinimas;
    float Greitis;
    int Kaina;
    string Architektura; //AMD,APPLE,INTEL
    int bKiekis;
    float hRate;
    int rKiekis;
    float eConsumption;
    float eYPrice;

public:
    vaizdoPlokste(){
    Pavadinimas="";
    Greitis=0;
    Kaina=0;
    Architektura="";
    bKiekis=0;
    hRate=0;
    rKiekis=0;
    eConsumption=0;
    eYPrice=0;

    }

    vaizdoPlokste(string Name,float Speed,int Price,string Arch,int coreNumber,float hashRate,int ramNumber, float Consumption){
    Pavadinimas=Name;
    Greitis=Speed;
    Kaina=Price;
    Architektura=Arch;
    bKiekis=coreNumber;
    hRate=hashRate;
    rKiekis=ramNumber;
    eConsumption=Consumption*12;
    eYPrice=eConsumption/0.11;
    }

    void setPavadinimas(string a){
    Pavadinimas=a;
    }
    void setGreitis(float a){
    Greitis=a;
    }
    void setKaina(int a){
    Kaina=a;
    }
    void setArchitektura(string a){
    Architektura=a;
    }
    void setbKiekis(int a){
    bKiekis=a;
    }
    void sethRate(float a){
    hRate=a;
    }
    void setrKiekis(int a){
    rKiekis=a;
    }
    void seteConsumption(float a){
    eConsumption=a;
    }
    string getPavadinimas(){
    return Pavadinimas;
    }
    float getGreitis(){
    return Greitis;
    }
    int getKaina(){
    return Kaina;
    }
    string getArchitektura(){
    return Architektura;
    }
    int getbKiekis(){
    return bKiekis;
    }
    float gethRate(){
    return hRate;
    }
    int getrKiekis(){
    return rKiekis;
    }
    float geteConsumption(){
    return eConsumption;
    }
};
class Kompiuteris{
    Procesorius proc;
    vaizdoPlokste plokst;
    string Pavadinimas;
    int gKaina;
public:
    Kompiuteris(){
    gKaina=galutineKaina();
    }

    Kompiuteris(Procesorius a,vaizdoPlokste b,string Name){
    proc=a;
    plokst=b;
    Pavadinimas=Name;
    gKaina=galutineKaina();
    }

    void setPavadinimas(string a){
    Pavadinimas=a;
    }
    void setgKaina(int a){
    gKaina=a;
    }
    string getPavadinimas(){
    return Pavadinimas;
    }
    int getgKaina(){
    return gKaina;
    }

    int galutineKaina(){
    return proc.getKaina()+plokst.getKaina();
    }
    float yearlyElectricityCostCPU(){
    float a;
    a=proc.getEConsumption()/0.11;
    return a;
    }
    float yearlyElectricityCostGPU(){
    float a;
    a=plokst.geteConsumption()/0.11;
    }
};
class Parduotuve{
vector <Procesorius> CPU;
vector <vaizdoPlokste> GPU;
vector <Kompiuteris> PC;

void atspausdintiProcesoriu(){
    for(int i=0;i<CPU.size();i++){
        cout<<i+1<<" "<<CPU[i].getGreitis()<<"Ghz "<<CPU[i].getKaina()<<"$ "<<CPU[i].getArchitektura()<<" "<<CPU[i].getEConsumption()<<"W "<<PC[i].yearlyElectricityCostCPU()<<endl;
        }
    }
    void atspausdintiVaizdoPlokste(){
        for(int i=0;i<GPU.size();i++){
        cout<<i+1<<" "<<GPU[i].getPavadinimas()<<" "<<GPU[i].getGreitis()<<"Mhz "<<GPU[i].getKaina()<<"$ "<<GPU[i].getArchitektura()<<" "<<GPU[i].getbKiekis()<<" Core count "<<GPU[i].gethRate()<<" Hash rate "<<GPU[i].getrKiekis()<<
        "RAM count "<<GPU[i].geteConsumption()<<"W "<<endl;
    }
}
    void atspausdintiPC(){
    for(int i=0;i<CPU.size();i++){
        cout<<i+1<<" "<<CPU[i].getArchitektura()<<" CPU "<<GPU[i].getPavadinimas()<<" "<<CPU[i].getKaina()+GPU[i].getKaina()<<"$ "<<endl;
    }
    }

    int pasirinktiCPU(){
        int ats;
        cout<<"Pasirinkite CPU :"<<endl;
        atspausdintiProcesoriu();
        cin>>ats;
        return ats-1;
}
    int pasirinktiGPU(){
        int ats;
        cout<<"Pasirinkite GPU :"<<endl;
        atspausdintiVaizdoPlokste();
        cin>>ats;
        return ats-1;
}
    void atspausdinti(string a){
        cout<<a<<endl;
    }
    string addString(){
    string name;
    cin>>name;
    return name;
    }
    double addValue(){
    int a;
    cin>>a;
    return a;
    }
public:
    Parduotuve(){
    }
    void addProcesorius(Procesorius a){
        CPU.push_back(a);
    }
    void addVaizdoPlokste(vaizdoPlokste a){
        GPU.push_back(a);
    }
    void pridetiCPU(){
    cout<<"Irasykite CPU greiti"<<endl;
    float a=addValue();
    cout<<endl;
    cout<<"Irasykite CPU Kaina"<<endl;
    float b=addValue();
    cout<<endl;
    cout<<"Irasykite CPU Architektura(AMD,INTEL etc.)"<<endl;
    string c=addString();
    cout<<endl<<endl;
    cout<<a<<"Ghz "<<b<<"$ "<<c<<endl;
    cout<<"CPU created"<<endl;
    }
void pridetiGPU(){
    cout<<"Irasykite GPU pavadinima"<<endl;
    string a=addString();
    cout<<endl;
    cout<<"Irasykite GPU greiti"<<endl;
    float b=addValue();
    cout<<endl;
    cout<<"Irasykite GPU kaina"<<endl;
    float c=addValue();
    cout<<endl;
    cout<<"Irasykite GPU architektura"<<endl;
    string d=addString();
    cout<<endl;
    cout<<"Irasykite GPU branduoliu kieki"<<endl;
    float e=addValue();
    cout<<endl;
    cout<<"Irasykite GPU hash rate"<<endl;
    float f=addValue();
    cout<<endl;
    cout<<"Irasykite GPU RAM kieki"<<endl;
    float g=addValue();
    cout<<endl<<endl;
    cout<<a<<" "<<b<<"Mhz "<<c<<"$ "<<d<<" "<<e<<" Core count "<<f<<" Hash rate "<<g<<" RAM count"<<endl;
    cout<<"GPU created"<<endl;
    }
    void pcFunction(){
    system("cls");
        int a=pasirinktiCPU();
        system("cls");
        int c=pasirinktiGPU();
        system("cls");
        cout<<endl;
        cout << "CPU: " << CPU[a].getGreitis()<<" "<<CPU[a].getKaina()<<" "<<CPU[a].getArchitektura()<<" "<<endl;
        cout << "GPU: " << GPU[c].getPavadinimas()<<" "<<GPU[c].getGreitis()<<" "<<GPU[c].getKaina()<<" "<<GPU[c].getArchitektura()<<" "<<GPU[c].getbKiekis()<<" "<<GPU[c].gethRate()<<" "<<GPU[c].getrKiekis()<<
        " "<<GPU[c].geteConsumption()<<"W "<<endl;
        cout<<endl<<endl;
        atspausdinti("PC sukurtas");
         system("pause");


    }
    void runShop(){
            int a;
            do {
            menu();
            cin >> a;
            menuSwitches(a);
        } while (a !=7);{
            cout<<"Select valid option"<<endl;
        }
    }
    void menu() {
        cout << "-------------------------------------------" << endl;
        cout << "            PC PARTS 4 U" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "[1] - Prideti CPU " << endl;
        cout << "[2] - Prideti GPU" << endl;
        cout << "[3] - Atspausdinti visus CPU" <<endl;
        cout << "[4] - Atspausdinti visus GPU"<<endl;
        cout << "[5] - Sukurti Kompiuteri"<<endl;
        cout << "[6] - Atspausdinti kompiuterius"<<endl;
        cout << "-------------------------------------------" << endl;
    }
    void menuSwitches(int a){
        switch(a){

        case 1:
            pridetiCPU();
            break;
        case 2:

            pridetiGPU();
            break;
        case 3:

            atspausdintiProcesoriu();
            break;

        case 4:
            atspausdintiVaizdoPlokste();
            break;

        case 5:
            pcFunction();
            break;

        case 6:
            atspausdintiPC();
            break;
        }
}
    void computerPartStock(){
    Procesorius intel(3.4,350,"Intel",100);
    Procesorius amd(3.2,200,"AMD",200);

    vaizdoPlokste gpu1("Turbo GPU3000",10000,500,"AMD",4,144,16,400);
    vaizdoPlokste gpu2("Unturbo GPU2131",5000,250,"Apple",0,20,2,200);

    addProcesorius(intel);
    addProcesorius(amd);

    addVaizdoPlokste(gpu1);
    addVaizdoPlokste(gpu2);

    }

};





int main()
{
    Parduotuve pcPart;
    pcPart.computerPartStock();
    pcPart.runShop();


    return 0;
}
