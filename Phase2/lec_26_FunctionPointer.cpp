#include <iostream>
using namespace std;

void print(int *ptr){
    cout <<*ptr <<endl;
}
void update(int *ptr){
    // address  changed
    ptr = ptr +1;
    cout <<"inside" <<ptr <<endl;
    //value changed  
    // *ptr = *ptr + 1;
    // cout <<"inside "<<*ptr<<endl;


}
  
int getSumArrray(int arr[],int n){

    cout <<endl <<"size of:" <<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];

    }
    return sum;
}
int getSumPointer(int *arr,int n){

    cout <<endl <<"size of:" <<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];

    }
    return sum;
}
int main()
{
    /*
    int num = 9;
    int *ptr = &num;
    print(ptr);

    cout <<"Before" <<*ptr <<endl;
    update(ptr);
    cout <<"after" <<*ptr <<endl;
    */


    /* Array case*/
    // int arr[5] = {23,34,56,7,5,67};
    // cout <<"sum is" <<getSumArray(arr,5) <<endl;



    /*Pointer case*/
    int arr[6] = {23,34,56,3,4,5};
    cout <<"Sum is last 3 array of location" <<getSumPointer(arr+3,3)<<endl;


}