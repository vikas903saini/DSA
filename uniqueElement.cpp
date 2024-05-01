/*Problem statement
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
Note:
Unique element is always present in the array/list according to the given condition.*/

#include<bits/stdc++.h>
using namespace std;
int uniqueElement(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[]={5,3,1,5,1,3,4,7,4,8,8};
    cout<<"unique element : "<<uniqueElement(arr,11)<<endl;
    return 0;
}