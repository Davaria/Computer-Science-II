#include <iostream>
#include <vector>
using namespace std;

class A
{
    // int *ptr;
    int i, *p;
public:
    // Constructor
    A(int x) {
        this->i = x;
        p = new int(i);
    }

    //Constructor copia
    A(const A &a) : i(a.i), p(new int(*a.p)) {}

    ~A() {
        delete p;
    }
    // Move constructor
    A(A &&obj)
    {
        // Simplemente cambiara los recursos
        // sin crear una copia
        cout << "Calling Move constructor\n";
        this->i = obj.i;
        this->p = obj.p;
        obj.i = 0;
        obj.p = nullptr;
    }
    // sobrecarga de operador =
    A& operator =(A && other) {
        cout << "Sobrecarga de operator = \n";
        this->i = other.i;
        this->p = other.p;
        other.i = 0;
        other.p = nullptr;
        return *this;
    }

    // operador de asignación de movimiento
    A& operator =(const A & other) {
        cout << "Calling Operator  Move constructor\n";

        this->i = other.i;
        this->p = other.p;
         return *this;
    }

};

int main()
{
    A a1(10);
    A a2(20);
    // a1 = a2;
    A a3(a1);

    return 0;
}