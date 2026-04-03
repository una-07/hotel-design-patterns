#include "Department.h"

int main() {
    Employee* e1 = new Employee("Ali", "Developer", 1000);
    Employee* e2 = new Employee("Aruzhan", "Designer", 800);
    Employee* e3 = new Employee("Dias", "Manager", 1500);

    Department* devDept = new Department("Development");
    Department* designDept = new Department("Design");
    Department* company = new Department("Company");

    devDept->add(e1);
    designDept->add(e2);

    company->add(devDept);
    company->add(designDept);
    company->add(e3);

    company->display();

    cout << "\nTotal Budget: " << company->getBudget() << endl;
    cout << "Total Employees: " << company->getEmployeeCount() << endl;

    
    auto emp = company->findEmployee("Ali");
    if (emp) {
        cout << "\nEmployee found:\n";
        emp->display();
    }

    return 0;
}
