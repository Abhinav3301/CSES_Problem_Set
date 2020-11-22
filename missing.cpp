#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>a;
	for(int i = 1 ; i<=n;i++)
		a.push_back(i);

	vector<int>b;
	for(int i = 1;i<n;i++)
	{
		int k;
		cin>>k;
		b.push_back(k);
	}
	sort(b.begin() , b.end());
	for(int i = 0 ; i<n; i++)
	{
		if(i>=n) break;
		if(a[i]!=b[i]) 
		{
			cout<<a[i];
			break;
		}
	}
}


