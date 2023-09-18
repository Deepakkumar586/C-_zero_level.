#include <iostream>
using  namespace std;

bool isPresent(int arr[][4],int target,int n, int m){
            for(int i =0; i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
};


// row wise sum
void sumPrint(int arr[][3],int row ,int col){
    cout<<"Printing sum" <<endl;
    for(int row = 0;row<3;row++){
        int sum = 0;
        for(int col = 0;col<3;col++){
            sum = sum + arr[row][col];
        }
        cout <<sum <<" " <<endl; 
    }
}

// column wise sum
void sumPrintCol(int arr[][3],int row ,int col){
    cout<<"Printing sum" <<endl;
    for(int col = 0;col<3;col++){
        int sum = 0;
        for(int row = 0;row<3;row++){
            sum = sum + arr[row][col];
        }
        cout <<sum <<" " <<endl;
    }
}

// largest sum
int largestRowSum(int arr[][3],int row,int col){
    int maxi = 0;
    int rowIndex = -1;
    for(int row = 0;row<3;row++){
        int sum = 0;
        for(int col = 0;col<3;col++){
            sum = sum + arr[row][col];
        }
        if(sum > maxi){

            maxi = sum;
            rowIndex = row;
        }
    }
    cout <<"The maximum sum is :" <<maxi <<endl;
    return rowIndex;
}
int main()
{
    // create 2-D array
    int arr[3][3];
    
    //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

        cout <<"Enter the elements" <<endl;
    //taking input - row wise
    for(int i =0; i<3;i++){
        for(int j = 0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    // print
    // for(int i = 0; i<3;i++){
    //     for(int j = 0;j<4;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout <<"Enter the element to search" <<endl;
    // int target;
    // cin >> target;
    // if(isPresent(arr,target,3,4)){
    //     cout <<"Element found" <<endl;
    // }
    // else{
    //     cout <<"Not Found" <<endl;
    // }


    // sumPrint(arr,3,3);
    // sumPrintCol(arr,3,3);
    int ansIndex = largestRowSum(arr,3,3);
    cout <<"Max row is Index" <<ansIndex <<endl;
    return 0;
    
}