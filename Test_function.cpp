#include <stdio.h>
#include "Function_ktsnt.h"
int main(){
	int n;
	printf("Nhap so nguyen n = ");
	scanf("%d",&n);
	int z;
	z = ktsnt(n);
	if(z){
		printf("%d khong phai la so nguyen to",n);
	}else{
		printf("%d la so nguyen to",n);
	}
}