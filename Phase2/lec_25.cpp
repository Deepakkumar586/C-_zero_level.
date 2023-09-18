#include <iostream>
using namespace std;

int main(){


/* first way*/

//     int num = 5;
//    cout << num <<endl;


//     // address of operator &
//     cout <<"Address of num is" <<&num <<endl;

//     int *ptr = &num;
//     // value print hoga
//     //  cout <<"Value is :" <<*ptr<<endl;
//     // address print hoga
//     cout <<"Address is :" <<ptr<<endl;

//     double d = 4.3;
//     double *ptr2 = &d;
//      cout <<" Value is :" <<*ptr2<<endl;

//     //  size check
//     cout << "size of integer"<<sizeof(num)<<endl;
//     cout <<"Size of pointer is" <<sizeof(ptr)<<endl;



/* second way*/
// pointer to int is created , and  pointing to some garbage address
//    int *p; //bad practice
//       int *p = 0;

//    cout <<*p<<endl;



/* third way way*/
/*
int i = 9;

  int *q  = &i;
  cout<<q<<endl;
  cout <<*q <<endl;
    int *p = 0;
    p = &i;

    cout <<p <<endl;
    cout <<*p <<endl;*/



/* fourth way*/
// int num = 5;
// int a = num;
// a++;
// cout <<num <<endl; //  o/p = 5 
// cout <<a<<endl; //  o/p = 6

// int *p  = &num;

// cout <<"Before :" <<num <<endl;
// (*p)++;
// cout <<"After: " <<num <<endl;

  
// copying a   pointer
// int *q = p;
// cout <<p << " - " <<q <<endl;
// cout <<*p << "- " <<*q <<endl;



// important concept
int i = 9;
int *n = &i;
// cout <<(*n)++ <<endl;


// n = n+1;
// 4byte = 100 add + 4 byte == 104 print hoga
// cout <<"Next interger is :" <<n <<endl;


*n = *n + 1;
cout <<"Value is: " <<*n <<endl;
cout <<"After:"<<i <<endl;


      
  



}