#include <iostream>

using namespace std;

int main()
{
	int n;
	double a;
	int flag;
	flag=1;
	double sum=0;
	cin >> n;
	for(int i=0; i<n; i++)
	{

    a=(float)1*flag/(2*i+1);
    flag=-flag;
    sum=a+sum;
	}
    sum=4*sum;
	cout << sum<< endl;
	return 0;
}
