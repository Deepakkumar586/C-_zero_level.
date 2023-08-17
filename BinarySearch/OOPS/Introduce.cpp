// #include <iostream>
// using namespace std;

// // outside bhi class ko bna skte hai
// // #include"Hero.cpp"

// class Hero
// {
//     // properties
//     public:
//     int health;

//     char level;

//     void print(){
//         cout <<level <<endl;
//     }
// };

// int main()
// {
//     // creation of Object
//     Hero ramesh;
//     ramesh.health = 70;
//     ramesh.level = 'A';

//     // cout << "Size :" << sizeof(h1) << endl;
//     cout << "Health :" <<ramesh.health << endl;
//     cout << "Level :" <<ramesh.level << endl;
// }

// if class is private then use getter and setter
#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;

    void print()
    {
        cout <<level <<endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }

    int main()
    {
        // cretaion of Object
        Hero ramesh;
        cout << "Ramseh Health is :" <<ramesh.getHealth() <<endl;
        // use setter
        ramesh.setHealth(70);
        ramesh.level = 'A';

        cout <<"Health is:"<<ramesh.getHealth() <<endl;
        cout <<"Level is :"<<ramesh.level <<endl;
    }
};