#include <stdio.h>

int main() {
    float lower, step, upper, fahr, celsius;

    lower = 0.0;
    step = 20.0;
    upper = 300.0;
    fahr = lower;

    printf("F\tC\n");

    while(fahr <= upper) {
        celsius = (5 * (fahr-32) / 9);
        printf("%3.0f\t%6.1f\n",fahr, celsius);
        fahr = fahr + step;
    }
}