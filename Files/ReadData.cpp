#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile;
    myFile.open(
            "C:\\Users\\Saurav\\CLionProjects\\JITB2CPP\\Files\\JIT.txt", ios::in);
    if (myFile.is_open()){
        string line;
        while (getline(myFile, line)){
            cout << line << endl;
        }
        myFile.close();
    }
    return 0;
}
