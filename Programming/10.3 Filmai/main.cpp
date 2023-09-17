#include <iostream>
#include <iomanip>

using namespace std;

/*
1000000 8.6
120000 8.5
20000000 8.6
200000000 5.8
200000000 8.6
120000 7.7
*/



int main()
{
   int  k[6],n,minim;
   double rate[6],maxim;
   cin>>n;

   for(int i=0;i<n;i++){
    cin>>k[i]>>rate[i];
    maxim=rate[i];
   }

   for(int i=0;i<n;i++){
    if(maxim<rate[i])
        maxim=rate[i];
    }
    cout<<endl;
if(maxim>rate[0,1,2,3,4,5]){
    cout<<maxim<<endl;
    if(maxim=rate[0,1,2,3,4,5]){
       cout<<"1"<<endl;;
    }
}

  minim =k[0];
  for(int i=0;i<n;i++){
    if(minim>k[i])
        minim=k[i];
  }
cout<<endl;

if(minim<=k[0,1,2,3,4,5]){
    cout<<minim<<endl;

    if(minim=k[0,1,2,3,4,5]){
        cout<<"6"<<endl;
    }
}
//radau paskutini,bet nezinau kaip coutinti paskutini pagal sarasa jeigu vienodas.
cout<<endl;
for(int i=0;i<n;i++){
    if (k[i]>=10000000 && rate[i]>8.5) {

        cout<<k[i]<<" "<<rate[i]<<endl;
    }
}

//Nesupratu apie koki saraso numeri, tada reiketu darytis nauja masyva su skaicais prie kitu? pvz: 1. 232322 8.5
//turbut nesupratau uzduoties:D





    return 0;
}
