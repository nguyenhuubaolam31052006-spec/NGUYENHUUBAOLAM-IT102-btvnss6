#include<stdio.h>
int main(){
int a;
int b =7;
do{
	printf("Nhap so a :");
	scanf("%d",&a);
	if(a!= b){
		printf("Nhap lai \n");}
	}while(a!=b);
	printf("So chon chinh xac \n");
return 0;
}
