#include "Course.h"
class OfflineCourse : public Course
{
private:
    int months;
    int hoursPerDay;
public:
    OfflineCourse(int m, int h);
    void duration() override;
};