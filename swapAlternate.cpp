#include <bits/stdc++.h>
using namespace std;
void swap_Alternate(int arr[], int size)
{
    for (int i = 0; i < size;i += 2)
    {
        if (i < size-1)
            swap(arr[i], arr[i + 1]);
        
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
    cout << "Swap Alternate Array : " << endl;
    swap_Alternate(arr, 5);
    print_array(arr, 5);
    return 0;
}