#include <bits/stdc++.h>
using namespace std;
int sqrtno(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        int square = mid * mid;
        if (square == n)
            return mid;
        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}
double moreprc(int n, int prec, int tempsol)
{
    double ans;
    double factor = 1;
    for (int i = 1; i <= prec; i++)
    {
        factor = factor / 10;
        for (double j = n; j * j < tempsol; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int no;
    cout << "enter a no : ";
    cin >> no;
    int tempsol = sqrtno(no);
    cout<<"square root of "<<no<<" is : "<<moreprc(tempsol,3,no)<<endl;
    return 0;
}