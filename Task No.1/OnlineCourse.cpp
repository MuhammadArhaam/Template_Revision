#include "OnlineCourse.h"
OnlineCourse::OnlineCourse(int w, int h)
{
    weeks = w;
    hoursPerWeek = h;
}
void OnlineCourse::duration()
{
    cout << "Online Course Duration = " << weeks * hoursPerWeek << " total hours" << endl;
}