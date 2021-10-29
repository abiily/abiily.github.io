#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(double x)
{
	double fx;
	fx=(exp(-x)-x);
	return fx;
}
int main()
{
	float a, b, e, y1, y2, y3, xr;
	int it=0, N;
	printf("Nama	: Muhammad Abi Prakosa\n");
	printf("NPM	: 20081010232\n");
	printf("Kelas	: F081\n");
	printf("\n\n");
	printf("Metode Regula Falsi dengan fungsi f(x)=e^-x - x");
	printf("\n\n");
	printf("Masukkan nilai batas bawah	: ");
	scanf("%f", &a);
	printf("Masukkan nilai batas atas	: ") ;
	scanf("%f", &b);
	printf("Masukkan nilai toleransi error	: ") ;
	scanf("%f", &e) ; 
	printf("Jumlah iterasi	:");
	scanf("%f", &N);
	y1=f(a);
	y2=f(b);
	
	if(y1*y2>0)
	printf("f(a)* f(b)>0 maka tidak ada akar \n");
	else
	{
		printf("----------------------------------------------------------------------------------------------");
		printf("\n\It. \ta \t\tb \t\txr \t\tf(a) \t\tf(b) \t\tError \n");
		printf("----------------------------------------------------------------------------------------------\n");
	}
	do 
	{
		it=it+1;
		xr=((f(b)*a)-(f(a)*b))/(f(b)-f(a)); 
		y3=f(xr);
		printf("%d   |\%f|      |%f|      |%f|       |%f|     |%f|      |%f|\n", it, a, b, xr, f(a), f(b), fabs(f(xr))); 
		if(f(xr)*f(a)<0)
		{
			b=xr; 
			y2=y3;
		}
		else
		{
			a=xr; 
			y1=y3;
		}
	}
	while(it<=N && fabs(f(xr))>e);
	if(it<=N)
	{
		printf("\nAkar yang diperoleh	: %f", xr);
		printf("\nToleransi error	: %f", fabs(f(xr)));
		printf("\n\n");
		system("pause");
	}
}
