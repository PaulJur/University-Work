#include <iostream>

using namespace std;

int main()
{
    int x,y,dovanos=3,darbai;
    cin>>x>>y;

    darbai=x-2*y;

    if(darbai<1){
            dovanos=dovanos+0;
        cout<<dovanos;
       } else if (darbai<3){
             dovanos=4;
             cout<<dovanos;
            } else if(darbai<5){
               cout<<5;
              }else if (darbai<10){
                cout<<6;
              } else{
                 cout<<7;
    }









    return 0;
}
