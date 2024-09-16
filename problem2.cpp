//correct code of prroblem2
#include <iostream>
#include <string>
using namespace std;

class MyClass {
private:
    int x; 
    int y; 

public:
    void setX(int val) { x = val; }
    void setY(int val) { y = val; }
    int getX() { return x; }
    int getY() { return y; }
};

int main() {
    MyClass myObj;
    myObj.setX(25);
    myObj.setY(50);

    cout << myObj.getX() << "\n";  
    cout << myObj.getY() << "\n";  

    return 0;
}
