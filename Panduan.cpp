#include<cstdio>
#include<cstdlib>
#define Status int
 
int a[10] = { 8,0,4,5,3,2,6,7,9,1 };
int l = sizeof(a) / sizeof(a[0] - 1);
int e,j,b;
bool Panduan();
Status XuanzePaixu() {
	for (int i = 0; i < l-1; i++) {
		b = i;
		for (j = i+1; j < l;j++) {
			if (a[b] > a[j]) {
				b = j;
			}
		}
		if(b!=i){
			e = a[b];
			a[b] = a[i];
			a[i] = e;
		}
		
	}
	for (int i = 0; i < l; i++) {
		printf("%d", a[i]);
	}
	return 0;
}
int main() {
	printf("该数组为：");
	for (int i = 0; i < l; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	printf("排序后的数组为：");
	XuanzePaixu();
}
