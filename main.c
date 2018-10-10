#include <stdio.h>
#include <stdlib.h>
void main() {
    int A[10];
    char luaChon = 'a';
    'b';
    int i, n, maxValue, minValue;
    printf(" Nhap gioi han cho mang: ");
    scanf("%d", &n);
    if (n > 10) {
        printf("Toi da la 10 so \n");
        exit(0);
    }

    for (i = 0; i < n; i++) {
        printf("\n Nhap phan tu thu %d: ", i + 1);
        scanf(" %d", &A[i]);
    }
    printf(" Mang A vua nhap la ");
    for (i = 0; i < n; i++) {
        printf("%d", A[i]);
    }
    maxValue = A[0];
    minValue = A[0];
    for (i = 0; i < n; i++) {
        if (maxValue < A[i]) maxValue = A[i];
        if (minValue > A[i]) minValue = A[i];
        printf("Ban muon in ra so nho nhat(a) hay so lon nhat(b) \n");
        scanf("%c", &luaChon);
        switch (luaChon) {
            case 'b':
                printf("Gia tri lon nhat trong mang la %d\n", maxValue);
                break;

            case 'a':
                printf("Gia tri nho nhat trong mang la %d\n", minValue);
                break;
        }

    }
}
