#include <stdio.h>

int main()
{
int a = 10;
int b = 5;
int c = 33;

if (a > b) {
    if (b < c) {
    printf("%d, %d, %d",  b, c, a);
    } else {
    printf("%d, %d, %d", b, c, a);
    }
} else {
    if (a > c) {
    printf("%d, %d, %d", c, a, b);
    }else {
    printf("%d, %d, %d", a, b, c);
    }
}

}