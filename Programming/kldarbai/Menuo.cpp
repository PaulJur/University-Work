#include <iostream>

using namespace std;

int main()
{
   int a,b,liekana;
   cin>>a>>b;



   a=a+b-1;
   liekana=a%7;


   switch(liekana) {

   case 1: cout<<"pirm"; break;
    case 2: cout<<"antr"; break;
     case 3: cout<<"trec"; break;
      case 4: cout<<"ketv"; break;
       case 5: cout<<"penkt"; break;
        case 6: cout<<"sest"; break;
         case 7: cout<<"sekm"; break;
    default : cout<<"no";
   }









    return 0;
}
