#include <iostream>
using namespace std;

// print array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Swap Array
void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 3)
    {
        if (i + 2 < n)
        {
            swap(arr[i], arr[i + 2]);
        }
    }
}

int main()
{
    int alternateArr[10] = {23, 3, 4, 5, 6,21,24,13,10,9};
    swapAlternate(alternateArr, 10);
    printArray(alternateArr, 10);
}