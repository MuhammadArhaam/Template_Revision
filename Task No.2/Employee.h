#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee 
{
public:
    virtual double calculateSalary() = 0;
    virtual ~Employee() {}
};
#endif