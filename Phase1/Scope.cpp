// #include <iostream>
// using namespace std;

// void update(int arr[], int n)
// {

//     cout << "Inside the Array" << endl;

//     // updating Array first Element
//     arr[1] = 120;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[5] = {2, 3, 4, 5, 6};
//     update(arr, 5);

//     // main Function
//     cout << "Main Function Of Array" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// in array all element of sum
#include <iostream>
using namespace std;

// void update(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i];5
//     }
// }

int main()
{
    int size;
    cout << "Enter the Size :" << endl;
    cin >> size;

    int arr[100];

    int sum = 0;

    // taking input to array
    cout << "Enter The Element of Array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
        cout << "All Element of Sum :" << sum << endl;
    }
    // update(arr, size);
}