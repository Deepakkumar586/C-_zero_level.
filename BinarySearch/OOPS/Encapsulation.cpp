// Encapsulation start

//#include <iostream>
// using namespace std;

// class Student{
//     private:
//     int age;
//     string name;
//     int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
// };
// int main()
// {
//     Student first;
//     cout <<"Sab sahi chal rha hai" <<endl;

// };

// Encapsulation End



// inheritance
#include<iostream>
using namespace std;

class Human {

   private:
    int height;

      public:
    int weight;

    private:
    int age;

    
    int getAge() {
        return this->age;
    }

    void setWeight(int w) {
        this->weight = w;

    }

};

class Male: protected Human {

    public:
    string color;

    void sleep() {
        cout << "Male Sleeping" << endl;
    }

    int getHeight() {
        return this->height;
    }

};



int main() {

    Male m1;
    // cout <<"Height is:" << m1.height << endl;
    cout <<"Height is:" << m1.getHeight() << endl;
    // m1.getHeight();


/*

    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;

    object1.setWeight(84);
    cout << object1.weight << endl;
    object1.sleep();
    */
    

    return 0;
}

