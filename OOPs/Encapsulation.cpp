#include <iostream>
using namespace std;
class Employee {
private:
    string Name;
    int Age;
    string Company;
public:
    // Setters
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
    // Getters
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    string getCompany(){
        return Company;
    }
};
int main() {
    Employee e1;
    // Setters
    e1.setName("Anil");
    e1.setAge(23);
    e1.setCompany("L&T");
    // Getters
    cout << e1.getName() << endl;
    cout << e1.getCompany() << endl;
    cout << e1.getAge() << endl;
    return 0;
}
