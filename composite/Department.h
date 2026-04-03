#pragma once
#include "OrganizationComponent.h"
#include "Employee.h"

class Department : public OrganizationComponent {
private:
    string name;
    vector<OrganizationComponent*> children;

public:
    Department(string n) : name(n) {}

    void add(OrganizationComponent* comp) {
        children.push_back(comp);
    }

    void display(int indent = 0) override {
        cout << string(indent, ' ')
             << "Department: " << name << endl;

        for (auto c : children) {
            c->display(indent + 2);
        }
    }

    double getBudget() override {
        double total = 0;
        for (auto c : children)
            total += c->getBudget();
        return total;
    }

    int getEmployeeCount() override {
        int total = 0;
        for (auto c : children)
            total += c->getEmployeeCount();
        return total;
    }

    OrganizationComponent* findEmployee(string name) {
        for (auto c : children) {
            Employee* emp = dynamic_cast<Employee*>(c);
            if (emp && emp->getName() == name)
                return emp;

            Department* dep = dynamic_cast<Department*>(c);
            if (dep) {
                auto res = dep->findEmployee(name);
                if (res) return res;
            }
        }
        return nullptr;
    }
};
