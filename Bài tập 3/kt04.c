#include <stdio.h>
int main(){
	int s = 123;
	int s = 0;
 s = s + n%10;// s = s + 3
 n = n/10;// n = 12
 s = s + n%10;// s = s + 2 + 3 = 5
 n = n/10;// n = 1
 s = s + n%10;// s = s + 1 + 5 = 6
 n = n/10;//n = 0
 for(; n !=0;n = n/10)
 s = s + n%10

 printf("s = %d",s);
 return 0;
 
}
