#include <stdio.h>
int ucln(int a,int b){
	if(a==0 || b==0){
		return a+b;
	}
	int min=a<b?a:b;
	for(int i=min;i>=1;i--){
		if(a%i==0 & b%i==0){
			return i;
		}
	}
	return 1;
}
int main(){
	int x,y;
	printf("nhap so thu nhat:");
	scanf("%d", &x);
	printf("nhap so thu hai:");
	scanf("%d", &y);
	printf("uoc chung lon nhat cua %d va %d la: %d", x,y,ucln(x,y));
	int uclnmoi=ucln(x,y);
	int c;
	printf("\nnhap so thu ba:");
	scanf("%d", &c);
	printf("uoc chung lon nhat cua %d va %d la: %d", c, uclnmoi,ucln(c,uclnmoi));
}