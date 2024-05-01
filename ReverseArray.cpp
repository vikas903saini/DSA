#include <bits/stdc++.h>
using namespace std;
void Reverse_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Reverse Array : " << endl;
    Reverse_array(arr, 5);
    print_array(arr, 5);
    return 0;
}