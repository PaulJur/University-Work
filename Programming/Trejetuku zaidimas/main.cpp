#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int ttaskai[n],mtaskai[n];

    for(int i=0;i<n;i++){
    int tTaskai=0,mTaskai=0,VTtaskai=0,VMtaskai=0; //pirmas apskaiciavimas turi buti 6 15 tada 60 15,nes nezinau kaip daugiau padaryti,kad cin prasytu.
        cin>>ttaskai[i]>>mtaskai[i];

    tTaskai=tTaskai+ttaskai[i];
    mTaskai=mTaskai+mtaskai[i];
        if(tTaskai>mTaskai){
            VTtaskai=VTtaskai+1;
        }
        if(tTaskai<mTaskai){
            VMtaskai=VMtaskai+1;
        }
        if(tTaskai==mTaskai){
            VMtaskai=VMtaskai-1;
            VTtaskai=VTtaskai-1;
            cout<<"Lygiosios"<<endl;

        }
        if(VMtaskai>VTtaskai){
            cout<<"Marius laimejo"<<endl;

        }else{
            cout<<"Tomas Laimejo"<<endl;
        }
        cout<<"Mariaus taskai: "<<VMtaskai<<" "<<"Tomo taskai: "<<VTtaskai<<endl;

    }






    return 0;
}
