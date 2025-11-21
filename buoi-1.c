//khai bao thu vien(preprocessor tien su ly)
// stdio.h = standard input output (thu vien nhap xuat chuan)
// #include "stdio.h"
#include <stdio.h>

//return_value_type function_name(){}
int main(){
	
	//code o trong day
	// ham main la ham dac biet trong c, chuong trinh se tu goi ham main khi run
	//(ham) 
	// tham so va doi so
	// ham printf la ham duoc viet san trong thu vien stdio.h. "hello world" la doi so (argument) cua ham
//	printf("Hello world \n");
//	printf("hello world");
	
	//yeu cau nhap vao 2 so a,b sau do in ra man hinh tong cua 2 so
	int a, b; // int : integer la kieu du lieu so
	printf("nhap vao so a: ");
	scanf("%d", &a); // d la digit //&A dia chi cua vung nho a
	
	printf("nhap vao so b: ");
	scanf("%d", &b);
	
	printf("tong cua a va b la: %d", a % b); // dat ta thay a +b vao %d
	
	
	return 0;
}


