#include <pthread.h>
#include <stdio.h>

static int global = 0;

void *Thread1(void *) {
    global++;
    return NULL;
}

void *Thread2(void *) {
    global--;
    return NULL;
}

int main() {
    pthread_t t[2];
    pthread_create(&t[0], NULL, Thread1, NULL);
    pthread_create(&t[1], NULL, Thread2, NULL);
    pthread_join(t[0], NULL);
    pthread_join(t[1], NULL);
    printf("%d\n", global);
    return 0;
}
