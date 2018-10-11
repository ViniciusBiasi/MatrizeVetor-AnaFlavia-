#include <iostream>
using namespace std;
int main ()
{
	float n[10],m,soma;
	int j,i;
	soma=0;
	for (i=0;i<10;i++)
	{
		cout<<"Nota:"<<endl;
		cin>>n[i];
		soma=soma+n[i];
	}
	m=soma/i;
	j=0;
	for (i=0;i<10;i++)
	{
		if (n[i]>m)
		{
			j++;
		}
	}
	cout<<"Acima da média:"<<j<<endl;
}
