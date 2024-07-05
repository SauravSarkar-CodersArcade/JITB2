#include <iostream>
using namespace std;
class JIT {
    double d;
    char c;
    short s;
    int i;

};
int main() {
    JIT obj;
    cout << "Size of the class: "
    << sizeof(obj) << " Bytes"<< endl;
    return 0;
}
