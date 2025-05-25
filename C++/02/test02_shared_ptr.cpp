#include <stdio.h>
#include "smart_ptr.h"
#include "shape.h"

int main() {
    smart_ptr<circle> ptr1 (new circle());
    printf("ptr1 use count: %ld\n", ptr1.use_count());
    smart_ptr<circle> ptr2;
    printf("ptr2 use count: %ld\n", ptr2.use_count());
    ptr2 = ptr1;  // copy assignment
    printf("ptr2 now is %ld\n", ptr2.use_count());
    if(ptr1) {
        puts("ptr1 is not null");
    }
    smart_ptr<circle> ptr3 = dynamic_pointer_cast<circle>(ptr2);
    printf("ptr3 use count: %ld\n", ptr3.use_count());
}