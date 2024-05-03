/*Problem statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.*/
#include<bits/stdc++.h>
using namespace std;
vector<int>intersectionArray(vector<int> &arr1,vector<int> &arr2)
{
    int n=arr1.size();
    int m=arr2.size();
    vector<int> temp;
	for(int i=0,j=0;i<n && j<m;)
	{
          if (arr1[i] == arr2[j]) {
            temp.push_back(arr1[i]);
			i++;
			j++;
          }
		  else if(arr1[i]>arr2[j])
			j++;
		  else
		  	i++; 
    }
	return temp;
}
void printArray(vector<int> &ans)
{
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}
int main()
{
    cout<<"first Array : ";
    vector<int> arr1={1,2,2,2,3,4};
    printArray(arr1);
    cout<<endl<<"second Array : ";
    vector<int> arr2={2,2,3,3};
    printArray(arr2);
    vector<int> ans=intersectionArray(arr1,arr2);
    cout<<endl<<"Intersection Array: ";
    printArray(ans);
    return 0;
}