#include<stdio.h>
int main(){
	int a,b,c=0;
	printf("Nhap so nguyen a :");
	scanf("%d",&a);
	printf("Nhap so nguyen b :");
	scanf("%d",&b);
	do{
    	printf("1. Tong hai so\n");
    	printf("2. Hieu hai so\n");
    	printf("3. Tich hai so\n");
    	printf("4. Thuong hai so\n");
    	printf("5. Thoat\n");
    	printf("Lua chon cua ban :");
	    scanf("%d",&c);
		switch (c){
			case 1:
				printf("tong : %d + %d = %d\n",a,b,a+b);
				break ;
			case 2 :
				printf("Hieu : %d - %d = %d\n",a,b,a-b);
				break ;
			case 3 :
				printf("Tich : %d x %d = %d\n",a,b,a*b);
				break;
			case 4 :
				printf("Thuong : %d : %d = %d\n",a,b,a/b);
				break;
			case 5 :
				break;	
			default :
			    printf("Khong thoa man nhap lai\n");			
		}
	}while(c!=5);
	return 0;
}
