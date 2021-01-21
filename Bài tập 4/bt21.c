#include<stdio.h>

int main(){
int n;

printf("nhap n = ");
scanf("%d",&n);
int a[n];
n = 3;
printf("phan tu mang a :");
for(int i =0;i < n; i++){
printf("nhap n[%d] = ",i);
scanf("%d",&a[i]);
int m;
printf("nhap m = ");
scanf("%d", &m);
if (a[i] == m){
printf("co ton tai");
 }
 else{
printf("khong ton tai");
}
}
return 0;
}	
