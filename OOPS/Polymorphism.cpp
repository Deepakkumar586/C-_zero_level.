// #include<iostream>
// using namespace std;
// class A {
//     public:
//     void sayhello(){
//         cout <<"Hello Love Babbar" <<endl;
//     }
//     int sayhello(char name){
//         cout <<"Hello Love Babbar" <<endl;
//         return 1;
//     }
//     void sayhello(string name){
//         cout <<"Hello Love Babbar" <<name <<endl;
//     }

// };
// class B{
//     public:
//     int a;
//     int b;
//     public:
//     int add(){
//         return a+b;
//     }
//         void operator+ ( B &obj){
//             // int value1 = this->a;
//             // int value2 = obj.a;
//             // cout << "output" <<value2 - value1 <<endl;

//             cout <<"Deepak Kumar" <<endl;

//         }

//         void operator() (){
//             cout <<"main barcket is here" <<endl;
//         }
// };

// int main(){
//     // A obj;
//     // obj.sayhello();

//         // /operatoroverloading
//         B obj1,obj2;
//         obj1.a = 4;
//         obj2.a = 5;
//         obj1 + obj2;
//         obj1();

// }

//  Run time polymorphism

#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "barking" << endl;
    }

};
 int main()
{
        Dog obj;
        obj.speak();
}
