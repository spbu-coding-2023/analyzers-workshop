#include <stdio.h>

int a[100];
int main() {
    int i;
    scanf("%d", &i);
    scanf("%d", &a[i + 100]); // buffer overrun
    printf("%d\n", a[i + 100]);
    return 0;
}
