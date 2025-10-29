#include<stdio.h>
int main(){
	int number,reverse_number=0,answer;
	printf("Nhap mot so nguyen bat ki :");
	scanf("%d",&number);
	if(number == 0) printf("Chu so : 0");
	printf("Ket qua :");
	if (number<0){
		printf("-");
    	number = -number;}
	while(number!=0){
		reverse_number = reverse_number*10 + number%10;
		number = number/10;
		
	}
	while(reverse_number!=0){
		answer = reverse_number%10;
		reverse_number = reverse_number/10;
		printf(" %d",answer);
	}
	return 0;
}

