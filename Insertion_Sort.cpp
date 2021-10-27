#include<cstdio>
#include<cstdlib>
#define Status int

int a[10] = { 8,0,4,5,3,2,6,7,9,1 };
int length = sizeof(a) / sizeof(a[0] - 1);
int i,e, j, b,temp;

Status Insertion_Sort(){
	for(i = 1; i < length; i++){
		j = i - 1;
		temp = a[i];
		while (j >= 0 && a[j] > temp) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
		}
	for (int i = 0; i < length; i++) {
		printf("%d", a[i]);
	}
	return 0;
}
int main() {
	printf("该数组为：");
	for (int i = 0; i < length; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	printf("排序后的数组为：");
	Insertion_Sort();
}
