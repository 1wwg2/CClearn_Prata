#include "Header.h"


int main(void)
{
    Cow c1;
    c1.ShowCow();
    Cow c2("ddd", "sss", 2.2);
    c2.ShowCow();
    Cow c3 = c2;
    c3.ShowCow();
    Cow c4(c3);
    c4.ShowCow();

    return 0;
}

