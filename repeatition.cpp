#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s;
	char c;

	cin>>s;
	int max = 1;int temp = 1;
	for(int i = 1 ; i<s.length() ; i++)
	{
		
		if(s.at(i-1) == s.at(i))
		{
			
			++temp;
		}
		else{
			
			if(temp>max)
			max = temp;

		temp = 1;
		}		
		if(temp>max)
			max = temp;
		
	}
	cout<<max;
}