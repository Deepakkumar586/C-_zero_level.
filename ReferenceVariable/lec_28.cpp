#include<iostream>
using namespace std;

// bad practice
/*
int& func(int a){
    int num = a;
    int &ans = num;
    return num;

}
*/


// pass by value
void update1(int n){
    // create a copy
    n = n+1;
    
}

// refernce varibale
void update2(int& n){
    // create a copy
    n = n+1;
}


// Dynamic
int getSum(int *arr,int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum  = sum+arr[i];
    }
    return sum;
}
int main(){
    /*
    int i = 4;
    // create a refrence variable
    int &j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    */

/*
   int  n = 9;
   cout<<"Before :"<<n<<endl;
   update2(n);
   cout<<"After :"<<n<<endl;
   */

            /*
        // bad practice
        func(n);
        */



      /*
       int n;
       cin>>n;
       int arr[n];
       cout<<n<<endl;
       */

        
        /*
        char ch = 'q';
        cout<< sizeof(ch)<<endl;
        char *c = &ch;
        cout<<sizeof(c);
        */


    //Dynamic memory Allocation
    int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;

    // variable size array
    int *arr = new int[n];

    // takes input in array
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans = getSum(arr,n);
    cout<<"Ans is : "<<ans<<endl;

    // case : 1 Static 
    // while(true){
    //     int i = 9;
    //     cout <<i<<endl;
    // }


        //case :2  Dynamic 
    // while(true){
    //     int *a = new int;
    // }
}