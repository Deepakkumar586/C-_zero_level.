#include <iostream>
using namespace std;

// check num isEven Or Odd
bool isEven(int a)
{

    if (a & 1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is Even " << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}