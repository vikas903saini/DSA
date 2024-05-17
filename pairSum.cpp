/*Problem statement
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:

Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.*/
#include<bits/stdc++.h>
using namespace std;
void printArray(vector<vector<int>>);
vector<vector<int>>pairSum(vector<int> arr, int s){
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();)
        {
            if(arr[i]+arr[j]==s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
                j++;
            }
            // else if(arr[i]+arr[j]<s)
            //     j++;
            else {
                j++;
            }
        }
    }
    return ans;
}
// void sort2Dvector(vector<vector<int>> ans)
// {
//     for(int i=0;i<ans.size();i++)
//     {
//         if(ans[i]>ans[i+1])
//             swap(ans[i],ans[i+1]);
//         if(ans[i]==ans[i+1])
//         {
//             if(ans[i][0]>ans[i+1][0])
//                 swap(ans[i][0],ans[i+1][0]);
//         }
//     }
//     printArray(ans);
// }
void printArray(vector<vector<int>> ans){
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    vector<int> arr={2,-3,3,3,-2};
    int s;
    cout<<"enter sum who find pair : ";
    cin>>s;
    vector<vector <int>> ans = pairSum(arr,s);
    // sort2Dvector(ans);
    printArray(ans);
    return 0;
}