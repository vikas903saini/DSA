/*Problem statement:
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Note :
Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.*/   
#include<bits/stdc++.h>
using namespace std;
void printarr(int [],int);
void sort012(int arr[],int n){
    int low=0,mid=0,high=n-1;
  while(mid<=high){
     if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        low++;mid++;
     }
     else if(arr[mid]==1)
      mid++;
      else if(arr[mid]==2){
         swap(arr[mid],arr[high]);
         high--;
      }
  }
    printarr(arr,n);
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={0,1,2,1,2,1,2,0,1,0,1,2,0,1,1,0};
    sort012(arr,16);
    return 0;
}