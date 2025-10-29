#include<stdio.h>
int main(){
	int a,tong=0;
	printf("nhap so nguyen a :");
	scanf("%d",&a);
	while(a>0){
		tong += a;
		a--;
	}printf("Tong = %d",tong);
	return 0;
}
