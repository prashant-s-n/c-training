#include <stdio.h>

int add(int *a, int *b) {
    return *a + *b;
}

int main() {
    int r1 = 10;
    int r2 = 20;

    int t = add(&r1,&r2);
    printf("Add is %d", t);
    return 0;
}
