#include<stdio.h>
#include <stdbool.h>

int main(){
  
//	int x = 6;
//	//&&(and) dung het
//	printf("%d",x < 5 && x < 10);
//	//||(or) co true la dung 
//	printf("%d",x < 5 || x < 10);
//	//!()(not)phu dinh
//	printf("%d",!(x < 5 || x < 10));
//	
//	bool isHandsome = false;
//	printf("%d",isHandsome);

//	int x = 10;
//	if(x > 10){
//		//khoi code nay duoc thuc thi neu dieu kien tren la true
//		printf("x > 10");	
//	}else{
//		printf("x <= 10");
//	}

// viet chuong trinh kiem tra so  chan, le

//	int x;
//	printf("nhap 1 so nguyen bat ki:");
//	scanf("%d",&x);
//	if(x > 0){	
//			if(x % 2 == 0){
//		printf("x la cho chan");
//	}else{
//		printf("x la so le");
//		}	
//	}else{
//		printf("KO hop le ");
//	}

// bai tap 2 giai phuong trinh bac 1: ax + b = 0;
//	float a,b ,x;
//	printf("nhap 2 so a va b:");
//	scanf("%f %f",&a ,&b);
//	if(a == 0){
//		if(b != 0){
//			printf("phuong trinh vo nghiem");
//		}else{
//			//truong hop b ==0
//			printf("phuong trinh vo so nghiem");
//		}
//			
//	}else{
//		x = -b /a ;
//		printf("nghiem cua x: %.2f",x);
//	}
//	scanf("%f %f",&a ,&b);
//	if(a == 0 && b !=0){
//		printf("phuong trinh vo nghiem");	
//	}else if(a == 0 && b == 0){
//		printf("phuong trinh vo so nghiem");	
//	}else{
//		x = -b /a ;
//		printf("nghiem cua x: %.2f",x);
//	}
	
	int a,b,max;
	printf("nhap so a:");
	scanf("%d", &a);
	printf("nhap so b:");
	scanf("%d", &b);
	max =a;
//	if(b > a){
//		max = b;
//	}
	
 	max =	(b > a ) ? b : a;
		printf("so lon nhat %d",max);
	
	
	
	
	
	return 0;
}
