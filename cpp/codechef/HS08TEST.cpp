#include <cstdio>

using namespace std;

int main()
{	
	int a;
	float b, c;
	scanf("%d %f", &a, &b);
	if( (a+(0.5)<= b) && (a%5==0))
	{
		c = b - a - 0.5;
	}
	else
	{
		c = b;
	}
	printf("%.2f\n", c);
	return 0;
}
