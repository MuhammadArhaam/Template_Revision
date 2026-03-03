#include <iostream>
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
using namespace std;
int main() 
{
    FullTimeEmployee full(50000);
    PartTimeEmployee part(80, 500);
    cout << "Full Time Salary = " << full.calculateSalary() << endl;
    cout << "Part Time Salary = " << part.calculateSalary() << endl;
    return 0;
}