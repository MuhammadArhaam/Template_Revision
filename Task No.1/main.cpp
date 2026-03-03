#include "OnlineCourse.h"
#include "OfflineCourse.h"
int main()
{
    OnlineCourse oc(6, 5);
    OfflineCourse ofc(3, 4);
    oc.duration();
    ofc.duration();
    return 0;
}