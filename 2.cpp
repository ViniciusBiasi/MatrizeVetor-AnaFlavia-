#include <iostream>
using namespace std;
int main ()
{
	int i,j,n[50],aux;
	for (i=0;i<50;i++)
	{
		cout<<"Numero:"<<endl;
		cin>>n[i];
	}
	
	for (i=0;i<24;i++)
	{
		aux=n[i];
		n[i]=n[49-i];
		n[49-i]=aux;
	}
	
	cout<<endl;
	for (i=0;i<50;i++)
	{
		cout<<n[i]<<endl;
	}
	
}
