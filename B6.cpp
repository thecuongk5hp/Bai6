#include <stdio.h>

void gopMang(int arr1[], int n, int arr2[], int m, int result[], int *k) {
    *k = 0;
    for (int i = 0; i < n; i++) {
        result[(*k)++] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        result[(*k)++] = arr2[i];
    }
}

int main() {
    int n, m;
    printf("Nhap so phan tu cua mang 1 (0 <= n <= 1000): ");
    scanf("%d", &n);

    if (n < 0 || n > 1000) {
        printf("So phan tu mang 1 khong hop le!\n");
        return 1;
    }

    int arr1[n];
    printf("Nhap cac phan tu cua mang 1: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Nhap so phan tu cua mang 2 (0 <= m <= 1000): ");
    scanf("%d", &m);

    if (m < 0 || m > 1000) {
        printf("So phan tu mang 2 khong hop le!\n");
        return 1;
    }

    int arr2[m];
    printf("Nhap cac phan tu cua mang 2: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int result[n + m];
    int k; 
    gopMang(arr1, n, arr2, m, result, &k);
    printf("Mang ket qua sau khi gop: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

