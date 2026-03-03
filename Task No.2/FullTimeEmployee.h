#include<iostream>
#include "Employee.h"
using namespace std;
class FullTimeEmployee : public Employee
{
private:
    double fixedSalary;
public:
    FullTimeEmployee(double salary);
    double calculateSalary() override;
};