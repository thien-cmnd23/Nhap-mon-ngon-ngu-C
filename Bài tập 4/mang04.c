#include <stdio.h>
int main(){
	int i, n;
	int tong = 0;
 scanf("%d",&n);
 
 int a[n];
 
 for(int i = 0;i < n; i++){
 	printf("nhap phan tu thu %d", i + 1);
 	scanf("%d", &a[i]);
 	
printf("\n");

} 
 printf("mang a:");
for(int i = 0;i < n; i++);{
	scanf("%d", a[i]);
	
}	
 printf("mang a:");
for(int i = 0;i < n; i++){
	tong = tong + a[i];
	printf("%d", a[i]);
}
  printf("\n tong cac so tu mang a": %d, tong);
return 0;
}
	
	
