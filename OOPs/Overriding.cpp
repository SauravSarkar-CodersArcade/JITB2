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
    virtual void work(){
        cout <<
        Name << " checks emails, creates reports, attends meetings, etc." << endl;
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
    void work(){
        cout << Name << " fixes bugs & tests apps." << endl;
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
    void work(){
        cout << Name << " provides education." << endl;
    }
};
int main() {
    Employee e1 = Employee("Sahana", 29, "Bizotic");
    e1.empDetails();
    e1.work();
    SoftwareDeveloper s1 = SoftwareDeveloper("Ramya", 32, "Bizotic", "Java");
    s1.empDetails();
    s1.job();
    s1.work();
    Lecturer l1 = Lecturer(
            "Akhilesh", 33, "JIT", "MCES"
    );
    l1.empDetails();
    l1.teach();
    l1.work();
    Employee * s = &s1;
    Employee * l = &l1;
    s->work();
    l->work();

    return 0;
}
