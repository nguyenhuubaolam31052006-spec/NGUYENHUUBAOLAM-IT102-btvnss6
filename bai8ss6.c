#include<stdio.h>
int main(){
	int number01 , number02,min;
	printf("Nhap lan luot hai so nguyen :");
	scanf("%d %d",&number01,&number02);
	int a = number01;
	int b = number02;
	while(number02!=0){
		min=number01%number02;
		number01=number02;
		number02=min;
	}int UCLN = number01;
	printf("BCLN la :%d\n",(a*b)/UCLN);
	return 99;
}
