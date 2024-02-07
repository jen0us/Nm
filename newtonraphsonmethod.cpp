//newton raphson method
#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) pow(x,3)-4*x+1
#define df(x) 3*x*x*x -4
int main()
{
	float x0,x1,f0,f1,df0;
	int i=0;
	printf("enter the value of x0: ");
	scanf("%f",&x0);
	do{
	f0=f(x0);
	df0=df(x0);
	x1=x0-(f0/df0);
	f1=f(x1);
	x0=x1;
	i++;
	printf("the number of iterations %d",i);
	printf("root %f",x1);
	printf("the value of funtion =%f\n",f1);
		
	}while(fabs(f1)>e);
	return 0;
	
}
