//program design(2) Lab1 Q2

#include<iostream>
using namespace std;

int main()
{
	unsigned int n;

	cout<<"Please enter a integer number :\n"<<endl;
	cin>>n;

	cout<<n<<endl;

	while(n!=1)
	{
		if(n%2==1)
		{
			n=3*n+1;
			cout<<n<<endl;
		}

		n=n/2;
		cout<<n<<endl;
	}

	
	return 0;
}
