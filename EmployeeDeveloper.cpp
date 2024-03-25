// Employee Inheritance:
// Problem Statement: Build a system for managing employees.
// Create a base class Employee with attributes such as name, employee ID, and salary.
//  Then, derive classes like Manager and Developer, each with its own attributes
// and methods. Implement a common method, like calculate_salary(), in the base class.

#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int employeeid;
    int salary;

public:
    virtual int CalSal()
    {
        salary = 25000;
        return salary;
    }

    Employee()
    {
        name = "Sarah";
        employeeid = 100;
        salary = 23000;
    }

    Employee(string name, int employeeid, int salary)
    {
        this->name = name;
        this->employeeid = employeeid;
        this->salary = salary;
    }

    virtual void display()
    {
        cout << "Employee Name = " << name << endl;
        cout << "Employee Employee ID = " << employeeid << endl;
        cout << "Employee Salary = " << salary << endl;
    }
};

class Manager : public Employee
{
    int incentives;
    string deptname;

public:
    Manager()
    {
        incentives = 23000;
        deptname = "HR";
    }

    Manager(string name, int employeeid, int salary, int incentives, string deptname) : Employee(name, employeeid, salary)
    {
        this->incentives = incentives;
        this->deptname = deptname;
    }

    int CalSal()
    {
        salary = salary + incentives;
        return salary;
    }

    void display()
    {
        Employee::display();
        cout << "Manager Incentives = " << incentives << endl;
        cout << "Manager Department = " << deptname << endl;
        int NetSalary = CalSal();
        cout << "Manager Net Salary = " << NetSalary << endl;
    }
};
class Developer : public Employee
{
private:
    int bonus;
    string programmingLanguage;

public:
    Developer()
    {
        bonus = 50000;
        programmingLanguage = "C++";
    }

    Developer(string name, int employeeId, int salary, int bonus, string programmingLanguage)
        : Employee(name, employeeId, salary)
    {
        this->bonus = bonus;
        this->programmingLanguage = programmingLanguage;
    }

    int CalSal()
    {
        salary = salary + bonus;
        return salary;
    }

    void display()
    {
        Employee::display();
        cout << "Developer Bonus: $" << bonus << endl;
        cout << "Developer Programming Language: " << programmingLanguage << endl;
        int totalSalary = CalSal();
        cout << "Developer Total Salary: $" << totalSalary << endl;
    }
};

int main()
{
    Employee e;
    // e.display();

    Manager m("Akshay", 200, 40000, 50000, "IT");
    // m.display();

    Developer d("Rahul", 300, 60000, 70000, "Java");
    // d.display();

    Employee *company[2];
    company[0] = &m;
    company[1] = &d;
    for (int i = 0; i < 2; i++)
    {
        company[i]->display();
        cout << endl;
    }
}