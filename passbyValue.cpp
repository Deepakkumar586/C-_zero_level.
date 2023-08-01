#include <iostream>
using namespace std;

// pass by value
// void passingValue(int n)
// {
//     n++;
//     cout<< n<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     passingValue(n); //yhan par passingValue funtion me n  ki ak copy ban jati hai aur vo value function me chali jati hai

//     cout <<"Passing Value : "<<n <<endl;
//  }

// check Output

// void update(int a)
// {
//     a = a / 2;
// }
// int main()
// { 
//     int a = 10 ;
//     update(a);
//     cout <<a <<endl;
// }


// 2nd Question
// int update(int a)
// {
//     a -= 5;
//     return a;
// }
// int main()
// { 
//     int a = 15 ;
//     update(a);
//     cout <<a <<endl;
// }


// Question 3
int update(int a)
{
  int ans = a *a ;
  return ans;
}
int main()
{ 
    int a = 14;
   a=  update(a);
    cout <<a <<endl;
}