#include <iostream>

using namespace std;

int main()
{


    char temp1,temp2;
    float tem1,tem2;
    cin>>temp1>>tem1>>tem2;

    if(temp1=='C'){
        if(temp2=='F'){
            tem2=tem1*9/5+32;
            cout<<tem2;
        }else{
        }

    }
    if(temp1='K'){
        if(temp2=='F'){
                tem2=tem1*9/5-459.67;
                cout<<tem2;

        }else{
           }

    }
        if(temp1=='F'){
         if(temp2=='K'){
                tem2=tem1+459.67/1.8;
                tem2=tem1-32/1.8;
                cout<<tem2;

         }else{
         }

      }

    return 0;

}
