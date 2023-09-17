#include <iostream>

using namespace std;

int main()
{
    int i,sk1,sk2,s,a,b;
    cin>>a>>b;



    for(int i=a;i<=b;i++){
    sk1=i/100;
    sk2=i%100;
    s=(sk1+sk2)*(sk1+sk2);
    if(s==i)cout<<s<<endl;

    }



    return 0;
}
