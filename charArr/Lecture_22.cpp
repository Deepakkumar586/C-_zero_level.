#include <iostream>
using namespace std;

// char toLower(char ch){
//     if(ch>='a' && ch <='z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }


// bool checkPalindrom(char a[] ,int n){
//     int s = 0;
//     int e = n-1;
//     while(s<=e){
//         // if(a[s] != a[e]){
//             if(toLower(a[s] )!= toLower(a[e])){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }


// void reverse(char name[],int n){
//     int s = 0;
//     int e = n -1;
//     while(s<e){
//         swap(name[s],name[e]);
//         s++;
//         e--;
//     }

// }

// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != 0;i++){
//         count++;
//     }
//     return count;
// }




// maximum accuring character
char getMaxOccurCharacter(string s){
    int arr[26] = {0};


    // create array of count of characters
    for(int i = 0; i<s.length();i++){
        char ch = s[i];
        // lowercase
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch-'a';
        }
        else{
            // uppercase
            number = ch - 'A';
        }
        arr[number]++;

    }
    int maxi = -1,ans = 0;
    for(int i= 0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
}
int main()
{
    // char name[20];
    // cout << "Enter Your Name:"<<endl;
    // cin >>name;
    // name[2] = '\0';


//     cout <<"Your name is:";
//     cout <<name << endl;
//     int length = getLength(name);
//    cout <<"Length is" <<length <<endl;
//    reverse(name,length);
//      cout <<"Your name is:";
//     cout <<name << endl;

//     cout <<"palindrom" <<checkPalindrom(name,length) <<endl;


//     cout <<"Character specified:"<<toLower('b') <<endl;
//     cout <<"Big Character:"<<toLower('V') <<endl;



        string s;
        cin>>s;
        cout<<getMaxOccurCharacter(s) <<endl;
        



}