#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a two  number:");
	scanf("%d %d",&a,&b);
	c=a-b;
	if(c%2==0){
	    printf("%d the given number is even",c);
	}
	else
	printf("%d the given number is odd",c);
	return 0;
	
}