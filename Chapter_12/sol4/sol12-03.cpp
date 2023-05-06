#include "Header.h"


int main(void)
{
    Stack st1(5);
    Stack st2 = st1;
    Stack st3(st2);
    st1.Stacks();
    st2.Stacks();
    st3.Stacks();
    cout << st1.isempty();
    cout << st2.isfull();


    return 0;
}

