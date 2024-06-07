#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        bool flag = 0;
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
            
        }
        if (flag == 0)
                break;
    }
}
void printArr(int arr[], int size)
{
    cout << "Bubble Sort : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {5, 1, 2, 7, 6, 3};
    bubbleSort(arr, 6);
    printArr(arr, 6);
    return 0;
}