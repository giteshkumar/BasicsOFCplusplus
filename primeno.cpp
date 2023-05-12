#include<iostream>
using namespace std;
int main()
{
	int a = 23;
	int b = 2;

	bool prime = true;
	while(b!=a)
	{	
		if(a%b == 0)
		{
			prime = false;
			break;
		}
		b++;
		}
if(prime)
cout<<"the no is prime"<<endl;
else cout<<"the number is not prime"<<endl;

return 0;
}

