#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int size){
    int i=1;
    while(i<size){
        int temp = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        i++;
    }
    
}
void printArr(int arr[], int size)
{
    cout << "Bubble Sort : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main(){
    int arr[]={5,1,4,0,9,6};
    insertionSort(arr,6);
    printArr(arr,6);
    return 0;
}