#include <iostream>

using namespace std;

int main()
{
    //5 50 3 45 3 5
    int p,pz,a,az,k,t,m,c,zing;
    float v;
    cin>>p>>pz>>a>>az>>k>>t;

    zing=(p*pz-a*az)*k;
    m=zing/100;
    c=zing%100;//uzstrigau link sitos vietos, tai toliau padariau su video pagalba.
    zing=(p*pz+a*az)*k;

    v=(float)zing/100/t;

    cout<<m<<" "<<c<<" "<<v;







    return 0;
}
