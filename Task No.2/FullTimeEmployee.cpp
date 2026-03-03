#include "FullTimeEmployee.h"
FullTimeEmployee::FullTimeEmployee(double salary)
{
    fixedSalary = salary;
}
double FullTimeEmployee::calculateSalary()
{
    return fixedSalary;
}