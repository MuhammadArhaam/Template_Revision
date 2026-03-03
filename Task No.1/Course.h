#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
class Course {
public:
    virtual void duration() = 0;
    virtual ~Course() {}
};
#endif