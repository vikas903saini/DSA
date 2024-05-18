/*Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now, your task is to find the Total number of Occurence of ‘k’ in 'arr'.*/
#include<bits/stdc++.h>
using namespace std;
int lastOcc(vector<int> arr,int size,int key){
    int s=0;
    int e=size-1;
    int mid=s +(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int firstOcc(vector<int> arr,int size,int key){
    int s=0;
    int e=size-1;
    int mid=s +(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,3,3,3,3,3,3,4,5};
    int first=firstOcc(arr,11,3);
    int last=lastOcc(arr,11,3);
    int total=last-first+1;
    cout<<"Total occurence of 3 at index : "<<total<<endl;
    return 0;
}