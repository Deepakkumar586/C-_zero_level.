#include <iostream>
using namespace std;


void reverse(char name[],int n){
    int s = 0;
    int e = n -1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }

}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != 0;i++){
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter Your Name:"<<endl;
    cin >>name;
    // name[2] = '\0';


    cout <<"Your name is:";
    cout <<name << endl;
    int length = getLength(name);
   cout <<"Length is" <<length <<endl;
   reverse(name,length);
     cout <<"Your name is:";
    cout <<name << endl;



}