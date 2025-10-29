#include<stdio.h>
int main(){
	int a,b,d,c=0,min,max;
	printf("Nhap lan luot 3 so nguyen :");
	scanf("%d %d %d",&a,&b,&d);
	do{
    	printf("1. Tong ba so\n");
    	printf("2. Trung binh cong ba so\n");
    	printf("3. So nho nhat\n");
    	printf("4. So lon nhat\n");
    	printf("5. Thoat\n");
    	printf("Lua chon cua ban :");
	    scanf("%d",&c);
		switch (c){
			case 1:
				printf("tong : %d + %d + %d = %d\n",a,b,d,a+b+d);
				break ;
			case 2 :
				printf("Trung binh : (%d + %d + %d)/3 = %.2f\n",a,b,d,(a+b+d)/3.0);
				break ;
			case 3 :
				min = a;
				if(b<min) min = b;
				if(d<min) min = d;
				printf("So nho nhat : %d\n",min);
				break;
			case 4 :
				max = a;
				if(b>max) max = b;
				if(d>max) max = d;
				printf("So lon nhat : %d\n",max);
				break;
			case 5 :
				printf("Da het chuong trinh\n");
				break;	
			default :
			    printf("Khong thoa man nhap lai\n");			
		}
	}while(c!=5);
	return 0;
}
