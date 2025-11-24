// comment: khong cho trinh phien dich dich dong code nay
// include<stdio.h> day la tien xu ly (preprocessor) . Muc dich la nhung thu vien
//standard Int Out (thu vien nhap xuat chuan)
// vao trong file thuc thi
#include <stdio.h>
//day la ham main: chuong trinh se thuc thi dau tien
int main(){
	//day goi la phan ham 
	
	//ham printf (print formatted) : la in ra tren man hinh cai gi do 
	printf("Xin Chao \n");

	 int tuoi = 20;
	// %d,%f,%c ...goi la format specifier (dac ta dinh dang)
	printf("tuoi cua toi la: %d \n",tuoi);
	
	float diemToan = 4.5 ;
	float diemVan = 7.5 ;
	float diemAnh = 5.5 ;
	float diemTrungBinh;
	
	printf("Diem toan: %f \n",diemToan);
	printf("diem van: %f \n",diemVan);
	printf("diem Anh: %f \n",diemAnh);
	
	diemTrungBinh=(diemToan+diemVan+diemAnh)/3;
	
	printf("diem trung binh %f",diemTrungBinh);
	
	char kyTu = 'C';
	
	printf(" gia trcua bien ky tu la %c",kyTu);
	
	//de nhap du lieu tu ban phim thi minh dung scanf()
	int a = 0;
	int b = 0;
	int tong ;
	printf("nhap so a:");
	// dau & la toan tu dia chi, dung de xac dinh gia tri cua bien a
	// duoc luu o dau do trong bo nho RAM
	
	scanf("%d",&a);
	
	printf("gia tri cua bien a la: %d",a);
	
	printf("nhap so b:");
	scanf("%d",&b);
	printf("gia tri cua bien b la: %d",b);
	tong = a+b;
	printf("tong cua a va b: %d",tong);
	return 0;
}



