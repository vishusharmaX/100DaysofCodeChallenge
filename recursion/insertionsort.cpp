#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
   int temp;

   if (n == 1){
      return;
   }
   for (int i=0; i<n-1; i++){
      if (arr[i] > arr[i+1]){
         temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
      }
   }
   n=n-1;
   insertionSort(arr, n);
}
int main(){
   int Arr[7] = {21, 34, 20, 31, 78, 43, 66};
   insertionSort(Arr, 7);

   cout<<"Sorted array : ";
   for(int i=0;i<7;i++){
      cout<<Arr[i]<<" ";
   }

   return 0;
}
