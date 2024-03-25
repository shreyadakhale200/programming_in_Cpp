// Employee Payroll System with Abstract Classes:
// Problem Statement: Design an employee payroll system. Create an abstract class
//  Employee with attributes like name and employee ID. Derive concrete classes
// like HourlyEmployee and SalariedEmployee. Define abstract methods for calculating
// pay in the base class and implement them in the derived classes.
#include <iostream>
using namespace std;
class Employee
{
protected:
    int Employeeid = 0;
    string EmployeeName;

public:
    virtual void CalSal() = 0;
    // void CalSal()
    // {
    //     cout << 5000;
    // }
    Employee(int Employeeid, string EmployeeName)
    {
        this->Employeeid = Employeeid;
        this->EmployeeName = EmployeeName;
    }

    Employee()
    {
        Employeeid = 23;
        EmployeeName = "Ashley";
    }
    virtual void display()
    {
        cout << "Employee ID = " << Employeeid << endl;
        cout << "Employee Name = " << EmployeeName << endl;
    }
};

class HourlyEmployee : public Employee
{
protected:
    int HoursWorked = 0;
    int HourlyRate = 0;

public:
    HourlyEmployee(int Employeeid, string EmployeeName, int HoursWorked, int HourlyRate) : Employee(Employeeid, EmployeeName)
    {
        this->HoursWorked = HoursWorked;
        this->HourlyRate = HourlyRate;
    }

    void CalSal()
    {
        int salary = HoursWorked * HourlyRate;
        cout << "Salary Hourly Employee = " << salary << endl;
    }
    void display()
    {
        Employee::display();
        CalSal();
    }
};

class SalariedEmployee : public Employee
{
protected:
    int fixedSalary = 0;
    int incentives = 0;

public:
    SalariedEmployee(int Employeeid, string EmployeeName, int fixedSalary, int incentives) : Employee(Employeeid, EmployeeName)
    {
        this->fixedSalary = fixedSalary;
        this->incentives = incentives;
    }
    void CalSal()
    {
        int salary = incentives + fixedSalary;
        cout << "Salary Employee = " << salary << endl;
    }
    void display()
    {
        Employee::display();
        CalSal();
    }
};

int main()
{
    // virtual keyword is not used here if the child classes are too many we will create
    // child classes using parent class if vitural keyword is notused lets see what will happen
    Employee *hourlyEmp = new HourlyEmployee(100, "Sarah", 20, 2000);
    Employee *SalariedEmp = new SalariedEmployee(300, "Ram", 50000, 30000);
    hourlyEmp->display();
    cout << endl;
    SalariedEmp->display();

    delete hourlyEmp;
    delete SalariedEmp;
}
