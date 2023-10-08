#include<iostream>
using namespace std;
#define PI 3.14





// this is Global variable never use
// int score = 19;

// default argument
void print(int arr[],int n, int start){
        for(int i = start;i<n;i++){
            cout<<arr[i]<<endl;
        }
}


// Inline function

/*
    inline int getMax(int& a,int& b){
    return (a>b) ? a : b;
}
*/


// 2nd way
/*
    void a(int& i){
   char ch = 'a';
    cout<<ch <<endl;
    cout<<score<<endl;
    // b(i);
}
void b(int& i){
    cout<<i<<endl;
     cout<<score<<endl;
}
*/
int main(){


   /* 
      //1st way
     int a = 9;
    // takes extra storage
    // double pi = 3.14;
    
    double b = PI*a*a;
    cout<<b<<endl;
   */


  
       // 2nd way
       /*
                 int i = 9;
                a(i);
                b(i);
                cout<<i<<endl;
                 cout<<score<<endl;   
    */



//    Inline function

            /*
                int a =1,b=2;
            int ans = 0;

              
            ans = getMax(a,b);
            cout<<ans<<endl;

            a = a+2;
            b = b+2;

            ans = getMax(a,b);
            cout<<ans<<endl;
            */

        //    default argument
        int arr[6] = {1,3,5,6,7,3};
        int size = 6;
        print(arr,size,0);


  
}