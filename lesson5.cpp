/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Lesson 5: Contructor and Destructor*/
#include <iostream>
using namespace std;

class A{
private:
    int x, y;
public:
    //Default Contructor
    A(){
        x = 0;
        y = 0;
    }
    //Copy Constructor
    // A(const A& a){
    //     this->x = a.x;
    //     this->y = a.y;
    // }
    //Constructor that has parameter
    A(int x, int y){
        A::x = x; //this->x = x
        A::y = y; //this->y = y 
    }
    friend ostream& operator<<(ostream& COUT, A& a); // friend function
    friend void print(A); // friend global function
    friend void change(A&);
};

ostream& operator<<(ostream& COUT, A& a){
    COUT << a.x << " " << a.y << endl;
    return COUT;
}
void print(A a){
    cout << a.x << " " << a.y << endl;
}
void change(A& a){
    a.x = 0;
    a.y = 0;
}
int main()
{
    A a; // Default Constructor will be called
    A b(3,4); // Constructor that has parameter
    A d = b; // Copy Constructor
    cout << b;
    cout << d;
    
    
    return 0;
}
