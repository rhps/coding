#include <string.h>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	double x[] = {2.0, 5.0, 4.0, 1.0, 7.0, 2.0, 2.0, 3.0};
	int N = sizeof(x)/sizeof(double);

	for(int i = 0; i < N; i++)
	{
		cout << x[i] << endl;
	}
	return 0;	
}
