#include<iostream>
using namespace std;

void algo(long long  n)
{
	if(n <= 1){
		cout<<n<<" ";
	       	return;
	}
	
	if(n%2 == 0)
	{
		cout<<n<<" ";
		algo(n/2);
	}
	else
	{
		cout<<n<<" ";
		algo(n*3 + 1);
	}
}
int main()
{
	long long n;
	cin>>n;
	algo(n);
}

