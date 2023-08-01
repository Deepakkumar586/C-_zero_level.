#include <iostream>
using namespace std;

// Check Prime Number
int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Is Prime Number"<<endl;

    }
    else
    {
        cout<<"Is Not Prime Number"<<endl;
    }
    
}