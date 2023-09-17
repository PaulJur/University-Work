#include <iostream>

using namespace std;

void nuskaitymas(int &n,int bar[], int raud[], int leps[]){
    cin>>n;
    int d,b,r,l;
    for (int i=0;i<n;i++){
        cin>>d>>b>>r>>l;
        bar[d]=bar[d]+b;
        raud[d]=raud[d]+r;
        leps[d]=leps[d]+l;
    }
}
void irasymas(int n,int bar[], int raud[], int leps[]){

 for (int i=0;i<n;i++){
  if(bar[i]!=0 || raud[i]!=0 || leps[i]!=0)
  cout<<i<<" "<<bar[i]<<" "<<raud[i]<<" "<<leps[i]<<endl;
 }
}
int diena(int bar[], int raud[], int leps[]){
    int maksR=0;
    int maksD=0;
    for (int i=1;i<31;i++){
        if((bar[i]+raud[i]+leps[i])>maksR){
           maksR=bar[i]+raud[i]+leps[i];
           maksD=i;
        }
    }




}
void reset(int mas[],int n){
for (int i=0;i<n;i++)
    mas[i]=0;
}
int main()
{
    int d;
    int bar[32],raud[32],leps[32];
    reset(bar,32);
    reset(raud,32);
    reset(leps,32);

    nuskaitymas(bar,raud,leps);
    irasymas(bar,raud,leps);
    d=diena(bar,raud,leps);

    cout<<d<< bar[d]+raud[d]+leps[d]<<endl;





    return 0;
}
