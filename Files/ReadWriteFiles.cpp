#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile;
    myFile.open(
            "C:\\Users\\Saurav\\CLionProjects\\JITB2CPP\\Files\\JIT.txt", ios::out);
    if (myFile.is_open()){
        myFile << "Hello.\n";
        myFile << "Line 1.\n";
        myFile.close();
    }
    myFile.open(
            "C:\\Users\\Saurav\\CLionProjects\\JITB2CPP\\Files\\JIT.txt", ios::app);
    if (myFile.is_open()){
        myFile << "Hi.\n";
        myFile << "Line 4.\n";
        myFile.close();
    }
    // system("pause>0");
    return 0;
}
