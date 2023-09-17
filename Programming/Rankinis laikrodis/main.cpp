#include <iostream>

using namespace std;

int main()
{


    int h, mi;
    cin>>h>>mi;
    h=h*30+90;
    mi=mi*6+90;
    h=h/30%12;
    cout<<h<<" "<<mi;



    return 0;
}
