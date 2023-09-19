#include <iostream>
using namespace std;
int main()
{
    // first way


    // int arr[10] = {2,9,4 };
    // cout << "Address of first memory block:" << arr << endl;
    // cout << "Address of first memory block:" << &arr[0] << endl;
    // cout <<arr[0] <<endl;
    // cout <<"1st  location of array" <<*arr <<endl;
    // cout <<"5th" <<*arr + 1<<endl;
    // cout <<"6th" <<*(arr + 1)<<endl;
    // cout <<"6th" <<*(arr + 1)<<endl;
    // cout <<*arr <<endl; 
    // cout <<(*arr) + 1 <<endl; 
    // cout <<*(arr) + 1 <<endl; 



    /*second way*/
    // int arr[10] = {123,122,41,67};
    // cout <<"2nd Location" <<*(arr + 2) <<endl;
    // cout <<"second Location" <<*(2 + arr) <<endl;


    /*new formula for mcq questions*/
    // int i  = 3;    
    // cout <<"2nd  Location" <<i[arr] <<endl;



    /* difference between array / pointer */

    // In array case 
  /*
    int temp[10];
    cout << sizeof(temp) <<endl;
    cout << "1st :" << sizeof(*temp) <<endl;
    cout  <<"2nd :" << sizeof(&temp) <<endl;
 

    // In pointer case
    int *ptr = &temp[0];
    cout << sizeof(*ptr)<<endl; 
    cout << sizeof(&ptr)<<endl; 
    cout << sizeof(ptr)<<endl;
    */ 


   /* second difference*/
   /*
   int a[20] = {2,3,4,6,7};
   cout <<a<<endl;
   cout <<&a<<endl;
   cout <<&a[0]<<endl;
   cout <<&a[1]<<endl;
   cout <<a[1]<<endl;


//    in pointer case
int *p = &a[0];
cout <<p <<endl; //output address of a
cout<<*p <<endl; // output value of a 
cout <<"------>>>" <<&p <<endl;

*/



/*
// third difference--->symbol table content canot be change in array and in pointer case symbol table content can be changed

int arr[10];


// Error give
// arr = arr +1;


int *ptr = &arr[0];
ptr = ptr + 1;
cout <<"Print the ptr:"<<ptr <<endl; 
*/




/* new topic character Array*/
/* 
int arr[5] ={23,45,67,89,35};
char ch[6] = "abcde";

cout <<arr<<endl;

cout <<ch <<endl;


char *c = &ch[0];
cout <<c <<endl;



char temp = 'z';
char *d = &temp;
cout <<d <<endl;
*/
}