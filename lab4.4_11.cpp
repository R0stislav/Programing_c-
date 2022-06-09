#include <iostream>

using namespace std;

int main()
{
    int n, i, j, matrix[40][40];
    
    printf("Введіть розмірність матриці-- >");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = 100 - ((double)rand() / RAND_MAX) * 200;
           
            printf("matrix[%d][%d] = %d\t", i, j, matrix[i][j]);
            
        printf("\n");
        
    for (i = 0; ++i < n;) {
        for (j = 0; j < i;) {
            matrix[i][j] += matrix[j][i];
            matrix[j][i] = matrix[i][j] - matrix[j][i];
            matrix[i][j] -= matrix[j++][i];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("matrix[%d][%d] = %d\t", i, j, matrix[i][j]);
        printf("\n");
    }
    return 0;
    
}

