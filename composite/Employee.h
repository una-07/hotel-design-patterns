#pragma once
#include "OrganizationComponent.h"

class Employee : public OrganizationComponent {
private:
    string name;
    string position;
    double salary;

public:
    Employee(string n, string p, double s)
        : name(n), position(p), salary(s) {}

    void display(int indent = 0) override {
        cout << string(indent, ' ')
             << "Employee: " << name
             << " (" << position << "), Salary: " << salary << endl;
    }

    double getBudget() override {
        return salary;
    }

    int getEmployeeCount() override {
        return 1;
    }

    void setSalary(double s) {
        salary = s;
    }

    string getName() {
        return name;
    }
};
