


// inheritance
#include<iostream>
using namspace std;

class Human{
    // properties
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }


};

class Male:: public Human{
    public: