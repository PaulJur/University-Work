#include <iostream>

using namespace std;

int funkcija(int a,int b){

    int result;
    result= 2*a+9+b;
    return result;
}

bool pilnametis(int a){
   if (a>17) return true;
   else return false;


}
int main()
{
    int x,y;
    cin>>x>>y;
    int rezultatas;
    rezultatas=funkcija(x,y);

    cout<<rezultatas;










    return 0;
}
