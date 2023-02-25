//example for all the possible outcomes in each condition check.

#include<stdio.h>
#include<math.h>
int main(){
	int a=5,b=5;
	printf("%d==%d , %d\n",a,b,a==b); //Checks whether a equals to b if true returns 1 else 0
	//similarly//
	printf("%d!=%d , %d\n",a,b,a!=b);//checks whether a not equals to b if true returns 1 else 0
	printf("%d<%d , %d\n",a,b,a<b);
	printf("%d>%d , %d\n",a,b,a>b);
	printf("%d<=%d , %d\n",a,b,a<=b);
	printf("%d>=%d , %d\n",a,b,a>=b);
	printf("%d%%%d , %d",a,b,a%b);
	return 0;
}
