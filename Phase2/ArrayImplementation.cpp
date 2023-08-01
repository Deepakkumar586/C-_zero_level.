// #include <iostream>
// #include <climits>
// using namespace std;

// // min number
// int getMin(int num[], int n)
// {
//     int min = INT_MAX;
//     for (int i = 0; i<n; i++)
//     {
//         if (num[i] < min)
//         {
//             min = num[i];
//         }
//     }
//     // return min
//     return min;
// }

// // check max number
// int getMax(int num[], int n)
// {
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i] > max)
//         {
//             max = num[i];
//         }
//     }
//     // return max
//     return max;
// }

// int main()
// {
//     int size;
//     cout << "Enter the value :" << endl;

//     int num[100];

//     // taking the input to array
//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }

//     cout << "Maximum value :" <<getMax(num, size) << endl;
//     cout << "Minimum value :" <<getMin(num, size) << endl;
// }

#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

// min number
int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // short code
        mini = min(mini, num[i]);

        // long code
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
    }
    // return min
    return mini;
}

// check max number
int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // short code
        maxi = max(maxi, num[i]);

        // long code
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    // return max
    return maxi;
}

int main()
{
    int size;
    cout << "Enter the number of elements :" << endl;
    cin >> size; // You forgot this line

    int num[100];

    cout << "Enter the values :" << endl;
    // taking the input to array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value :" << getMax(num, size) << endl;
    cout << "Minimum value :" << getMin(num, size) << endl;

    return 0;
}
