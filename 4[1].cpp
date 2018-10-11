#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

  int n=3; // ordem da matriz quadrada
  int i, j, m[n][n]; // matriz quadrada


  for (i=0; i<n; i++)
    cout << "Informe os elementos da da linha:" <<i+1<<endl;
	 
    for (j=0; j<n; j++) {
      cout << "  " <<m[i][j]<<endl;
      cin >> m[i][j];
    }  
  

  int ehidentidade = 1;
  for (i=0; (i<n)&&(ehidentidade==1); i++) {
    for (j=0; (j<n)&&(ehidentidade==1); j++) {

      if ((i == j) && (m[i][j] != 1))
	       ehidentidade = 0; 

      else if ((i != j) && (m[i][j] != 0))
              ehidentidade = 0; 
    }
  }

  for (i=0; i<n; i++) {
    cout<<i+1<< " da linha:" <<endl;
    for (j=0; j<n; j++) {
      cout << "            " <<m[i][j] <<endl;
    }
  }

  if (ehidentidade == 1)
      cout <<"A matriz informada eh uma matriz identidade."<<endl;
  else  cout <<"A matriz informada nao é uma matriz identidade."<<endl;
}
	

