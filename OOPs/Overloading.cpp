#include <iostream>
using namespace std;
class Addition {
public:
    static void add(int a, int b){
        cout << a+b << endl;
    }
    static void add(int a, int b, int c){
        cout << a+b+c << endl;
    }
    static void add(int a, float b){
        cout << a+b;
    }
};
int main() {
    Addition::add(1,2);
    Addition::add(1,2,3);
    Addition::add(1,2.4F);
    return 0;
}
