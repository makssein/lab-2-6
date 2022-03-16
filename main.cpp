#include <iostream>
#include <list>

void quicksort(int a, int b, int* x) {
    if (a >= b) {
        return;
    }
    int m, k, l, r;
    m = rand() % (b - a + 1) + a;
    k = x[m];
    l = a - 1;
    r = b + 1;
    while (1) {
        do {
            l = l + 1;
        } while (x[l] < k);

        do {
            r = r - 1;
        } while (x[r] > k);
        if (l >= r)
            break;

        std::swap(x[l], x[r]);
    }
    r = l;
    l = l - 1;
    quicksort(a, l, x);
    quicksort(r, b, x);
}

int main() {
    srand(time(0));
    





    return 0;
}
