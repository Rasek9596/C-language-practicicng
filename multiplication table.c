#include<stdio.h>

int main()
{
    int i, j, k, sum;

    for(i = 1; i <= 20; i = i + 1){
        printf("the Multiplication-table for %d\n", i);

        for(j = 1; j <= 10; j = j + 1){
            k = 0;
            sum = 1;

            while(sum <= j){
                k += i;
                sum++;
            }

            printf("%d X %d = %d\n", i, j, k);
        }
    }
    return 0;
}