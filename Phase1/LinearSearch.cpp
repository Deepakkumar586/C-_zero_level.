// #include <iostream>
// using namespace std;

// bool search(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int arr[10] = {1, -4, 5, 23, 45, 6, 2, 3, -5, -3};

//     cout << "Enter The Element to search Array :" << endl;
//     int key;
//     cin >> key;

//     bool found = search(arr, 10, key);

//     if (found)
//     {
//         cout << "Key is Present : " << key << endl;
//     }
//     else
//     {
//         cout << "key is Absent : " << key << endl;
//     }
// }

// reverse array
#include <iostream>
using namespace std;

// reverse function
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// printing Array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[6] = {3, 4, 5, 6, 7, 3};
    int arr2[7] = {22, 24, 12, 16, 7, 34, 56};
    reverse(arr1, 6);
    reverse(arr2, 7);

    printArray(arr1, 6);
    printArray(arr2, 7);
}