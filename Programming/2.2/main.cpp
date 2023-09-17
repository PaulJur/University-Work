#include <iostream>

using namespace std;

int main()
{
    //Mazosios 97-122,didþiosios 65-90,skaièiai 48-57.
   int num;
   char si;
   cin>>si;
   num=si;

   if((si>=97&si<=122)|(si>=65&si<=90)) {
      cout<<"Raides"<<endl;
   } else if (si>=48&si<=57){
       cout<<"Skaiciai"<<endl;
   } else{
       cout<<"Kitoks simbolis"<<endl;
   }
   //Truputëli video pagalbos naudojau dël ASC Table.










    return 0;
}
