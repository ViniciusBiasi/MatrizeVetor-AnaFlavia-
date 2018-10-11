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
	cout<<"1- Calcular a subtra��o das duas matrizes"<<endl;
	cout<<"2- Calcular a multiplica��o das duas matrizes:"<<endl;
	cout<<"3- Determinar se as duas matrizes s�o triangular superior"<<endl;
	cout<<"4- Determinar se as duas matrizes s�o triangular inferior"<<endl;
	cout<<"5- Determinar se as duas matrizes s�o sim�tricas:"<<endl;
	cout<<"6- Determinar se as duas matrizes s�o anti-sim�tricas:"<<endl;
	cout<<"7- Determinar se as duas matrizes s�o iguais:"<<endl;
	cout<<"8- Determinar se as duas matrizes s�o ortogonais:"<<endl;
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
				cout<<"S�o triangulares superior."<<endl;
			}
					
			else 
			{
				cout<<"N�o s�o tri�ngulares superior."<<endl;
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
				cout<<"S�o triangulares inferiores."<<endl;
			}
					
			else 
			{
				cout<<"N�o s�o tri�ngulares inferiores."<<endl;
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
				cout<<"S�o sim�tricas"<<endl;
			}
			else 
			{
				cout<<"N�o s�o sim�tricas"<<endl;
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
				cout<<"S�o anti-sim�tricas"<<endl;
			}
			else 
			{
				cout<<"N�o s�o anti-sim�tricas"<<endl;
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
				cout<<"S�o iguais."<<endl;
			}
			else 
			{
				cout<<"N�o s�o iguais."<<endl;
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
				cout<<"S�o ortogonais."<<endl;
			}
			else
			{
				cout<<"N�o s�o ortogonais."<<endl;
			}
		}
		
		
		cout<<endl;
		cout<<"Digite 0 para parar:"<<endl;
		cout<<"1- Calcular a subtra��o das duas matrizes"<<endl;
		cout<<"2- Calcular a multiplica��o das duas matrizes:"<<endl;
		cout<<"3- Determinar se as duas matrizes s�o triangular superior"<<endl;
		cout<<"4- Determinar se as duas matrizes s�o triangular inferior"<<endl;
		cout<<"5- Determinar se as duas matrizes s�o sim�tricas:"<<endl;
		cout<<"6- Determinar se as duas matrizes s�o anti-sim�tricas:"<<endl;
		cout<<"7- Determinar se as duas matrizes s�o iguais:"<<endl;
		cout<<"8- Determinar se as duas matrizes s�o ortogonais:"<<endl;
		cin>>x;	
	}
}
