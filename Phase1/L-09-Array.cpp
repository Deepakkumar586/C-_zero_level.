#include <iostream>
using namespace std;

// Hold
void printArray(int arr[], int size)
{

    cout << "printing the Array :" << endl;
    for (int i = 0; i < size; i++)
    {
        // cout << arr[i] << endl;
        arr[i] = 2;
        cout << arr[i];
    }
}
int main()
{
    // declare array
    // int number[15];

    //  Access the value of array
    // cout << "Value at 15  index" << number[0] << endl;
    // cout << "Value at 90 index" << number[90] << endl;

    // initialize array
    // int second[4] = {3, 4, 5};

    // accessing element
    // cout << "Value at 9 index" << second[9] << endl;

    // third array
    // int third[15] = {4, 5};

    // int n = 15;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << third[i];
    // }

    // foruth array
    // initialize all location are 0
    // int fourth[10] = {2,4};
    // int n = 10;
    // cout << "printing the Array :" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << fourth[i] << endl;
    // }

    // fifth type array
    // int fifth[10] = {1};
    // int n = 10;
    // cout << "printing the Array :" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << fifth[i] << endl;
    // }

    // Array with a function

    int number[16] = {1, 2};
    printArray(number, 16);

    int sizeNumber = sizeof(number) / sizeof(int);

    // if we check array of size
    cout << "Size of Number will be :" << sizeNumber << endl;

    // char type array

    char ch[5] = {'a', 'b', 'c'};
    cout << "Index of 3 :" << ch[2] << endl;
      for (int i = 0; i < 3; i++)
    {
        cout <<ch[i] << endl;
     }
   

    cout << endl
         << "Everything is Fine" << endl
         << endl;
}