#include<stdio.h>
int main(){
	int a;
	printf("Enter a  number:");
	scanf("%d",&a);
	if(a&1){
	    printf("%d the given number is odd",a);
	}
	else
	    printf("%d the given number is even",a);
	return 0;
	
}