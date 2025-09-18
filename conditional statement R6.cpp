#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a three number :");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&c<a){
	    printf("%d",a);
	}
	else if (b>a&c<b){
		printf("%d",b);
	}
	else{
		printf("%d",c);
	}
	return 0;
	
}