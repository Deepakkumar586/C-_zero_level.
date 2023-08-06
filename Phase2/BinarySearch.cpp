#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while(start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int evenArr[6] = {2, 4, 6, 8, 12, 14};
    int oddArr[5] = {3, 11, 14, 16, 17};

    int evenindex = binarySearch(evenArr,6,14);
    cout << "Index is 14 is" <<evenindex <<endl;

    int oddindex = binarySearch(oddArr,5,21);
    cout << "Index is 17 is" <<oddindex <<endl;

}