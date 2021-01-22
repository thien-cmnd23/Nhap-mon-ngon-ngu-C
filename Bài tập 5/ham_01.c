#include <stdio.h>
int sum( int a, int b);// khai bao ham sum
//khoi ham main
int main(){
	int x =2, y =3;
	printf("x + y =%d",sum(x,y));//goi ham sum
	return 0;
}
//khoi dinh nghia ham
int sum(int a, int b){//dinh  nghia ham sum
return a + b;}
int sum(int a, int b, int c){
	int d = a + b + c;
	return d;
	
	
	
}
