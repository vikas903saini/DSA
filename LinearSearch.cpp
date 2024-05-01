#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++ ){
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[6];
    int key;
    cout<<"enter a key : "<<endl;
    cin>>key;
    cout<<endl;
    cout<<"enter array element : "<<endl;
    for(int i=0;i<6;i++)    
        cin>>arr[i];
    cout<<"This key at index is : "<<LinearSearch(arr,6,key);
    return 0;
}