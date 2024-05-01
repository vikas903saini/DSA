#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int ans=1;
    while(n>0){
        ans=ans*n;
        n--;
    }
    if(ans<INT_MAX)
    return ans;
    else 
    return 0;
}
int main()
{
    int n,r;
    cout<<"value of n and r for nCr : "<<endl;
    cin>>n>>r;
    int ans;
    ans=fact(n)/(fact(n-r)*fact(r));
    cout<<"value of "<<n<<"C"<<r<<" : "<<ans<<endl;
return 0;
}