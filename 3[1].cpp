#include <iostream>
using namespace std;
int main() {
    int mat1[3][3], mat2[3][3], mat3[3][3];
 
    cout << "Preencha a matriz 1" << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2;j++)
        {
            cout << "Insira o elemento da " << i+1 << "ª linha, " << j+1 << "ª coluna: ";
            cin >> mat1[i][j];
        }
    }
 
    cout << "Preencha a matriz 2" << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2;j++)
        {
            cout << "Insira o elemento da " << i+1 << "ª linha, " << j+1 << "ª coluna: ";
            cin >> mat2[i][j];
        }
    }
 
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
 
    cout << "Matriz resultante" << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout<< "mat3[" << i+1 << "][" << j+1 << "] = " << mat3[i][j] << endl;
        }
    }
}
