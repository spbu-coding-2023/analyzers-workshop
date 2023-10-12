#include <stdio.h>

int main() {
    int a[100] = {0};
    int i;
    scanf("%d", &i);
    scanf("%d", &a[i + 100]); // buffer overrun
    printf("%d\n", a[i + 100]);
    return 0;
}
