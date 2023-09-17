#include <iostream>
#include <iomanip>
using namespace std;





int main()
{

    int n,sum;
    cin>>n;
    double average;
    int pazymiai[n];


    for(int i=0;i<n;i++){
        cin>>pazymiai[i];
    }
    sum=0;
    for(int i=0;i<n;i++){
        sum +=pazymiai[i];
    }
    average = (float)sum/n;
    cout<<fixed<<setprecision(2)<<average<<endl;

    return 0;

}








