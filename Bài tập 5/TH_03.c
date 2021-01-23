#include<stdio.h>
int so_lon_nhat (int a,int b,int c);
int main(){
  int a, b, c;
//nhap ba so bat ki tu ban phim 
printf("nhap a :");
scanf("%d",&a);
printf("nhap b :");
scanf("%d",&b);
printf("nhap c :");
scanf("%d",&c);
if (a > b && a > c)
 printf("so lon nhat la a");
    
else if (b > a && b > c)
 printf("so lon nha la b");
else
printf("so lon nhat la c");
}

int so_lon_nhat (int a,int b,int c){

return 0;

}
