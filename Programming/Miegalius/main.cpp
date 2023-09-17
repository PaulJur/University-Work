#include <iostream>

using namespace std;

int main()
{
   int h1,m1,h2,m2,n,skirtumas;
   cin>>n;

   for (int i=0;i<n;i++){
    cin>>h1>>m1;
    cin>>h2>>m2;

    skirtumas=h2*60+m2-h1*60*m1;

    cout<<i+1<<" "<<skirtumas<<endl;

   }





    return 0;
}
