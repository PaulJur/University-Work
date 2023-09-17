#include <iostream>

using namespace std;

int main()
{
    int did=0;
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
int suma=0;

    while((n1+n2+n3+n4)==0){
        if((n1+n2+n3+n4)>did){
            did=(n1+n2+n3+n4);
        }
n1=n2;
n2=n3;
n3=n4;
cin>>n4;
suma+=n4;
    }





    return 0;
}
