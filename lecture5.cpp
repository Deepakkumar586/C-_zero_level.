#include <iostream>
using namespace std;
int main()
{
    // int a = 4;
    // int b = 6;
    // cout<< " a&b " <<(a&b) << endl;
    // cout<< " a|b " <<(a|b) << endl;
    // cout<< " ~a " << ~a << endl;
    // cout<< " a^b " << (a^b) << endl;

    // cout << (17>>1)<<endl;
    // cout << (17>>2) <<endl;
    // cout << (19<<1) <<endl;
    // cout << (21 <<2) <<endl;

    // int i = 3;

    // cout << (i++)  <<endl;
    // cout << (++i) <<endl;

    // cout << (i--) <<endl;
    // cout << (--i)  <<endl;

    // int g = 2;
    // int h = 5;
    // if(++g){
    //     cout << h;
    // }
    // else{
    //     cout << ++h;
    // }

    //  For Loop

    // int n;
    // cout << "Enter The Value Of N : " <<endl;
    // cin>>n;
    // // for(int i = 1;i<n;i++){
    // //     cout << i <<endl;

    // // }

    // for( ; ;){
    //     cout<< "Space" <<endl;

    // }

    // We can also use this type of For loop
    // int n;
    // cout << "Enter The Value Of N :";
    // cin>>n;
    // int i = 1;
    // for( ; ;){
    //     if(i<n){
    //         cout << i <<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

    // and this type of also use
    //      int n;
    //     cout << "Enter The Value Of N :";
    //     cin>>n;

    //     for(int a = 0,b = 1;a>=0 && b>=1;a--,b--){
    //         cout <<a << " " <<b <<endl;
    // }

    //    int n;
    //    cout << "Enter the Value of N : " <<endl;
    //    cin>>n;
    //    int sum = 0;
    //    for(int i =1;i<=n;i++){
    //     sum = sum + i;
    //     cout << sum << endl;
    //    }

    // using Fibonacci Series
    //  int n = 10;
    //  int a = 0;
    //  int b = 1;
    //  for(int i = 1;i<=n;i++){
    //     int nextNumber = a + b;
    //     cout<< nextNumber << " " <<endl;

    //     a = b;
    //     b = nextNumber;

    //  }

    // check n = 7 prime or not
    // int n;
    // cout<< "Enter A Number : " <<endl;
    // cin>>n;
    // bool isPrime = 1 ;
    // for(int i = 2;i<n;i++){
    //     if(n%i == 0){
    //         // cout << "7 Not Prime Number" <<endl;
    //         isPrime = 0;
    //         break;
    //     }

    // }
    // if(isPrime == 0){
    //     cout <<"Not a Prime Number" <<endl;

    // }
    // else{
    //     cout << "Is a Prime Number" <<endl;
    // }

    // continue
    //  for(int i = 0;i<5;i++){
    // cout <<"Hii" <<endl;
    // cout << "Hello" <<endl;
    // continue;
    // cout<< "Reply To de to Jaooo" <<endl;
    //  }


    //  Question -1 
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // output 0, 2, 4

        // Question - 2
    // for(int i = 0;i<5;i--){
    //     cout << i << endl;
    //     i++;
            
    //  }

    // output unlimited 0,0,0,0,0,0,0,0,0_ _ _ _ _ _


    // Question - 3
        //    for(int i = 0;i<=15;i += 2){
        //     cout << i << " " <<endl;
        //     if(i&1){
        //         continue;
        //     }
        //     i++; 
        //    }

        //    output 0,3,5,7,9,11,13,15



        // question 4
        // for(int i = 0;i<=15;i += 2){
        //     for(int j = i;j<=5;j++){
        //             cout <<i << " " <<j <<endl;
        //     }
        //    }


        // Question 5
        for(int i = 0;i<=5;i++){
            for(int j = i;j<=5;j++){
                if(i+j ==10){
                    break;
                }
                    cout <<i << " " <<j <<endl;
            }
           }

}
