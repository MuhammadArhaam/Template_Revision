#include<iostream>
#include "Employee.h"
using namespace std;
class PartTimeEmployee : public Employee
{
private:
    int hoursWorked;
    double hourlyRate;
public:
    PartTimeEmployee(int hours, double rate);
    double calculateSalary() override;
};