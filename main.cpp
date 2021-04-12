#include <iostream>
using namespace std;

int main()
{
    /* Decalarative region*/
    int rows,cols,i,j;
    int matrixone[100][100],matrixtwo[100][100],summatrix[100][100];
    /* Declaration of rows and columns */
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter Number of cols: ";
    cin>>cols;
    /* first matrix */
    cout<<"Enter matrix One"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>matrixone[i][j];
        }
    }
    /* Second matrix*/
    cout<<"Enter matrix Two"<<endl;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cin >> matrixtwo[i][j];
            }
    }
    /* adding two matrix*/
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            summatrix[i][j] = matrixone[i][j] + matrixtwo[i][j];
        }
    }
    /* Output */
    cout <<"Sum Matrix\n";
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cout << summatrix[i][j] << " ";
        }
        cout << "\n";
    }
return 0;
}
