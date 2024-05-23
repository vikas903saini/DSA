/*Problem statement
You are given a positive integer ‘n’.
Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
Example:
Input: ‘n’ = 7
Output: 2
Explanation:
The square root of the number 7 lies between 2 and 3, so the floor value is 2.*/
#include<bits/stdc++.h>
using namespace std;
int sqrtno(int n){
    int start=0;
    int end=n;
    int mid=start +(end-start)/2;
    int ans;
    while(start<=end){
        int square=mid*mid;
        if(square==n)
            return mid;
        if(square<n){
            ans=mid;
            start=mid+1;
        }
        else
            end=mid-1;
    mid=start +(end-start)/2;
    }
    return ans;
}
int main(){
    int no;
    cout<<"enter a no : ";
    cin>>no;
    cout<<"square root of : "<<no<<" is "<<sqrtno(no)<<endl;
    return 0;
}