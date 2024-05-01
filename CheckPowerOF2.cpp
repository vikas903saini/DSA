#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    int ans = 1;
    // int i=0;
    // while(ans<=n){
    //     if(i<=31){
    //         if(i==31)
    //             break;
    //         else
    //             ans=pow(2,i);
    //     }
    //     if(ans==n)
    //         return true;
    //     i++;
    // }
    // return false;

    /*Another Solution */
    // for(int i=0;i<=30;i++)
    // {
    //     ans=pow(2,i);
    //     if(ans==n)
    //         return true;
    // }
    // return false;

    /*Another Solution*/
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
            return true;
        if ((ans < INT_MAX / 2) | (ans>INT_MIN/2))
            ans = ans * 2;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    cout << "Answer : " << isPowerOfTwo(n);
}