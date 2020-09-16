#include<stdio.h>
#include<math.h>

int main() {
	int num, p[20] , re[20];
	scanf_s("%d", &num);
	if (num >= 1 && num <= 20) {
		for (int i = 0; i < num; i++) {
			scanf_s("%d", &p[i]);
			if (p[i] >= 1 && p[i] <= 214) {
				re[i] = pow(2, p[i]);
			}
		}
		for (int j = 0; j < num; j++) {
			if (p[j] >= 1 && p[j] <= 214) {
				printf("%d\n", re[j]);
			}
			else {
				printf("\n");
			}
		}
	}
	return 0;
}