#include <iostream>
#include <iomanip>



using namespace std;

int main()
{

    int m;

    cin>>m;
    int mSkaicius[m];


    for(int i=0;i<m;i++){
        cin>>mSkaicius[i];
    }
    double temp=0;
    temp=mSkaicius[1];
    if(temp/5){
       temp=temp+0.1f;
       }

    double vgreitis=0;
    vgreitis=mSkaicius[2];
    if(temp/3){
        vgreitis=vgreitis+0.05f;
    }

     int krit=0;
     krit=mSkaicius[3];
     if (krit/1 || krit/krit){
        krit=krit*1.10f;
     }







    cout<<fixed<<setprecision(2)<<temp<<" "<<"temp"<<endl<<vgreitis<<" "<<"vgreitis"<<endl
    <<krit<<" "<<"krit"<<endl;









    return 0;
}
