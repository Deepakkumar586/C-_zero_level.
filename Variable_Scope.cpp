#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    // int a = 7;
    // cout << a << endl;
    // if (true)
    // {
    //     // int a = 3;
    //     // cout << a << endl;

    //     int b = 3;
    //     cout << b << endl;
    // }

    // // cout <<a <<endl;
    // int b = 1;
    // cout << b << endl;

    // int b =3;
    // cout <<b <<endl;
    
    
    // int i = 8;
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << "Hii" << endl;
    // }

    // for ( ;i < 8; i++)
    // {
    //     cout << "Hii" << endl;
    // }

    // if(1){
    //     int b;
    //     if(2){
    //         int b;
    //         if(4){
    //             cout <<b;
    //         }
    //     }
    // }


    // kisi bhi digit ki value ko nikalne ke liye

    // int n;
    // cin>>n;
    // int prod = 1;
    // int sum = 0;
    // while(n!=0){
    //     int digit = n%10;
    //     prod = prod * digit;
    //     sum = sum + 0;

    //     n = n/10;
    //     }
    //     int answer = prod -  sum;
    //     return answer;




    // Decimal to Binary
    // int n;
    // cin>>n;

    // int ans = 0;
    // int i = 0;
    // while(n != 0){
    //     int bit  = n & 1;
    //     ans = (bit * pow(10,i) ) + ans;

    //     n =  n <<  1;
    //     i++;
    // }
    // cout << "Answer is : " <<ans <<endl;
    // return 0;


    // Negative Number to binarey
//    int n ;
//     cin >> n;
//     int m  = n;
//     if (n < 0)
//     {
//         n *= -1;
//     }
//     int ans = 0 , i = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = ans + bit * pow(10, i);
//         n = n >> 1;
//         i++;
//     }
//     if(m < 0){
//         cout <<"-" << ans << endl;
//     }else{
//         cout << ans << endl;
//     }
//     return 0;



    // binary to decimal 
    int n;
    cin>>n;
    int i = 0;
    int ans = 0;
    while(n!=0){
        int digit = n%10;
        if(digit == 1){
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;  
     
    }
       cout << ans <<endl;

} 