#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
int main() {
    float f;

    for(f = UPPER; f >= LOWER; f-=STEP) {
        printf("%3.0f\t%6.1f\n", f, ((5.0/9.0) * (f-32)));
    }
}