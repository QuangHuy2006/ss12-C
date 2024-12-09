#include <stdio.h>
int max(int a[], int max1){
for(int i=0;i<3;i++){
scanf("%d", &a[i]);
}
max1=a[0];
for(int i=0;i<3;i++){
if(a[i]>max1){
max1=a[i];
}
}
return max1;
}
int main(){
int a[100];
int max1;
int kq=max(a,max1);
printf("%d", kq);
}