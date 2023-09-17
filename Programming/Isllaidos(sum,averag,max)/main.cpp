#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,m;
    cout<<"Kiek dienu irasykite"<<endl;
    cin>>n;
    double isleido[n];
    cout<<"Irasykite dienpinigius isleistus"<<endl;

//suma
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>isleido[i];
        sum+=isleido[i];
    }
     double isleidoF=0;
     isleidoF=sum;

//maximumas
     float maxim=isleido[0];
     for(int i=0;i<n;i++){
        if(maxim<isleido[i])
            maxim=isleido[i];

     }
//vidurkis
    float sumG=0;
     for(int i=0;i<n;i++){
         sumG+=isleido[i];
     }
     float average;
     average = (float)sumG/n;







cout<<fixed<<setprecision(2)<<"Liko dienpinigiu: "<<10-isleidoF<<endl<<"Maximumas:  "<<maxim<<endl<<"Vidurkis: "<<average<<endl;






//cout<<fixed<<setprecision(2)<<10-isleidoF<<endl;







    return 0;
}
