#include "Course.h"
class OnlineCourse : public Course
{
private:
    int weeks;
    int hoursPerWeek;
public:
    OnlineCourse(int w, int h);
    void duration() override;
};