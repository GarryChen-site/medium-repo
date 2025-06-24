#include <stdio.h>

#include "shape.h"
#include "smart_ptr.h"

int main()
{
    smart_ptr<circle> ptr1(new circle());
    printf("use count of pt1 is %ld\n", ptr1.use_count());

    smart_ptr<circle> ptr2;
    printf("use count of ptr2 was %ld\n", ptr2.use_count());
    ptr2 = ptr1; // copy assignment
    printf("use count of ptr2 now is %ld\n", ptr2.use_count());
    if (ptr1)
    {
        puts("ptr1 is not empty");
    }

    smart_ptr<circle> ptr3 = dynamic_pointer_cast<circle>(ptr2);
    printf("use count of ptr3 is %ld\n", ptr3.use_count());
}