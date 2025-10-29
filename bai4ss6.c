#include<stdio.h>
int main(){
	int a,b=1;
	printf("Nhap so nguyen duong :");
	do{
		b=1;
		scanf("%d",&a);
		if(a<1 || a>10){
		   printf("Loi!Hay nhap lai : ");}
	}while(a<1 || a>10);
	printf("bang cuu chuong cua %d :\n",a);
	while(b<11){
	printf("%d x %d = %d\n",a,b,a*b);
	b++;}
return 0;
}
