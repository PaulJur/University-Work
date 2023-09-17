#include <iostream>

using namespace std;

int main()
{
    int d2,t3,k4,p5;
    cin>>d2>>t3>>k4>>p5;
    int at2,at3,at4,at5;

    at2=d2/10*2+d2%10*1;
    at3=t3/100*4+(t3%100/10)*2+t3%10;
    at4=k4/1000*8+(k4%1000%100/10)*4+k4%10;// Nezinau ka toliau daryti, kad gautusi 11, o ne 13.
    cout<<at2<<" "<<at3<<" "<<at4<<" ";











    return 0;
}
