#include<stdio.h>
#include<math.h>
int main(){
	//cau1:
//	int a,b,c,max;
//	printf("nhap a,b,c:");
//	scanf("%d %d %d",&a,&b,&c);
//	max = a;
//	if(b > max){
//		max = b;
//	}
//	if(c > max);
//		max = c;
//	}
//	printf("so lon nhat la : %d",max);
	//cau 2:
	//cau 3:
//			int tuoi;
//		printf("nhap tuoi:");
//		scanf("%d",&tuoi);
//		if(tuoi >= 16){
//			printf(" hoc sinh du tuoi vao lop 10:");
//		}else{
//		printf(" ko dat dieu kien ");
//		}
//	cau4:
//	double a,b,c,p,s;
//	printf("nhap do dai a , b, c :");
//	scanf("%lf %lf %lf",&a,&b,&c);
//	
//	//kiem tra dieu kien tam giac ton tai
//	if(a + b > c || a + c > b || c + b > a){
//	p =(a + b + c)/2;
//	s = sqrt(p*(p-a)*(p-b)*(p-c));	
//		
//		printf("dien tich tam giac la: %.2lf",s);
//	}else{
//		printf("tam giac ko ton tai:");
//	}
	//bai 6:
		
//		double luong,thue,thuclinh ;
//		printf("nhap tien luong :");
//		scanf("%lf",&luong);
//		if(luong > 0){
//			if(luong > 15){
//				thue = luong * 0.3;
//			}else if( luong >= 70 ){
//				thue = luong * 0.2;
//			}else{
//				thue = luong * 0.1;
//				}
//		thuclinh =	luong - thue;
//		printf("tong thue la: %.2lf \n",thue);
//		printf("tong thuclinh la : %.2lf\n",thuclinh);	
//		}else{
//		
//		printf("khong hop le:"); }
//	int thang,nam;
//	printf("nhap thang va nam:");
//	scanf("%d %d",&thang,&nam);
//	if(thang >= 1 && thang <= 12){
//		if(thang == 1 || thang == 3 || thang == 5 ||
//			thang == 7 || thang == 8 || thang == 10 ||
//				thang || 12  ){
//			printf("thang co 31 ngay");
//		}else if(thang == 4 || thang == 6|| thang ==9|| thang ==11){
//			printf("thang co 30 ngay");
//		}else{
//			//kiemtra nam nhuan
//			if(nam % 400 == 0 || (nam % 4 ==0 && nam % 100 != 0)){
//				printf("thang %d nam %d co 29 ngay",thang,nam);
//			}else{
//				printf("thang %d nam %d co 28 ngay",thang,nam);
//			}
//		}
//		
//	
//		
//		
//	}else{
//		printf(" khong hop le");
//	}

//// cau 9
//	int tienCuoc = 25000,soPhut;
//	printf("nhap so phut goi:");
//	scanf("%d",&soPhut);
//	if(soPhut >= 0){
//	if(soPhut <= 10){
//		tienCuoc= tienCuoc +(soPhut *600);
//		
//	}else if(soPhut <= 60){
//		tienCuoc = tienCuoc +(10 *600)+((soPhut -10)*400);
//	}else{
//		tienCuoc = tienCuoc +(10 *600)+(50 * 400)+((soPhut -10)*200);
//	}
//	printf("tien cuoc ban phai tra la: %d",tienCuoc);	
//}else{
//	printf("so phut ko hop le");
//}
//	
//	
//	return 0;
	
	
//	int n;
//	printf("nhap n:");
//	scanf("%d",&n);
//	
//	switch(n){
//		case 1: //neu 1 thi in ra 1:
//			printf("chu nhat");
//			break; // thoat khoi switch
//		case 2:
//			printf("thu 2");
//			break;
//		case 3:
//			printf("thu 3");
//			break;
//		case 4:
//			printf("thu 4");
//			break;
//		case 5:
//			printf("thu 5");
//			break;
//		case 6:
//			printf("thu 6");
//			break;
//		case 7:
//			printf("thu 7");
//			break;
//		default: // cac truong hop con lai (khac)neu ko co cai nao dung in ra
//			printf("nhap khac so in ra ngay nghi");
//	}
//	int thang,nam;
//	printf("nhap thang va nam:");
//	scanf("%d %d",&thang,&nam);
//		if(thang >= 1 && thang <= 12){
//		
//	switch(thang){
//		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//			printf("thang co 31 ngay");
//			break;
//		case 4: case 6: case 9: case 11:
//			printf("thang co 30 ngay");
//			break;
//		case 2:
//			if(nam % 400 == 0 || (nam % 4 ==0 && nam % 100 != 0)){
//				printf("thang %d nam %d co 29 ngay",thang,nam);
//			}else{
//				printf("thang %d nam %d co 28 ngay",thang,nam);
//			}
//		
//	}
//}else{
//	printf("khong hop le");
//}
	int so;
	printf("nhap so:");
	scanf("%d",&so);
	switch(so){
		case 1:
			printf("*");
			break;
		case 2:
			printf("**");
			break;
		case 3:
			printf("***");
			break;	
	}
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
