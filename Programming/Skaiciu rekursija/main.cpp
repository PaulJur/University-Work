#include <iostream>

using namespace std;

#include <iostream>

using namespace std;
int skaitmenu(int n){
   int ats=0;
    if(n>9){
        ats=n%10+skaitmenu(n/10);
        cout<<" test"<<n%10<<endl;
    }
    else {
      cout<<" test"<<n%10<<endl;
        return n;
    }

    return ats;

}
int main()
{
    int n=1;
    while( n!=0){


    cin>>n;
    cout << skaitmenu(n);

}}
