#include <iostream>


using namespace std;

int main()
{
    //10,20,30,40,50
    int u1,u2,u3,u4,u5,u6,u7,u8,u9,u10;
    int d1,d2;
    cin>>u1>>u2>>u3>>u4>>u5>>u6>>u7>>u8>>u9>>u10;

    if (u1==1&&u2==1&&u3==1&&u4==1&&u5==1) {
        d1=200;
        //visi
    }
    if (u6==1&&u7==1&&u8==1&&u9==1&&u10==1) {
        d2=200;
        //visi
    }
    if (u1==1&&u2==0&&u3==0&&u4==0&&u5==1) {
        d1=80;
        //pirma ir penkta
    }
    if (u6==1&&u7==0&&u8==0&&u9==0&&u10==1) {
        d2=80;
        //pirma ir penkta
    }
    if ((u1==0||u2==0)&&u3==1&&u4==1){
        d1=u1*10+u2*20+u5*50+50;
        //trecia ir ketvirta
    }
    if ((u6==0||u7==0)&&u8==1&&u9==1){
        d2=u6*10+u7*20+u10*50+50;
        //trecia ir ketvirta
    }
    if (u1==0&&u2==0&&u3==0){
        d1=(u4*40+u5*50)/2;
        //pirma,antra,trecia nepadare
    }
     if (u6==0&&u7==0&&u8==0){
        d2=(u9*40+u10*50)/2;
        //pirma,antra,trecia nepadare
    }

    cout<<d1<<"|"<<d2;

    // Viskas lyg ir gerai skaièiuojasi, bet kaşkodël pirmam skaièiavime gaunu 200 ir 16, o ne 0.


    return 0;
}
