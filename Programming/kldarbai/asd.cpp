#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if ((a>b) && (a>=5)){
        cout<<"saunuolis";
    } else if (a>7){
       cout <<"saunuolis";
    } else if ((a<5)&&(a<7)&&(b>=a)){
        cout <<"blogai";
    }



    return 0;
}

























