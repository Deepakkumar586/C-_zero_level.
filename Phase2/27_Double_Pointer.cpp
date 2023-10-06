#include <iostream>
using namespace std;
void update(int **p2){
    // No changes
    // p2 = p2 + 1;
 


    //  kuch change hoga -YEs
    // *p2 = *p2 + 1;

   **p2 = **p2 + 1;
//    kuch change hoga - YEs


}
int main()
{
    int i = 8;
    int* p1 = &i;
    int** p2 = &p1;


    // cout <<"All things are good" <<endl;
    // cout<<"Printing p of content" <<p1 <<endl;
    // cout << "address of p "<< &p2 <<endl;
    // cout <<*p2 <<endl;
    // cout <<*p1<<endl;
    // cout <<i<<endl;
    // cout <<**p2<<endl;


    // cout <<&p2 <<endl;
    // cout <<p2 <<endl;
    // cout  <<p1<<endl;
    // cout  <<*p2<<endl;

    cout <<endl;
    cout <<"before" <<i <<endl;
    cout <<"before" <<p1<<endl;
    cout <<"before" <<p2 <<endl;
    update(p2);
    cout <<"after" <<i <<endl;
    cout <<"after" <<p1 <<endl;
    cout <<"after" <<p2 <<endl;
   
}