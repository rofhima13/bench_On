#include <stdio.h>
#include <time.h>

void sum_of_nums(long num) {
    unsigned long long sum = 0;
    for (long i = 0; i <= num; i++) {
        sum += i;
    }
    printf("%llu\n", sum);
}

int main(void) {
    clock_t start, end;
    double elapsed;

    start = clock();
    sum_of_nums(1);
    end = clock();

    elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Elapsed time: %f seconds\n", elapsed);

    return 0;
}
