#include <iostream>
using namespace std;
int main()
{
    int matrix0[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matrix2[3][3] = {};

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matrix0[i][j] << " ";
        }
        cout << endl;
    }

    printf("----matrix mutiplication----\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                matrix2[i][j] += matrix0[i][k] * matrix1[k][j];
            }
        }
        cout << endl;
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    printf("----memcpy----\n");

    int matrix_in[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matrix_out[3][3] = {};

    memcpy(&matrix_out, &matrix_in, sizeof(matrix_in));
    for (int i=0; i < 3; ++i)//초기화 늘 하자...!
    {
        for (int j=0; j < 3; ++j)
        {
            cout << matrix_out[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << endl;
}
