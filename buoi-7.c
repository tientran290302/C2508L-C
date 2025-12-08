#include<stdio.h>
//#include<math.h>

int main(){
	
//	//bai1:
//	int n;
//	printf("nhap so 123 :");
//	scanf("%d",&n);
//	if(n == 1 || n==2 || n==3){
//		switch(n){
//			case 1:
//				printf("*");
//			break;
//			case 2:
//				printf("**");
//			break;
//			case 3:
//				printf("***");
//			
//			
//			
//		}
//		
//		
//		
//		
//	}else{
//		printf("so nhap ko phai la 1 2 3");
//		
//	}

//	// cau 2:
//	int thang;
//	printf("nhap thang :");
//	scanf("%d",&thang);
//	
//	if(thang >= 1 && thang <= 12){
//		switch(thang){
//		
//		case 1: case 2: case 3:
//			printf("quy 1");
//			break;
//		case 4: case 5: case 6:
//			printf("quy 2");
//			break;
//		case 7: case 8: case 9:
//			printf("quy 3");
//			break;
//		case 10: case 11: case 12:
//			printf("quy 4");	
//		}
//		
//		
//		
//		
//	}else{
//		printf(" nhap so khong hop le");
//		
//		
//	}
	// xay dung menu cap 2"
	
//	chuong trinh doc truyen 'thien long bac bo'
//	
//	1. chuong 1
//	2. chuong 2
//	3. chuong 3
//	4. chuong 4
//	
//	moi ban nhap so chuong (1-4) 
//	
//	1. chuong 1 - tap 1
//	2. chuong 1 - tap 2
//	3. chuong 1 - tap 3
//	
//	moi ban nhap so tap (1-4)
//	
//	gia su neu nguoi dung nhap so 1 => In ra dong chu ban da chon "chuong 1 - tap 1"
//	
//	
//	int chuong,tap;
//	printf("Chuong trinh doc truyen 'Thien Long Bac Bo' \n");
//	printf("\n");
//	printf("1. Chuong 1 \n");
//	printf("2. Chuong 2 \n");
//	printf("3. Chuong 3 \n");
//	printf("4. Chuong 4 \n");
//	printf("\n");
//	printf("moi ban nhap so chuong (1-4) : \n");
//	scanf("%d",chuong);
//	
//	switch(chuong){
//		case 1:
//			printf("1.Chuong 1 - tap 1 \n");
//			printf("2.Chuong 1 - tap 2 \n");
//			printf("3.Chuong 1 - tap 3 \n");
//			printf("moi ban nhap so tap (1-3): \n");
//			scanf("%d",&tap);
//			printf("ban da chon chuong %d tap %d",chuong,tap);
//			break;
//		case 2:
//			printf("1.Chuong 2 - tap 1 \n");
//			printf("2.Chuong 3 - tap 2 \n");
//			printf("3.Chuong 3 - tap 3 \n");
//			printf("moi ban nhap so tap (1-3): \n");
//			scanf("%d",&tap);
//			printf("ban da chon chuong %d tap %d",chuong,tap);
//			break;
//		case 3:
//			printf("1.Chuong 3 - tap 1 \n");
//			printf("2.Chuong 3 - tap 2 \n");
//			printf("3.Chuong 3 - tap 3 \n");
//			printf("moi ban nhap so tap (1-3): \n");
//			scanf("%d",&tap);
//			printf("ban da chon chuong %d tap %d",chuong,tap);
//			bradk;
//		case 4:
//			printf("1.Chuong 4 - tap 1 \n");
//			printf("2.Chuong 4 - tap 2 \n");
//			printf("3.Chuong 4 - tap 3 \n");
//			printf("moi ban nhap so tap (1-3): \n");
//			scanf("%d",&tap);
//			printf("ban da chon chuong %d tap %d",chuong,tap);
//		
//	}

	// vong lap for
	// in ra man hich cac so tu 1- 10
	// i: index (chi muc)
//	//bieu thuc 1: chi chay 1 lan duy nhat trong vong lap for
//	int i;
//	for(i = 1; i <= 10; i++){
////	continue;		
//			printf("%d \n",i);
//	
//		
//	}
//	// cach nao khac de thoat khoi vong lap for khong
//	//dung break;
	
//	// in ra man hinh cac so chan tu 1 toi 10;
//	int i;
//	for(i = 1 ;i <= 10;i++){
//		if(i % 2 == 0){
//
//		printf("%d \n",i);
////		i= i % 2;
//	}
//		
//		
//	}
//	int i; //so le
//	for(i =  1;i <= 10;i=i +2){
//		printf("%d \n",i);
//	}
//	int i; //so chan
//	for(i = 2 ;i <= 10;i=i +2){
//		printf("%d \n",i);
//	}
	//bai 2 tinh tong tu 1-n voi n nhap tu ban phim;
	
//	int n, tong = 0,i;
//	printf("nhap n :");
//	scanf("%d",&n);
//	for(i = 1;i <= n; i++){
//		tong = tong + i ;	
//	}
//		printf("%d \n",tong);
//		int i,n,t=0;
//	printf("nhap n :");
//	scanf("%d",&n);
//	for(i = 1;i < n +1;i++){
//		t= t + i ;
//		printf("%d \n",t);
//		
//		
//	}
	//bt3 : tinh tong cac so le tu 1-n nhap vao ban phim
//		int n, tong = 0,i;
//	printf("nhap n :");
//	scanf("%d",&n);
//	for(i = 1;i <= n; i=i+2){
//		tong += i;
//		
//}
//		printf("%d \n",tong);
//	
//	
//	return 0;
//}
//bt4 : tinh tong cac so chan tu 1-n nhap vao ban phim gan 
//	int n, tong = 0,i;
//	printf("nhap n :");
//	scanf("%d",&n);
//	for(i = 0;i <= n; i=i+2){
//		tong += i;
//		
//}
//		printf("%d \n",tong);
//	
//	
//	return 0;
//}

// while
//	int n = 1;
//	while(n <= 10){
//		printf("%d \n",n);
//		n++;}
		
		//vong lap do while
//	do{
//		
//		//block code
//	}while(condition)
//		
//	int n = 1;
//		do{
//			printf("hello \n");
//			n++;
//		}while(n <= 10);
//		
//		
//		
//		for(; ; ){
//			printf("hello");
//		}
//			
//	int i;
//			for(i = 0; ; ){
//			printf("hello");
//		}
		
		//bai tap : su dung vong long in ra cac so tu 1 -10 ( ko in ra so 2)
		//dung do while
		
		int n = 1;
		do{
			if(n != 2){
				printf(" in ra: %d \n",n);
			}

			n++;
		}while(n <= 10);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	return 0;		
	}



