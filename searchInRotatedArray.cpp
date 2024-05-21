/*You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now the array is rotated at some pivot point unknown to you.
For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].
Now, your task is to find the index at which ‘k’ is present in 'arr'.
Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 'arr'.
3. 'arr' can be rotated only in the right direction.*/
#include <bits/stdc++.h>
using namespace std;
int getpivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
            start = mid + 1;
        else
            end = mid;
    mid=start + (end - start) / 2;
    }
    return end;
}
int binary_search(vector<int> arr, int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int searchElement = 3;
    vector<int> arr = {7, 9, 1, 2, 3};
    int pivot = getpivot(arr);
    if (searchElement >= arr[pivot] && searchElement <= arr[arr.size() - 1])
        cout << "Search Element 3 at index : " << binary_search(arr, pivot, arr.size() - 1, searchElement);
    else
        cout << "Search Element 3 at index : " << binary_search(arr, 0, pivot - 1, searchElement);
    return 0;
}