#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
    SetConsoleOutputCP(1251);

    int r, X[100], Y[100];
    printf("Введіть розмірність масивів r<=100 --> "); scanf_s("%d", &r); srand((unsigned)time(NULL));
    for (int i = 0; i < r; i++) {
         X[i] = 100 - ((double)rand() / RAND_MAX) * 200; Y[i] = 100 - ((double)rand() / RAND_MAX) * 200;
         
            
    }
     printf("\nМасиви до обміну\n"); printf("No\tX[]\t\tY[]\n");
     for (int i = 0; i < r; i++) {
         printf("%d\t%d\t\t%d\n", i, X[i], Y[i]); 
        
    }
     for (int i = 0; i < r; i++) {
         X[i] = X[i] + Y[r - i - 1]; Y[r - i - 1] = X[i] - Y[r - i - 1]; X[i] = X[i] - Y[r - i - 1]; 
        
    }
     printf("\nМасиви після обміну\n"); printf("No\tX[]\t\tY[]\n");
     for (int i = 0; i < r; i++) {
         printf("%d\t%d\t\t%d\n", i, X[i], Y[i]); 
        
    }



}

