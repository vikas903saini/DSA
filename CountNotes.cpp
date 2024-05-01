#include <bits/stdc++.h>
using namespace std;
int main()
{
     int value;
     cout << "Enter a Value : ";
     cin >> value;
     cout << "Check no. of notes : " << endl
          << "press 1 -> no. of 100 notes " << endl;
     cout << "press 2 -> no. of 50 notes " << endl
          << "press 3 -> no. of 20 notes " << endl
          << "press 4 -> no. of 10 notes " << endl;
     int no;
     int n50, n20, n10;
     cin >> no;
     switch (no)
     {
     case 1:
          cout << "100 notes is : " << value / 100 << endl;
     case 2:
          n50 = value - (value / 100) * 100;
          cout << "50 notes is : " << n50 / 50 << endl;
     case 3:
          n20 = n50 - (n50 / 50) * 50;
          cout << "20 notes is : " << n20 / 20 << endl;
     case 4:
          n10 = n20 - (n20 / 20) * 20;
          cout << "10 notes is : " << n10 / 10 << endl;
          break;
     default:
          cout << endl
               << "Invalid number ";
          break;
     }
     return 0;
}