#include <iostream>
using namespace std;

int main()
{
    int a[100], n, ch, pos, val, found;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> a[i];

    do
    {
        cout << "\n\n1. Insertion";
        cout << "\n2. Deletion";
        cout << "\n3. Searching";
        cout << "\n4. Display";
        cout << "\n5. Exit";

        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Enter position and value: ";
                cin >> pos >> val;

                if(pos<1 || pos>n+1 || n==100)
                {
                    cout << "Invalid position";
                    break;
                }

                for(int i=n; i>=pos; i--)
                    a[i] = a[i-1];

                a[pos-1] = val;
                n++;

                cout << "Element inserted";
                break;

            case 2:
                cout << "Enter position: ";
                cin >> pos;

                if(pos<1 || pos>n)
                {
                    cout << "Invalid position";
                    break;
                }

                for(int i=pos-1; i<n-1; i++)
                    a[i] = a[i+1];

                n--;

                cout << "Element deleted";
                break;

            case 3:
                cout << "Enter value to search: ";
                cin >> val;

                found=0;

                for(int i=0; i<n; i++)
                {
                    if(a[i]==val)
                    {
                        cout << "Element found at position " << i+1;
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    cout << "Element not found";

                break;

            case 4:
                cout << "Array elements: ";

                for(int i=0; i<n; i++)
                    cout << a[i] << " ";

                break;
        }

    } while(ch!=5);

    return 0;
}
