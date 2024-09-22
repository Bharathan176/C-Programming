#include<conio.h>
#include<stdio.h>
void main(){
	int n,rem,num,rev=0;
	clrscr();
	printf("\nEnter the number:");
	scanf("%d",&n);
	num=n;
	do{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}while(n>0);
		printf("\nThe revrse of number %d is %d",num,rev);
		getch();
}