#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

float matrizA [3][2];
float matrizB [2][3]; 
int i,j;

for (i=0;i<6;i++) {
   for (j=0; j<2; j++) {
   

cout << "Digite um número inteiro:"<<endl;
cin >> matrizA[i][j];
}
}

cout << " ____________MATRIZ A____________" <<endl;

for (i=0;i<6;i++) {
   for (j=0; j<2; j++) {

cout << matrizA[i][j] <<endl;
}

}

for (i=0;i<6;i++) {
   for (j=0; j<2; j++) {

matrizB[i][j]=matrizA[i][j];
}
}

cout << "_______________MATRIZ B___________" <<endl;

for (j=0;j<2;j++) {
   for (i=0; i<6; i++) {

cout << matrizB[i][j] <<endl;
}

}
cout << " ____________________________________"<<endl;
}
