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
    char *name;
    static int timeToComplete;


    void print()
    {
        cout <<endl;
         cout <<"Name is:" <<this->name <<" , ";
        cout <<"Health is:" <<health <<endl;
         cout <<"Level is:" <<level <<endl;
         cout <<endl;
        
         



    }


    // khud ka ak constructor bna liya
    Hero(){
        cout <<"Constructor is called" <<endl;
        name = new char[100];
    }


    // parameterized constructor
    Hero (int health){
        cout <<"This-----:" <<this <<endl;
        this->health = health;
    }

      Hero (int health,char level){
       this->level = level;
        this->health = health;
    }

    // copy constructor
    Hero(Hero& temp){
        // deep copy
        // char *ch = new char[strlen(temp.name)+1];
        // strcpy(ch,temp.name);
        // this->name = ch;
        cout <<"Copy constructor called" <<endl;
        this->health = temp.health;
        this->level = temp.level;

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

   void setName(char name[]) {
        // strcpy(this->name, name);
    }
    // Destructor
    ~Hero(){
        cout <<"Distructor bhaii told" <<endl;
    }
    static int random(){
        // cout <<timeToComplete <<endl;
        return timeToComplete;
    }
};

int Hero::timeToComplete = 8;

int
main()
{
//    cout << Hero::timeToComplete <<endl;
    cout<<Hero::random() <<endl;

    // Hero a;
    // // recomended nhi karta hai
    // cout <<a.timeToComplete <<endl;




// // destructor start
//         // static type
//         Hero a;

//         // dynamic type
//         Hero *d = new Hero();
    
    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('Y');
    // char name[7] = "Deepak";
    // hero1.setName(name);

    // hero1.print();


    // use default copy constructor
    // Hero hero2(hero1);
    // hero2.print();


    // hero1.name[0] = 'g';
    // hero1.print();

    // hero2.print(); 
    // hero1 = hero2;
    // hero1.print();
    // hero2.print();




    // copy constructor code
    // // object create
    // Hero rakesh(70,'T');
    // rakesh.print();




    // // again new object
    // Hero servesh(rakesh);
    // servesh.print();

    





    // object create
    // Hero ramesh(10);
    // // cout <<"address of Ramesh :" <<&ramesh <<endl;
    // ramesh.print();
    // ramesh.getHealth();


    //   Hero *h = new Hero(17);
    //   h->print();


    // Hero temp(22,'H');
    // temp.print();

    // // object create statically
    // cout <<"Hii" <<endl;
    // Hero ramesh;
    // cout <<"Hello" <<endl;

    // // dynamically
    // Hero *h = new Hero;



    //  static allocation object create
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('R');
    // cout << "Level is :" <<a.level <<endl;
    // cout << "Health id :" <<a.getHealth() <<endl;


   // dynamically allocation object create
    // Hero *b = new Hero;
    // b->setLevel('D');
    // b->setHealth(50);
    // cout <<"Level is :" <<(*b).level <<endl;
    // cout <<"Health is :" <<(*b).getHealth() <<endl;




    // // cretaion of Object
    // Hero ramesh;
    // // size of ramesh jo ki 5 aana chahiye lekin  8 aayi hai kyu....
    // cout <<"Size of Ramesh :" <<sizeof(ramesh) <<endl;
    // cout << "Ramseh Health is :" << ramesh.getHealth() << endl;
    // // use setter
    // ramesh.setHealth(70);
    // ramesh.level = 'A';

    // cout << "Health is:" << ramesh.getHealth() << endl;
    // cout << "Level is :" << ramesh.level << endl;
}
