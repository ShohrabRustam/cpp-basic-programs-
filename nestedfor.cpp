#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a[10][10], b[10][10], s[10][10];
    int i,j,row, column;
    cout <<"Enter size of row:";
    cin >> row;
    cout <<"Enter size of column:";
    cin >> column;
    cout <<"Enter elements of matrix A" << endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cin >> a[i][j];
        }
    }
    cout <<"Enter elements of matrix B" << endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Sum of A and B" << endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cout << a[i][j] + b[i][j] << "   ";
        }
        cout << endl;
    }
    getch();
    return 0;
}