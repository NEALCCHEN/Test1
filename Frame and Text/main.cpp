#include <iostream>
#include <page.h>
#include <characterstyle.h>
int main()
{

    char c='a';
    Page p(29.7,20.99,true,true,1);
    p.getFrame().insert(c);
    return 0;
}
