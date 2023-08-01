#include <iostream>
using namespace std;


// Factorial 
// int fact(int n){
//     int fact = 1;
//     for(int i = 1;i<=n;i++){
//         fact = fact * i;
//     }
//     return fact;
         
// }

// according to Formula
// int nCr(int n, int r){
//     int num = fact(n);
//     int denom = fact(r)*fact(n-r);

//    return num/denom;
// }



// when we use counting print the value
// void use karne par return ki jarurat nhi hoti hai
void printCount(int n){
    for(int i=1;i<=n;i++){
        cout <<i <<endl;
    }
}

int main(){

    // Fatcorial
    // int n , r;
    // cin>>n>>r;

    // cout <<"Answer is "<<nCr(n,r) <<endl;

    // return 0;


    // Couting print
    int n;
    cin>>n;
    printCount(n);


}