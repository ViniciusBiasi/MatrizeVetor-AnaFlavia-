#include <iostream>
using namespace std;
int main ()
{
	int n[10],i,x;
	cout<<"x:";
	cin>>x;
	for (i=0;i<10;i++)
	{
		cout<<"N�meros:"<<endl;
		cin>>n[i];
	}
	
	for (i=0;i<10;i++)
	{
		if (n[i]==x)
		{
			cout<<"Existe."<<endl;
			break;
		}
	}
	
	if (i==10)
	{
		cout<<"N�o existe.";
	}
}
