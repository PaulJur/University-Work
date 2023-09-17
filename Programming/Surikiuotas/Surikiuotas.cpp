#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Irasykite 6 skaicius"<<endl;
    cin>>n;
    int skaiciai[6];
    int result=0;
    for(int i=0;i<6;i++){
        cin>>skaiciai[i];
        if(skaiciai[1]>skaiciai[i+1]){
            cout<<"Surikiuota"<<endl;
            break;
            }

             else{

            for(int i=1;i<n;i++){
                if(skaiciai[1]<skaiciai[i+1]){
                    cout<<"Nesurikiuota"<<endl;
                    break;
                }
            }
        }

    }
//realiai uzduoties nelabai supratau, kaip gali po 5 eiti 1 ir gautis surikuota seka ?
//jeigu 1 2 3 4 5 6, tai ismeta, kad surikiuota.





    return 0;
}
