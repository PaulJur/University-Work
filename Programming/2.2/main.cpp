#include <iostream>

using namespace std;

int main()
{
    //Mazosios 97-122,did�iosios 65-90,skai�iai 48-57.
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
   //Truput�li video pagalbos naudojau d�l ASC Table.










    return 0;
}
