#include <stdio.h>
#include <math.h>

int calculateDiscriminant(int A,int B,int C);
void instruct();
float calculateRoots(int A,int B,int C,int disc,float root1,float root2);

int main (void)
{
	int a,b,c,disc;
	inst();
	
	scanf("%d,%d,%d",&a,&b,&c);
	disc = discri(a,b,c);
	calculateRoots(a,b,c,dis)
}

void instruct()
{
	printf("This program solves quadratic equations of the form 𝑎𝑥2 + 𝑏𝑥 + 𝑐 = 0 using user given inputs.Please insert the coefficients one by one.");
}

int calculateDiscriminant(int A,int B, int C)
{
	return B*B - 4*A*C;
}

float calculateRoots(int A,int B,int C,int disc,)
{
	float root1,float root2;
	root1 = (-B + (sqrt(disc)))/(2*A);
	root2 = (-B - (sqrt(disc)))/(2*A);

	printf("Root 1 is %.2f and root 2 is %.2f",root1,root2);
}
