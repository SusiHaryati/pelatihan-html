#include <stdio.h>
#include <conio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n) {
    int i, j;
    char temp[100];
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

void main() {
    
    char data[4][100];
    int n = 4;
    int i;

    for (i = 0; i < n; i++) {
        printf("input %d : ", i+1);
        gets(data[i]);
    }
    printf("\n");

    printf("Kata-kata sebelum di-sort: \n");
    for (i = 0; i <= n; i++) {
        printf("%s \n", data[i]);
    }

    bubbleSort(data, n);
    printf("\n\n\n");

    printf("Kata-kata setelah di-sort: \n");
    for (i = 0; i <= n; i++) {
        printf("%s \n", data[i]);
    }
    printf("\n");

    getch();
}