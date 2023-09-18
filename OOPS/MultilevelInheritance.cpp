#include <iostream>
using namespace std;


class Animal {
        public:
        int age;
        int weight;

        public:
        void speak(){
            cout <<"Speaking" <<endl;
        }
};

class Dog: public Animal{
    
};

class GermenShepher : public Dog{

};

int main()
{

   GermenShepher b;
   b.speak();
   cout <<b.age <<endl;

}