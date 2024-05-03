#include<bits/stdc++.h>
using namespace std;
void sort01(int arr[],int size){
    int i=0,j=size-1;
    while(i<j)
    {
        
        if(arr[i]==1 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==0 && arr[j]==0) 
        {
            i++;
        }
        else
            j--;
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={0,1,1,0,1,0,0,0,1,1,0,1,0,1,0};
    cout<<"sort 0 or 1 : ";
    sort01(arr,15);
    printArray(arr,15);
    return 0;
}