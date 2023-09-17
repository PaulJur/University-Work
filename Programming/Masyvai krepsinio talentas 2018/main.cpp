#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int taskai[n],kamuoliai[n];

    //duomenu nuskaitymas
    for(int i=0;i<n;i++){
        cin>>taskai[i]>>kamuoliai[i];
    }
    //sumavimas
    int bTaskai=0,bKamuoliai=0,dubliai=0;

    for(int i=0;i<n;i++){
        bTaskai=bTaskai+taskai[i];
        bKamuoliai=bKamuoliai+kamuoliai[i];
        if(taskai[i]>9&&kamuoliai[i]>9) dubliai++;
    }
    float vTaskai,vKamuoliai;

    vTaskai=(float)bTaskai/n;
    vKamuoliai=(float)bKamuoliai/n;

    system("cls");
    cout<<bTaskai<<" "<<bKamuoliai<<endl;
    cout<<fixed<<setprecision(1)<<vTaskai<<" "<<vKamuoliai<<endl;
    cout<<"Dubliu kiekis:"<<dubliai;





    return 0;
}
