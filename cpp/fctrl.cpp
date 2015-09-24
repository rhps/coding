#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i=0; i< t; i++)
	{
		int n;
		scanf("%d", &n);

		int c = 0;
		while(n >=5)
		{
			n=n/5;
			c=c+n;
		}
		printf("%d\n", c);
	}

	return 0;
}
