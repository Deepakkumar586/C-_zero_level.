#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter the size of array"<<endl;
    // cin>>n;


    // int** arr = new int*[n];
    // for(int i = 0;i<n;i++){
    //     arr[i]= new int[n];
    // }
    // // creation done


    // // taking input
    // for(int i =0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }


    // // taking outpu
    // cout<<endl;
    //  for(int i =0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



    // second way
     int row;
     cin>>row;
     int col;
     cin>>col;
    

    
    int** arr = new int*[row];
    // allocation
    for(int i = 0;i<row;i++){
        arr[i]= new int[col];
    }
    // creation done


    // taking input
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>arr[i][j];
        }
    }


    // taking output
    cout<<endl;
     for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // releasing memory
    /*
         for(int i = 0;i<row;i++){
        delete []arr[i];
    }
    */

        // delete []arr;

}