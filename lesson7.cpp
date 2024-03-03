/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

class CHocSinh{
private:
    string id;
public:
    void Nhap(){
        getline(cin,this->id);
        cout << "ID has been typed in\n";
    }
    void Xuat(){
        cout << id;
    }
};

class Number{
private:
    int value;
public:
    friend ostream& operator<<(ostream&,Number&);
    friend istream& operator>>(istream&,Number&);
    
    Number operator+(Number&);
    Number& operator++(); //prefix increment
    Number&  operator++(int);
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

ostream& operator<<(ostream& COUT, Number& a){
    COUT << "kq: " << a.value << endl;
    return COUT;
}
istream& operator>>(istream& CIN, Number& a){
    CIN >> a.value;
    return CIN;
}
Number Number::operator+(Number& x){
    Number temp;
    temp.value = value + x.value;
    cout << value << " " << x.value << endl;
    return temp;
}
Number& Number::operator++(){
    value++;
    return *this;
}
Number& Number::operator++(int i){
    if(i == 0){
        value++;
    }else{
        value += i;
    }
    return *this;
}

int main()
{
    A a; // Default Constructor will be called
    A b(3,4); // Constructor that has parameter
    A d = b; // Copy Constructor
    // cout << b;
    // cout << d;
    
    // CHocSinh a1, b1;
    // a1.Nhap();
    // b1 = a1;
    // b1.Xuat();
    
    Number x, y, kq;
    cin >> x >> y;
    kq = x + y;
    ++(++x); //prefix increment
    (y++)++; //postfix increment
    cout << kq;
    cout << x << y;
    
    return 0;
}
