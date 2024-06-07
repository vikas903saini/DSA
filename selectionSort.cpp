#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[i], arr[minIndex]);
    }
}
void printArr(int arr[], int size)
{
    cout<<"sorted Array : ";
    for (int i = 0; i < size; i++)
        cout<< arr[i] << " ";
}
int main()
{
    int arr[] = {5, 2, 0, 1, 3, 4};
    selectionSort(arr, 6);
    printArr(arr, 6);
    return 0;
}