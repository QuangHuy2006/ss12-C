#include <stdio.h>
int perfect(int n){
scanf("%d", &n);
int tong;
for(int i=1;i<n;i++){
if(n%i==0){
tong+=i;
}
if(tong==n){
return 1;
}
}
return 0;
}
int main(){
int a;
if(perfect(a)){
printf("True");
}else{
printf("False");
}
printf("\n");
int b;
if(perfect(b)){
printf("True");
}else{
printf("False");
}
}