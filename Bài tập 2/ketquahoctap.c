#include <stdio.h>
    //Nhap diem van va diem toan tu ban phim
int main(void) {
	double v, t, dtb;
printf("Nhap v= ");
scanf("%lf", &v);
printf("Nhap t= ");
scanf("%lf", &t);
    //Tong diem trung binh van va toan
printf("v + t = %lf", v + t );
dtb=(v+t)/2;
    //Hien thi diem van, toan, diem trung binh
printf("Diem van(v)\Diem toan(t)\Diem trung binh(dtb)\");
printf("%.2f\%.2f\%.2f", t, v, dtb);

return 0;
}
