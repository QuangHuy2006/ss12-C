#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input(int a, int b,int n[10][10]){
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        scanf("%d", &n[i][j]);
    }
}
}
void print(int a, int b,int n[10][10]){
	for(int i=0;i<a;i++){
    		for(int j=0;j<b;j++){
        		printf("%d ", n[i][j]);
    		}
			printf("\n");
    	}
}
void print2(int a, int b, int n[10][10]){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(i==0 && j==0 || i==0 && j==b-1 || i==a-1 && j==0 || i==a-1 && j==b-1){
				printf("%d", n[i][j]);
			}else printf("\t");
		}
		printf("\n");
}
}
void print3(int a, int b, int n[10][10]){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(i==0 || j==0 || j==b-1 || i==a-1){
				printf("%d ", n[i][j]);
			}else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
void print4(int a, int b,int n[10][10]){
	for(int i=0;i<a;i++){
    		for(int j=0;j<b;j++){
        		printf("%d ", n[i][j]);
    		}
			printf("\n");
    	}
	printf("\ncac phan tu nam tren duong cheo chinh la:");
	for(int i=0;i<a;i++){
		for(int j=0;j<i;j++){
		}
		printf("%d ", n[i][i]);
	}
	printf("\ncac phan tu nam tren duong cheo phu la:");
	for(int i=0;i<a;i++){
		for(int j=i;j>=0;j--){
		}
		printf("%d ", n[i][a-i-1]);
	}
}
int print5(int n){
			if(n < 2){
       			return 0; 
    		}
    for(int u = 2; u <= sqrt(n); u++){
        if(n % u == 0){
            return 0; 
				}
			}
		return 1;
	}
int main(){
int a,b;
int n[10][10];
int kq;
int choice;
do{
	printf("\n1:nhap cac gia tri cua mang");
	printf("\n2:in cac gia tri cua mang theo ma tran");
	printf("\n3:in cac phan tu o goc theo ma tran");
	printf("\n4:in cac phan theo duong bien ma tran");
	printf("\n5:in cac phan tu nam tren duong cheo chinh va duong cheo phu");
	printf("\n6:in cac phan tu la so nguyen to theo ma tran");
	printf("\n7:thoat");
	printf("\nnhap lua chon cua ban:");
	scanf("%d", &choice);
	if(choice==1){
		printf("nhap so hang so cot:");
		scanf("%d%d", &a,&b);
		printf("nhap 9 phan tu cua mang: \n");
		input(a,b,n);
	}
	if(choice==2){
		printf("cac phan tu cua mang la:\n");
		print(a,b,n);
	}
	if(choice==3){
		print2(a,b,n);
	}
	if(choice==4){
		print3(a,b,n);	
	}
	if(choice==5){
		print4(a,b,n);
	}
	if(choice==6){
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(print5(n[i][j])){
					printf("%d ", n[i][j]);	
				}else {
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	if(choice==7){
		printf("thoat chuong trinh !");
	}
}while(choice!=7);
exit(0);
}