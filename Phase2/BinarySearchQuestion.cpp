#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            // right jana hoga
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            // left jana hoga
            end = mid - 1;
        }
         mid = start + (end - mid) / 2;
    }
    return ans;
}

// for last Occurance
int lastOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
        {
            // right jana hoga
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            // left jana hoga
            end = mid - 1;
        }
         mid = start + (end - mid) / 2;
    }
    return ans;
}


int main()
{
    int arr[5] = {1, 2, 3, 3, 3};

    cout << "First Occurance value " << firstOcc(arr, 5, 3);
    cout << "last Occurance value " << lastOcc(arr, 5, 3);


   
}