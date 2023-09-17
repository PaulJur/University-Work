#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
  int mag,lan,kar,gyvybes;

   cout<<"Gyvybes karys ";
   cin>>gyvybes;
   kar=124+(gyvybes*0.70/10);
   cout<<kar<<endl;


   cout<<"Gyvybes Magas ";
   cin>>gyvybes;
   mag=240;
   if(gyvybes>=2000)mag+=120;
   cout<<mag<<endl;

   cout<<"Gyvybes Lankininkas ";
   cin>>gyvybes;
   lan=gyvybes-180*3;
   cout<<lan;











    return 0;
}
