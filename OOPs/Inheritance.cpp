#include <iostream>
using namespace std;
class Employee { // Parent Class
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void empDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
class SoftwareDeveloper : public Employee{
public:
    string FavProLang;
    SoftwareDeveloper(
            string name, int age, string company, string favProLang) :
            Employee(name, age, company){
        FavProLang = favProLang;
    }
    void job(){
        cout << Name << " develops applications using "
        << FavProLang << endl;
    }
};
class Lecturer : public Employee{
public:
    string Subject;
    Lecturer(
            string name, int age, string company, string sub
            ) :
            Employee(name, age, company){
        Subject = sub;
    }
    void teach(){
        cout << Name << " teaches " << Subject
        << endl;
    }
};
int main() {
    Employee e1 = Employee("Sahana", 29, "Bizotic");
    e1.empDetails();
    SoftwareDeveloper s1 = SoftwareDeveloper("Ramya", 32, "Bizotic", "Java");
    s1.empDetails();
    s1.job();
    Lecturer l1 = Lecturer(
            "Akhilesh", 33, "JIT", "MCES"
            );
    l1.empDetails();
    l1.teach();
    return 0;
}
