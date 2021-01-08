#include <stdio.h>
int main(){
	
	// h = 1
	// 1 hang 1* , 0 khoang trang
	// h = 2
	// 2 hang
	// - hang 1 ; 1* , 1 trang
	// - hang 2 ; 3* , 0 trang
	int h=4 ;
	printf(" *\n"); // hang 1
	printf("***\n"); // hang 2
	printf("****\n"); //hang 3
	printf("*****\n"); //hang 4
	for(int i = 1; i <= 3; i++){
		printf("hang %d,i");
	//in ra h - i khoang trang
	//in ra 2*i - 1 ngoi *
	printf("\n");
	}
	int i;
	for (i=1;i<=h-i;i++){
	printf("khoang trang \n");
	printf("\n");
	}
	return 0;
	
	

}
