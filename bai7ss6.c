#include<stdio.h>
int main(){
	int number01 , number02,a;
	printf("Nhap lan luot hai so nguyen :");
	scanf("%d %d",&number01,&number02);
	while(number02!=0){
		a=number01%number02;
		number01=number02;
		number02=a;
	}printf("UCLN la :%d",number01);
	return 99;
} 
