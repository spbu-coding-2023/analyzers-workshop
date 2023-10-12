int *f() {
    int i = 42;
    int *p = &i;
    return p;
}
int g(int *p) {
    return *p;
}
int main() {
    if (g(f()) == 42)
        return 0;
    else
        return 1;
}

