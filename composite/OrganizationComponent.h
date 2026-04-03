#pragma once
#include <iostream>
#include <vector>
using namespace std;

class OrganizationComponent {
public:
    virtual void display(int indent = 0) = 0;
    virtual double getBudget() = 0;
    virtual int getEmployeeCount() = 0;
    virtual ~OrganizationComponent() {}
};
