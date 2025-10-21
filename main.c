#include <stdio.h>
#include <stdlib.h>


int minimum_path(int** t, int n, int* len) {
    if (n == 0) {
        return 0;
    }
    int min1, min2;
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < len[i]; j++) {
            min1 = t[i + 1][j];
            min2 = t[i + 1][j + 1];
            if(min1 < min2) {
                t[i][j] += min1;
            }
            else {
                t[i][j] += min2;
            }
        }
    }
    return t[0][0];
}

int main() {
    // Тест 1
    int n1 = 4;
    int len1[] = {1, 2, 3, 4};
    int row1_1[] = {2};
    int row2_1[] = {3, 4};
    int row3_1[] = {6, 5, 7};
    int row4_1[] = {4, 1, 8, 3};
    int* t1[] = {row1_1, row2_1, row3_1, row4_1};
    int res1 = minimum_path(t1, n1, len1);
    printf("Результат 1: %d\n", res1);
    
    // Тест 2
    int n2 = 4;
    int len2[] = {1, 2, 3, 4};
    int row1_2[] = {-1};
    int row2_2[] = {2, 3};
    int row3_2[] = {1, -1, -3};
    int row4_2[] = {4, 2, 1, 3};
    int* t2[] = {row1_2, row2_2, row3_2, row4_2};
    int res2 = minimum_path(t2, n2, len2);
    printf("Результат 2: %d\n", res2);
    
    // Тест 3
    int n3 = 5;
    int len3[] = {1, 2, 3, 4, 5};
    int row1_3[] = {-1};
    int row2_3[] = {4, 3};
    int row3_3[] = {1, 8, 7};
    int row4_3[] = {4, 5, 1, 3};
    int row5_3[] = {4, 5, 2, 3, -4};
    int* t3[] = {row1_3, row2_3, row3_3, row4_3, row5_3};
    int res3 = minimum_path(t3, n3, len3);
    printf("Результат 3: %d\n", res3);
    
    // Тест 4
    int n4 = 6;
    int len4[] = {1, 2, 3, 4, 5, 6};
    int row1_4[] = {-1};
    int row2_4[] = {4, 3};
    int row3_4[] = {1, 5, 7};
    int row4_4[] = {7, 5, 1, 3};
    int row5_4[] = {4, 3, 2, 7, -4};
    int row6_4[] = {1, 8, -2, 5, -3};
    int* t4[] = {row1_4, row2_4, row3_4, row4_4, row5_4, row6_4};
    int res4 = minimum_path(t4, n4, len4);
    printf("Результат 4: %d\n", res4);
    
    return 0;
}