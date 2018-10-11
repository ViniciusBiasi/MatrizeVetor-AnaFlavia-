#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int a[3][3],b[3][3],c[3][3],i,j,x,soma,k;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<"Matriz A elemento ["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		}
	}
	cout<<endl;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<"Matriz B elemento ["<<i<<"] ["<<j<<"] :";
			cin>>b[i][j];
		}
	}
	cout<<endl;
	cout<<"Digite 0 para parar:"<<endl;
	cout<<"1- Calcular a subtração das duas matrizes"<<endl;
	cout<<"2- Calcular a multiplicação das duas matrizes:"<<endl;
	cout<<"3- Determinar se as duas matrizes são triangular superior"<<endl;
	cout<<"4- Determinar se as duas matrizes são triangular inferior"<<endl;
	cout<<"5- Determinar se as duas matrizes são simétricas:"<<endl;
	cout<<"6- Determinar se as duas matrizes são anti-simétricas:"<<endl;
	cout<<"7- Determinar se as duas matrizes são iguais:"<<endl;
	cout<<"8- Determinar se as duas matrizes são ortogonais:"<<endl;
	cin>>x;
	while (x!=0)
	{
		if (x==1)
		{
			for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
						c[i][j]=a[i][j]-b[i][j];
				}
			}
			cout<<endl;
			for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					cout<<c[i][j]<<"  ";
				}
				cout<<endl;
			}
		}
		
		if (x==2)
		{
			for (i=0;i<3;i++)
			{
				for (j=0;k<3;j++)
				{
					for (k=0;k<3;k++)
					{
						c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
					}
				}
			}
			
			for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					cout<<c[i][j];
				}
				cout<<endl;
			}
		}
			
		if (x==3)
		{
			soma=0;
			for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					if (j<i)
					{
						if (a[i][j]==0 && b[i][j]==0)
						{
							soma++;
						}
					}
				}
			}
					
			if (soma==3)
			{
				cout<<"São triangulares superior."<<endl;
			}
					
			else 
			{
				cout<<"Não são triângulares superior."<<endl;
			}
		}
		
		if (x==4)
		{
			soma=0;
			for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					if (i<j)
					{
						if (a[i][j]==0 && b[i][j]==0)
						{
							soma++;
						}
					}
				}
			}
					
			if (soma==3)
			{
				cout<<"São triangulares inferiores."<<endl;
			}
					
			else 
			{
				cout<<"Não são triângulares inferiores."<<endl;
			}
		}
		
		if (x==5)
		{
			soma=0;
			for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					if (a[j][i]==a[i][j] && b[j][i]==b[i][j])
					{
						soma++;
					}
				}
			}
			cout<<endl;
			if (soma==9)
			{
				cout<<"São simétricas"<<endl;
			}
			else 
			{
				cout<<"Não são simétricas"<<endl;
			}
		}
		
		if (x==6)
		{
			soma=0;
			for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					if (a[j][i]==-a[i][j] && b[j][i]==-b[i][j])
					{
						soma++;
					}
				}
			}
			cout<<endl;
			if (soma==9)
			{
				cout<<"São anti-simétricas"<<endl;
			}
			else 
			{
				cout<<"Não são anti-simétricas"<<endl;
			}
		}
		
		if (x==7)
		{
			soma=0;
			for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					if (a[i][j]==b[i][j])
					{
						soma++;
					}
				}
			}
			cout<<endl;
			if (soma==9)
			{
				cout<<"São iguais."<<endl;
			}
			else 
			{
				cout<<"Não são iguais."<<endl;
			}
		}
		
		if (x==8)
		{
			soma=0;
			for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					if (a[j][i]==-a[i][j] && b[j][i]==-b[i][j])
					{
						soma++;
					}
				}
			}
			if (soma==9)
			{
				cout<<"São ortogonais."<<endl;
			}
			else
			{
				cout<<"Não são ortogonais."<<endl;
			}
		}
		
		
		cout<<endl;
		cout<<"Digite 0 para parar:"<<endl;
		cout<<"1- Calcular a subtração das duas matrizes"<<endl;
		cout<<"2- Calcular a multiplicação das duas matrizes:"<<endl;
		cout<<"3- Determinar se as duas matrizes são triangular superior"<<endl;
		cout<<"4- Determinar se as duas matrizes são triangular inferior"<<endl;
		cout<<"5- Determinar se as duas matrizes são simétricas:"<<endl;
		cout<<"6- Determinar se as duas matrizes são anti-simétricas:"<<endl;
		cout<<"7- Determinar se as duas matrizes são iguais:"<<endl;
		cout<<"8- Determinar se as duas matrizes são ortogonais:"<<endl;
		cin>>x;	
	}
}
