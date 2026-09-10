#include <stdio.h>

union myunion {
    int i;
    float f;
};

int main() {
    union myunion u1 = {.i = 10};
    u1.f = 3.14;
    
    printf("i: %d\n", u1.i);
    printf("f: %.2f\n", u1.f);
    
    return 0;
}
