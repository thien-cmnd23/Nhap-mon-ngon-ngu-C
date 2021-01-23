#include <stdio.h>
int main(){
	int n, i;
int s = 0;	
printf("\n nhap n:");
scanf("%d",&n);

for(i = 1;i <= n; i++){
s = s + i;
}
printf("\n tong 1 + 2 + ...+:%d",s);

return 0;
}
