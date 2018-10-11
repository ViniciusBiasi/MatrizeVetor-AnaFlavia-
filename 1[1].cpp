#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
   int linhas,colunas, i, j;
   int somaDP, somaDS, calculaSD, somaLinhas, somaColunas;

   
   somaDP = 0; // soma da diagonal principal
   somaDS = 0; // soma da diagonal secundária
   int somainicial=0; //soma inicial de cada linha da matriz
   int verdadeiro=1; //verifica se a matriz e um quadrado mágico

   
   cout << "Entre com o numero de linhas: Exercício de ordem 3...." <<endl;
   cin >> linhas;
   cout << "Entre com o numero de colunas: Ordem 3...."  <<endl;
   cin >> colunas;
  
   int mat1[linhas][colunas];

      
       for (i=0; i<linhas; i++)
         for(j=0; j<colunas; j++)
         {
         cout << " Entre com os elementos da matriz 1:  ["<<i+1<<"]  ["<<j+1<<"] "<<endl;
         cin >> mat1[i][j];
         }      

               
              for (i=0; i<colunas; i++) 
              somainicial +=mat1[i][0]; 
              cout << "Soma da coluna 1: " <<somainicial <<endl;

             
              for (i=0; i<linhas; i++){
                  somaLinhas=0; 
                  for(j=0; j<colunas; j++) {
                      somaLinhas+= mat1[0][j];
                  }  
                  if(somaLinhas!=somainicial)
                      verdadeiro=0;
              }

              
              for (i=0; i<colunas; i++){
                  somaColunas=0; 
                  for(j=0; j<colunas; j++) {
                      somaColunas+= mat1[i][0];
                  }  
                  if(somaColunas!=somainicial)
                      verdadeiro=0;
              }

             
                  for (i=0; i<colunas; i++){
                  somaDP=0; 
                  for(j=0; j<colunas; j++) {

                           if (i==j)
                           somaDP += mat1[i][j];
                   }  
                  if(somaDP!=somainicial)
                      verdadeiro=0;
              }
               
              for (i=0; i<colunas; i++){
                  somaDS=0; 
                  for(j=colunas-1; j>-1; j--) {


                           somaDS += mat1[i][j];

                    
                  }  
                  if(somaDS!=somainicial)
                      verdadeiro=0;
              }

          
          if(verdadeiro==0) // 1
           cout << "Os elementos das diagonais (principal e secundária) são iguais...." <<endl;
          else
          cout << "Os elementos das diagonais (principal e secundária) NÃO são iguais...." <<endl;



            for (i=0; i<linhas; i++)
            {
               for(j=0; j<colunas;j++)
               cout << mat1[i][j];
               cout << "\n\n";
            }
              cout << "\n\n\n";
             
}
