/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout << "Class A constructor" << endl;
    }
    A(int a){
        cout << a << " belongs to class A" << endl;
    }
    void print(){
        cout << "This is class A" << endl;
    }
    virtual void print(int num){
        cout << num << " belongs to class A" << endl;
    }
};
class B: public A{
public:
    B(){
        cout << "Class B constructor" << endl;
    }
    B(int a, int b): A(12){
        cout << a+b << " belongs to class B" << endl;
    }
    B(int a, int b, char c){
        cout << a+b << " " << c << " belongs to class B" << endl;
    }
    void print(){
        cout << "This is class B" << endl;
    }
    void print(int num) {
        cout << num << " belongs to class B" << endl;
    }
};
class C: public B{
public:
    void print(int num){
        cout << num << " belongs to class C" << endl;
    }
};

int main()
{
    A *b = new B(3,4);
    return 0;
}
