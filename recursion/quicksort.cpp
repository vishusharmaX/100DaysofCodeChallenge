#include<iostream>
using namespace std;
int partition(int arr[], int s  , int e){

    int pivot = arr[s];

    int cnt = 0 ;

    for(int i = s+1 ; i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex = s + cnt;

    swap(arr[pivotIndex],arr[s]);

    //left and right wala part smbal lete h 

    int i =s , j=e;

    while(i<pivotIndex && j> pivotIndex){
         while(arr[i]<=pivot){
            i++;
         }
         while(arr[j]>pivot){
            j--;
         }
         if(i<pivotIndex && j> pivotIndex){
            swap(arr[i++], arr[j--]);
         }
    }

    return pivotIndex;


}



void quickSort(int arr[], int s , int e){
    //base case
    if(s>=e){
        return;
    }

    //partition wala case
    int p = partition(arr,s,e);

    //left part sort karo
    quickSort(arr,s,p-1);

    //right wala part sort karo
    quickSort(arr,p+1,e);

}

int main(){
    
    // int arr[5] = {2,4,1,6,9};
    int arr[5] = {12,2,9,10,1};
    int n = 5;
    quickSort(arr,0,n-1);

    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}










// Why Quick Sort is preferred over MergeSort for sorting Arrays ?
// Quick Sort in its general form is an in-place sort (i.e. it doesn’t require any extra storage) whereas merge sort requires O(N) extra storage, N denoting the array size which may be quite expensive. 
// Allocating and de-allocating the extra space used for merge sort increases the running time of the algorithm. Comparing average complexity we find that both types of sorts have O(N logN) average complexity but the constants differ. For arrays, merge sort loses due to the use of extra O(N) storage space.
// Most practical implementations of Quick Sort use randomized versions. The randomized version has an expected time complexity of O(N logN). The worst case is possible in the randomized version also, but the worst case doesn’t occur for a particular pattern (like sorted array) and randomized Quick Sort works well in practice.
// Quick Sort is also a cache friendly sorting algorithm as it has a good locality of reference when used for arrays.
// Quick Sort is also tail recursive, therefore tail call optimizations are done.
// Why MergeSort is preferred over QuickSort for Linked Lists ?
// In the case of linked lists, the case is different mainly due to the difference in memory allocation of arrays and linked lists. Unlike arrays, linked list nodes may not be adjacent in memory. 
// Unlike arrays, in linked lists, we can insert items in the middle in O(1) extra space and O(1) time. Therefore merge operation of merge sort can be implemented without extra space for linked lists.
// Unlike arrays, we can not do random access in linked lists. Quick Sort requires a lot of this kind of access. In a linked list to access the ith index, we have to travel each and every node from the head to ith node as we don’t have a continuous block of memory. Therefore, the overhead increases for quicksort. Merge sort accesses data sequentially and the need for random access is low. 