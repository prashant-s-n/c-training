#include <stdio.h>


typedef struct {
    int width;
    int height;
} rectangle;

int findArea(rectangle *rect) {
    return rect->width * rect->height;
}

int main() {
    rectangle r;

    r.width = 10;
    r.height = 40;

    int area = findArea(&r);
    printf("Area of the rectange is %d ", area);

    return 0;
}
