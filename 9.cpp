#include <iostream>
using namespace std;
int main ()
{
	int a[3],b[3],c[6],i,j,aux;
	for (i=0;i<3;i++)
	{
		cout<<"Elemento A ["<<i<<"] :";
		cin>>a[i];
	}
	cout<<endl;
	for (i=0;i<3;i++)
	{
		cout<<"Elemento B ["<<i<<"] :";
		cin>>b[i];
	}
	cout<<endl;
	for (i=0;i<3;i++)
	{
		c[i]=a[i]; 	
	}
	
	for (i=3;i<6;i++)
	{
		c[i]=b[i-3];
	}
	
	for (i=0;i<3;i++)
	{
		
	}
	
	for (i=0;i<6;i++)
	{
		cout<<c[i]<<endl;
	}
	
}
