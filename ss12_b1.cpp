#include <stdio.h>
int sum(int a, int b){
	printf("nhap so a:");
	scanf("%d", &a);
	printf("nhap so b:");
	scanf("%d", &b);
	return a+b;
}
int main(){
	int a,b;
	printf("tong = %d", sum(a,b));
}