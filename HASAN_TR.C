#include<stdio.h>
#include<conio.h>
#include<math.h>

#define M 10007
void main()
{
int n;
int x[100],y[100],f[100];

int testcase,i,j;
double k;
clrscr();
scanf("%d",&testcase);
while(testcase--)
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&f[i]);
	}

	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			k=k+(double)f[i]-sqrt(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));//using formula for distance between two points here
		}
	}
}
printf("%.6f",k);
getch();
}
