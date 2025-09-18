#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a  number:");
	scanf("%d",&a);
	b = a%10;
	if(b%3==0){
	    printf("%d yes",b);
	}
	else
	printf("%d no",b);
	return 0;
	
}