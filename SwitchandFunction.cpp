#include <iostream>
using namespace std;
int main()
{
    // int num = 2;
    // char ch = 'a';
    // cout <<endl;
    // switch (ch,num)
    // {
    // case 1:
    //     cout <<"First" <<endl;
    //     break;

    // case 2:
    // cout <<"Second" <<endl;
    // break;

    // case 'a':
    //         cout<<"This is character" <<endl;
    //         break;

    // default:
    //     cout <<"This is Default Phase" << endl;

    // }
    // cout <<endl;

    // additional things

    int num = 1;
    char ch = 'a';
    cout << endl;
    switch (2*num)
    {
    case 2:
        cout << "First" << endl;
        cout << "First Again" << endl;
        break;

    case 'a':
        switch (num)
        {
        case 1:
            cout << "Value of num is : " << num << endl;
            break;
        }
        break;

    default:
        cout << "This is Default Phase" << endl;
    }
    cout << endl;
}