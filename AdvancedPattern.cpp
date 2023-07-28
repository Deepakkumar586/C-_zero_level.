#include<iostream>
using namespace std;
int main() {
    // int n;
    // cin>>n;
    // int row = 1;
    // while(row<=n){
    //     // print space first triangle
    //     int space = n - row;
    //     while(space){
    //         cout<< " ";
    //         space = space-1;
    //     }
    //     // print second triangle
    //     int col = 1;
    //     while(col<=row){
    //         cout<<col;
    //         col = col +1;
    //     }




    //     // print third Triangle
    //     int start = row - 1;
    //     while(start){
    //         cout<<start;
    //         start = start - 1;
    //     }


    //      cout<<endl;
    // row = row + 1;


    // }



    int n;
    cin>>n;
     int row=1;
  while(row<=n){
    // first triangle
    int col=1;
    int value = n - row + 1;
    while(col<=value){
      cout<<col;
      col++;
    }

    // star
    int start = 2 * (row - 1);
    while(start){
      cout<<"*";
      start--;
    }

    // second triangle
    int count = n - row + 1;
     while(count){
       cout<<count;
       count--;
     }
    
    cout<<endl;
    row++;
  }
}

   

