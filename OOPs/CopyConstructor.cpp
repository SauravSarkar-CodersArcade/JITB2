#include <iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    MyClass(){
        cout << "Default Constructor" << endl;
    }
    MyClass(int value) : data(value) {
        cout << "Parameterised Constructor" << endl;
    }
    MyClass(MyClass& other) : data(other.data){
        cout << "Copy Constructor" << endl;
    }
    void display(){
        cout << "Data: " << data << endl;
    }
};
int main() {
    MyClass o1;
    MyClass o2(12);
    MyClass o3 = o2;
    MyClass o4(o3);
    o1.display();
    o2.display();
    o3.display();
    o4.display();
    return 0;
}
