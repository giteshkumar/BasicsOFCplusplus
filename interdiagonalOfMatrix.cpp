#include <iostream>

using namespace std;

int main ()

{

    static int array[10][10];

    int i, j, m, n, a;


    cout<<"Enter the order of the matix \n";

    cin>>m;

    cin>>n;

    if (m == n)

    {

        cout<<"Enter the co-efficients of the matrix\n";

        for (i = 0; i < m; ++i)

        {

            for (j = 0; j < n; ++j)

            {

                cin>>array[i][j];

            }

        }

        cout<<"The given matrix is \n";

        for (i = 0; i < m; ++i)

        {

            for (j = 0; j < n; ++j)

            {

                cout<<" "<<array[i][j];

            }

            cout<<"\n";

        }

        for (i = 0; i < m; ++i)

        {

            a = array[i][i];

            array[i][i] = array[i][m - i - 1];

            array[i][m - i - 1] = a;

        }

        cout<<"The matrix after changing the \n";

        cout<<"main diagonal & secondary diagonal\n";

        for (i = 0; i < m; ++i)

        {

            for (j = 0; j < n; ++j)

            {

                cout<<" "<<array[i][j];

            }

            cout<<"\n";

        }

    }

    else

        cout<<"The given order is not square matrix\n";

}


