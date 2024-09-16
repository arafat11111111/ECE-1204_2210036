//correct code of problem3
#include <iostream>
using namespace std;

class A {
private:
    int value;

public:
    A(int v) : value(v) {}  

   
    friend class B;
};

class B {
public:
    void showValue(A& a) {
        cout << "Value: " << a.value << endl;  
    }
};

int main() {
    A objA(42); 
    B objB;     

    objB.showValue(objA); 

    return 0;
}
