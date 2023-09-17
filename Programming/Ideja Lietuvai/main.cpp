#include <iostream>

using namespace std;


struct ideja{
    string pavadinimas;
    int balsai;
    int did;
};


void skaitymas(ideja &Idejos)
{
    cin>>Idejos.pavadinimas;
    cin>>Idejos.balsai;
}


int didziausias(int balsai[], string pavadinimas[], int n)
{

for(int i=0;i<n;i++){
  if(balsai[i]>balsai[i+1]){
    cout<<balsai[i]<<endl;
  }
    if(balsai[i]<balsai[i+1]){
        swap(balsai[i], balsai[i+1]);
    }
  }

}

int main()
{
    cout<<"Irasykite kiek pavadinimu ir balsu bus"<<endl; //nesigavo kaip uzduotyje, turi rasyti pvz 7, kad galetum irasyti visus pradinis duomenis.
   int n,did;
   cin>>n;
   didziausias;
   ideja idejos[n];
    for( int i=0;i<n;i++){
        skaitymas(idejos[i]);
        //idejos[i].did=didziausias(idejos[i].balsai,idejos[i].pavadinimas) Nesuprantu, kodel neveikia sita eilute, bet programa viska israso tik rusiavimo nera.

    }
    cout<<idejos[0].pavadinimas<<" "<<idejos[0].balsai<<endl;
}

