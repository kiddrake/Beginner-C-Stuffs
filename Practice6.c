#include <stdio.h>
#include <stdlib.h>

int squareDivisor(int num) {
    
    int solution = -1;
    int i = 2;

    do {
        if (num % (i * i) == 0) {
            solution = i * i;
        }
        i++;
    } while (i * i <= num);

    return solution;
}

int main()
{
    int seed;
    int numbers[15];
    int i;
    int v;
    
    printf("Enter seed value -> ");
    scanf_s("%d", &seed);

    srand(seed);

    for (i = 0; i < 15; i++) {
        numbers[i] = rand() % 1000000 + 1;
    }

    for (i = 14; i >= 0; i--) {
        v = squareDivisor(numbers[i]);
        if (v != -1) {
            printf("\nIndex: %d Value - %d  Max Square - %d", i, numbers[i], v);
        }
    }

    return(0);
}