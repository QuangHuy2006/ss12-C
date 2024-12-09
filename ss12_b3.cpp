#include <stdio.h>
int num(int a, int gt){
	scanf("%d", &a);
	for(int i=a;i>=1;i--){
		gt*=i;
	}
	return gt;
}
int main(){
	int a; 
	int gt=1;
	printf("giai thua bang %d", num(a, gt));
}