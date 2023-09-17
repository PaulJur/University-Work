#include<iostream>
using namespace std;
void gnomeSort(int arr[], int n){
   int index = 0;
   while(index < n){
      if(index == 0) index++;
      if(arr[index] >= arr[index - 1]){
         index++;
      } else {
         swap(arr[index], arr[index - 1]);
         index--;
      }
   }
}
main() {
   int data[] = {54, 74, 98, 154, 98, 32, 20, 13, 35, 40};
   int n = sizeof(data)/sizeof(data[0]);
   cout << "Sortintas ";
   gnomeSort(data, n);
   for(int i = 0; i <n;i++){
      cout <<data[i] << " ";
   }
}
