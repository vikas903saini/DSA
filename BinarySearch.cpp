/*BINARY SEARCH*/
#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+ (end-start)/2;
    while(start<=end){
        if(arr[mid]==key)
            return mid;
        else if(key>arr[mid])
            start=mid+1;
        else    
            end=mid-1;
        mid =start + (end-start)/2;
    }
    return -1;
}
int main(){
    int evenIndex[6]={2,4,8,10,18,20};
    int oddIndex[5]={1,4,6,11,19};
    cout<<"Index at 8 : "<<binary_search(evenIndex,6,8)<<endl;
    cout<<"Index at 19 : "<<binary_search(oddIndex,5,20);

    return 0;

}