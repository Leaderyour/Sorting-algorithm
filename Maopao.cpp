#include<cstdio>
#include<cstdlib>
int main() {
	int a[10] = {1,0,4,5,3,2,6,7,9,8};
	int l = sizeof(a) / sizeof(a[0] - 1);
	int e,b;
	/*
	for (int i = 0; i < l; i++) {
		printf("请输入数组元素：");
		scanf_s("%d", &e);
		a[i] = e;
	}*/
	
	printf("该数组为：");
	for (int i = 0; i < l; i++) {
		printf("%d,", a[i]);
	}
	for (int i = 0; i < l - 1; i++) {
		for (int j = 1; j < l; j++) {
			if (a[j - 1] > a[j]) {
				b = a[j];
				a[j] = a[j - 1];
				a[j - 1] = b;
			}
		}
	}
	printf("\n");
	printf("排序后的数组为：");
	for (int i = 0; i < l; i++) {
		printf("%d,", a[i]);
	}
}