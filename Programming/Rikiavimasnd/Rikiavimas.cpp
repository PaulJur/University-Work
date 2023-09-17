#include <iostream>

using namespace std;

struct zmones{
  string vardas;
  int kodas;
};

int main()
{
int n;
cin>>n;
int i;
struct zmones asmu[n];
for(i=0;i<n;i++){
    cin>>asmu[i].vardas>>asmu[i].kodas;
}
cout<<asmu[0].kodas<<" "<<asmu[0].vardas<<endl;
//gaunasi nesamonigi skaiciai.



    return 0;
}

