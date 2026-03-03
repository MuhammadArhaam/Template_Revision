#include "OfflineCourse.h"
OfflineCourse::OfflineCourse(int m, int h)
{
    months = m;
    hoursPerDay = h;
}
void OfflineCourse::duration() 
{
    cout << "Offline Course Duration = " << months * 30 * hoursPerDay << " total hours" << endl;
}