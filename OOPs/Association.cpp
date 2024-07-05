#include <iostream>
using namespace std;
class Payment {
public:
    double admFees;
    double regFees;
    double balAmt;
    Payment(double aFees, double rFees, double bAmt){
        admFees = aFees;
        regFees = rFees;
        balAmt = bAmt;
    }
};
class Information {
public:
    char blockNo;
    int floorNo;
    int roomNo;
    int bedNo;
    Information(char bNo, int fNo, int rNo, int bdNo){
        blockNo = bNo;
        floorNo = fNo;
        roomNo = rNo;
        bedNo = bdNo;
    }
};
class Patient {
public:
    string patientName;
    int patientAge;
    string disease;
    int dateOfArrival;
    Information info;
    Payment pay;
    Patient(string name, int age, string d, int doa,
            Information& i, Payment& p) :
            info(i), pay(p) {
        patientName = name;
        patientAge = age;
        disease = d;
        dateOfArrival = doa;
        info = i;
        pay = p;
    }
    void patientDetails(){
        cout << "The patient details are: " << endl;
        cout << "Name: "<< patientName << endl;
        cout << "Age: "<< patientAge << endl;
        cout << "Disease: "<< disease << endl;
        cout << "DateOfArrival "<< dateOfArrival << endl;
        cout << "Block Number "<< info.blockNo<< endl;
        cout << "Floor Number: "<< info.floorNo<<endl;
        cout << "Room Number: "<< info.roomNo << endl;
        cout << "Bed Number: "<< info.bedNo << endl;
        cout << "Admission Fees: "<< pay.admFees<< endl;
        cout << "Registration Fees: "<< pay.regFees<<endl;
        cout << "Balance Amount: "<< pay.balAmt << endl;
    }
};
int main() {
    Information info =
            Information('B', 2, 201, 3);
    Payment pay =
            Payment(20000, 5000, 10000);
    Patient patient =
            Patient("ABC", 30, "Covid", 20,
                    info, pay);
    patient.patientDetails();
    return 0;
}
