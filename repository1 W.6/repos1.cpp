#include<stdio.h>

int main() {
    int matrix[100][100];
    int re = 0;
    int m, n;
    scanf_s("%u %u", &m, &n);
    if (m >= 1 && n >= 1 && m<=100 && n<=100) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf_s("%d", &matrix[i][j]);
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j && matrix[i][j] != 1) {
                    re = re + 1;
                }
                else if (i != j && matrix[i][j] != 0) {
                    re = re + 1;
                }
            }
        }
        if (re == 0) {
            printf("Identity Matrix");
        }
        else {
            printf("Not Identity Matrix");
        }
    }
    return 0;
}