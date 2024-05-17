/*You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.
An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.
Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".*/
#include <bits/stdc++.h>
using namespace std;
void printarr(vector<vector<int>>);
vector<vector<int>> triplats(vector<int>&arr, int sum)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int n = arr.size();
    int i;
    for ( i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
            continue;
    }
    int left = i + 1;
    int right = n - 1;
    int target = sum - arr[i];
    while (left < right)
    {
        int currsum = arr[left] + arr[right];
        if (currsum==target )
        {
            ans.push_back({arr[i], arr[left], arr[right]});
            while (left < right && arr[left] == arr[left + 1])
                left++;
            while (left < right && arr[right] == arr[right - 1])
                right--;
        left++;
        right--;
        }
        else if (currsum < target)
            left++;
        else
            right--;
    }
    cout << "triplates fx here :";
    return ans;
}
void printarr(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    // cout<<endl<<"second print "<<endl;
}
int main()
{
    int sum;
    cin >> sum;
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> triplatsum = triplats(arr, sum);
    cout << "Triplats sum with " << sum << endl;
    for (int i = 0; i <triplatsum.size(); i++)
    {
        for (int j = 0; j < triplatsum[i].size(); j++)
            cout << triplatsum[i][j] << " ";
        cout << endl;
    }
    return 0;
}