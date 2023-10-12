#include <stdio.h>

int main() {
    unsigned int i;
    scanf("%d", &i);
    printf("%d\n", 0x7fffffff + i);
    return 0;
}
