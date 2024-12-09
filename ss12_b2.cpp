#include <stdio.h>
void print(int a[], int n){
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d\t", a[i]);
	}
}
int main(){
	int a[100];
	int n;
	printf("nhap so luong phan tu co trong mang:");
	scanf("%d", &n);
	printf("nhap cac phan tu trong mang: \n");
	print(a,n);
}