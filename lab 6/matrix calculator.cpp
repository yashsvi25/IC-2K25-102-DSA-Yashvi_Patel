#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, r2, c2, choice;

    do
    {
        cout << "\n\n--- MATRIX CALCULATOR ---";
        cout << "\n1. Addition";
        cout << "\n2. Multiplication";
        cout << "\n3. Transpose";
        cout << "\n4. Determinant";
        cout << "\n5. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter rows and columns: ";
                cin >> r >> col;

                cout << "Enter first matrix:\n";
                for(int i = 0; i < r; i++)
                    for(int j = 0; j < col; j++)
                        cin >> a[i][j];

                cout << "Enter second matrix:\n";
                for(int i = 0; i < r; i++)
                    for(int j = 0; j < col; j++)
                        cin >> b[i][j];

                for(int i = 0; i < r; i++)
                    for(int j = 0; j < col; j++)
                        c[i][j] = a[i][j] + b[i][j];

                cout << "Addition:\n";
                for(int i = 0; i < r; i++)
                {
                    for(int j = 0; j < col; j++)
                        cout << c[i][j] << " ";
                    cout << endl;
                }
                break;

            case 2:
                cout << "Enter rows and columns of first matrix: ";
                cin >> r >> col;

                cout << "Enter rows and columns of second matrix: ";
                cin >> r2 >> c2;

                if(col != r2)
                {
                    cout << "Multiplication not possible";
                    break;
                }

                cout << "Enter first matrix:\n";
                for(int i = 0; i < r; i++)
                    for(int j = 0; j < col; j++)
                        cin >> a[i][j];

                cout << "Enter second matrix:\n";
                for(int i = 0; i < r2; i++)
                    for(int j = 0; j < c2; j++)
                        cin >> b[i][j];

                for(int i = 0; i < r; i++)
                {
                    for(int j = 0; j < c2; j++)
                    {
                        c[i][j] = 0;

                        for(int k = 0; k < col; k++)
                            c[i][j] += a[i][k] * b[k][j];
                    }
                }

                cout << "Multiplication:\n";
                for(int i = 0; i < r; i++)
                {
                    for(int j = 0; j < c2; j++)
                        cout << c[i][j] << " ";
                    cout << endl;
                }
                break;

            case 3:
                cout << "Enter rows and columns: ";
                cin >> r >> col;

                cout << "Enter matrix:\n";
                for(int i = 0; i < r; i++)
                    for(int j = 0; j < col; j++)
                        cin >> a[i][j];

                cout << "Transpose:\n";
                for(int j = 0; j < col; j++)
                {
                    for(int i = 0; i < r; i++)
                        cout << a[i][j] << " ";
                    cout << endl;
                }
                break;

            case 4:
                cout << "Enter order of square matrix (1-3): ";
                cin >> r;

                if(r < 1 || r > 3)
                {
                    cout << "Only order 1 to 3 supported";
                    break;
                }

                cout << "Enter matrix:\n";
                for(int i = 0; i < r; i++)
                    for(int j = 0; j < r; j++)
                        cin >> a[i][j];

                if(r == 1)
                    cout << "Determinant = " << a[0][0];

                else if(r == 2)
                    cout << "Determinant = "
                         << a[0][0]*a[1][1] -
                            a[0][1]*a[1][0];

                else
                {
                    int det =
                    a[0][0]*(a[1][1]*a[2][2] -
                             a[1][2]*a[2][1])
                    - a[0][1]*(a[1][0]*a[2][2] -
                               a[1][2]*a[2][0])
                    + a[0][2]*(a[1][0]*a[2][1] -
                               a[1][1]*a[2][0]);

                    cout << "Determinant = " << det;
                }
                break;
        }

    } while(choice != 5);

    return 0;
}
