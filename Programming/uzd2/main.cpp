#include <iostream>

using namespace std;

int main()
{
    //Reikia pvz rasyti 100,300,400 ir tada 0, ir tada kompiuterio  kaina pvz : -2000
    int dienpinigiai=0;
    int kompiuteris=0;
    int liko=0;
    int sutaupe=0;
    cin>>dienpinigiai;

    while(dienpinigiai>1){
        dienpinigiai++;
        sutaupe+=dienpinigiai;
        cin>>dienpinigiai;
    }
    cin>>kompiuteris;
    liko=sutaupe+kompiuteris;
    cout<<liko;






    return 0;
}
