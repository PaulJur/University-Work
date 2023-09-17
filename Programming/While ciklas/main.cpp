#include <iostream>

using namespace std;

int main()
{
    int dienuKiekis=0;
    int atstumasbendras=0;
    int  dienos=0;
    float  vidurkis;
    cin>>dienos;

    int i=0;
    while(dienos>0){
        dienuKiekis++;
        atstumasbendras+=dienos;
        cin>>dienos;
    }
    vidurkis=(float)atstumasbendras/dienuKiekis;
cout<<dienuKiekis<<" "<<atstumasbendras<<" "<<vidurkis;



    return 0;
}
