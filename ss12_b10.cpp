#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input(int a[], int n){
	printf("nhap cac phan tu trong mang(%d phan tu):", n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}
void output(int a[], int n){
	printf("cac gia tri cua mang la:");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
void insert(int a[], int n){
	int x;
	printf("nhap vi tri ban muon chen:");
	scanf("%d", &x);
	if(x>n){
		int value;
	printf("nhap gia tri ban muon them vao:");
	scanf("%d", &value);
	a[x-1]=value;
		for(int i=0;i<x;i++){
					printf("%d ", a[i]);
				}
	}else {
	int value;
	printf("nhap gia tri ban muon them vao:");
	scanf("%d", &value);
	for(int i=n;i>=x;i--){
		a[i]=a[i-1];
	}
	a[x-1]=value;
	for(int i=0;i<=n;i++){
					printf("%d ", a[i]);
				}
	}
}
void fixed(int a[], int n){
	int x;
	printf("nhap vi tri ban muon sua:");
	scanf("%d", &x);
	int value;
	printf("nhap gia tri ban muon doi:");
	scanf("%d", &value);
	a[x-1]=value;
}
void deleted(int a[], int n){
	int x;
	printf("nhap vi tri ban muon xoa:");
	scanf("%d", &x);
	--x;
	if(x>n){
		printf("vi tri khong hop le !!");
	}else{
		for(int i=x;i<n;i++){
		a[i]=a[i+1];
		}
	}
}
void increase(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void decrease(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void binarysearch(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	int L=0;
	int R=n-1;
	int x;
	printf("nhap mot so bat ky:");
	scanf("%d", &x);
	while(L<=R){
		int m=(L+R)/2;
		if(x>m){
			L=m+1;
		}else if(x<m){
			R=m-1;
		}else{
			printf("tim thay phan tu %d o vi tri %d", x, m);
			break;
		}
	}
}
void linearsearch(int a[], int n){
	int x;
	int find=0;
	printf("nhap so bat ky:");
	scanf("%d", &x);
	for(int i=0;i<n;i++){
		if(a[i]==x){
			find++;
		}
}
if(find){
	printf("tim thay");
}else printf("khong tim thay");
}
int main(){
int n;
int a[10];
int choice;
do{
	printf("\n1:nhap so phan tu va gia tri tung phan tu");
	printf("\n2:in ra gia tri cac phan tu dang quan li");
	printf("\n3:them phan tu vao vi tri chi dinh");
	printf("\n4:sua phan tu tai vi tri chi dinh");
	printf("\n5:xoa phan tu tai vi tri chi dinh");
	printf("\n6:sap xep cac phan tu");
	printf("\n7:tim kiem phan tu nhap vao");
	printf("\nnhap lua chon cua ban:");
	scanf("%d", &choice);
	if(choice==1){
		printf("nhap so phan tu co trong mang:");
		scanf("%d", &n);
		input(a,n);	
	}
	if(choice==2){
		printf("cac phan tu trong mang la:");
		output(a,n);
	}
	if(choice==3){
		printf("ham sau khi chen la:");
		insert(a,n);
	}
	if(choice==4){
		printf("mang sau khi sua la:");
		fixed(a,n);
		for(int i=0;i<n;i++){
					printf("%d ", a[i]);
				}
	}
	if(choice==5){
		printf("mang sau khi thay doi la:");
		deleted(a,n);
		for(int i=0;i<n-1;i++){
					printf("%d ", a[i]);
				}
	}
	if(choice==6){
		int choice2;
		printf("\n1:sap xep tang dan");
		printf("\n2:sap xep giam dan\n");
		scanf("%d", &choice2);
		if(choice2==1){
			printf("day tang dan la:");
			increase(a,n);
			for(int i=0;i<n;i++){
					printf("%d ", a[i]);
				}
		}
		if(choice2==2){
			printf("day giam dan la:");
			decrease(a,n);
			for(int i=0;i<n;i++){
					printf("%d ", a[i]);
				}
		}
	}
	if(choice==7){
		int cnt=0;
		for(int i=1;i<n;i++){
			if(a[n-1]>a[n-i-1]) ++cnt;
		}
		int cnt2;
		for(int j=n-1;j>=1;j--){
			if(a[n-j-1]>a[n-j]) ++cnt2;
		}
		if(cnt == n-1 || cnt2 ==n-1){
			printf("mang da duoc sap xep!\n");
			binarysearch(a,n);
		}else {
			printf("mang chua duoc sap xep!\n");
			linearsearch(a,n);
		}
	}
	if(choice==8){
		printf("thoat chuong trinh !");
	}
}while(choice!=8);
	exit(0);
}