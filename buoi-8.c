#include <stdio.h>



int tinhTong(int a,int b);
int tinhHieu(int a,int b);
int tinhTich(int a,int b);
float tinhThuong(float a,float b);
int tinhTongTich(int tong, int tich);
int tinhTuoi(int namSinh);

int main(){
	int a;
	printf("nhap a :");
	scanf("%d",&a);
	int b;
	printf("nhap b :");
	scanf("%d",&b);
	
	int tong,hieu,tich;
	tong = tinhTong(a,b);
	printf("tong la %d :\n",tong);
	
	hieu = tinhHieu(a,b);
	printf("Hieu la %d :\n",hieu);
	
	tich = tinhTich(a,b);
	printf("tich la %d : \n",tich);
	
	float thuong;
	thuong = tinhThuong(a,b);
	printf("thuong la %f :\n",thuong);
	int ketQua;
	ketQua = tinhTongTich(tong,tich);
	printf("ket qua la %d: \n",ketQua);
	
	int namSinh,tuoi;
	printf("nhap nam Sinh");
	scanf("%d",&namSinh);
	tuoi = tinhNamSinh(namSinh);
	printf("tuoi la : %d ",tuoi);
	
	
	return 0;
	
	
}
int tinhTong(int a , int b){
	return a + b ;	
}
int tinhHieu(int a, int b){
	return a - b ;
}
int tinhTich(int a, int b){
	return a * b ;
}
float tinhThuong(float a,float b){
	if(b == 0){
		printf( "khong chia duoc cho 0");
//		return 0;
	}
		return (float)a / b;	
}
int tinhTongTich(int tong , int tich){
	return tong + tich;
}
int tinhNamSinh(int namSinh){
	return 2025 - namSinh;
	
}
