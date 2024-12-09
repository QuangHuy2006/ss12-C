#include <stdio.h>
int array(int a, int b){
int n[a][b];
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        scanf("%d", &n[i][j]);
        return n[i][j];
    }
    }
}
int main(){
int i,j;
int a,b;
scanf("%d", &a);
scanf("%d", &b);
int n[a][b];
int kq;
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      int kq=array(a,b);
        printf("%d ", kq);
    }
printf("\n");
    }
}