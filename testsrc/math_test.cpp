#include "math.hpp"

#include <stdio.h>

using namespace math;

int main()
{
    vector2i v1, v2, sum;
    v1 = vector2i(3, 5);
    v2 = vector2i(1, 2);
    sum = v1 + v2;

    printf("v1: (%d, %d)\n", v1.x, v1.y);
    printf("v2: (%d, %d)\n", v2.x, v2.y);
    printf("sum: (%d, %d)\n", sum.x, sum.y);

    return 0;
}
