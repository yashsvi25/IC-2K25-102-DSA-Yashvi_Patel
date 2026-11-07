#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], s[100][3];
    int r, c, k = 1;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter first matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> b[i][j];

    s[0][0] = r;
    s[0][1] = c;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            int sum = a[i][j] + b[i][j];

            if(sum != 0)
            {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = sum;
                k++;
            }
        }
    }

    s[0][2] = k - 1;

    cout << "\nResult in Triple Form:\n";

    for(int i = 0; i < k; i++)
        cout << s[i][0] << " "
             << s[i][1] << " "
             << s[i][2] << endl;

    return 0;
}
