
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int N = 5;

    printf("type size of array ");
    scanf("%d", &N);

    int array[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {
             
                array[i][j] = 0;
            }
            else if (i < j) {
                
                array[i][j] = 2;
            }
            else {
               
                array[i][j] = 1;
            }
        }
    }

  
    printf("array:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

