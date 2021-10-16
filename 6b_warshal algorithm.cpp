#include <iostream>
using namespace std;
class warshall
{
    int n, a[10][10];

public:
    void read_data();
    void write_data();
    void path_matrix();
};
void warshall::read_data()
{
    int i, j;
    cout << "Enter the number of nodes" << endl;
    cin >> n;
    cout << "Enter the adjacency matrix" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void warshall::write_data()
{
    int i, j;
    cout << "The path matrix is shown bellow" << endl;
    for (i = 0; i < n; i++)
    {
        /* code */
        for (j = 0; j < n; j++)
        {
            /* code */
            cout << a[i][j] << "\t";
            cout << endl;
        }
    }
}
void warshall::path_matrix()
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        /* code */
        for (j = 0; j < n; j++)
        {
            /* code */
            for (k = 0; k < n; k++)
            {
                if ((a[i][k] == 1) && (a[k][j] == 1))
                    a[i][j] = 1;
            }
        }
    }
}
int main()
{
    warshall w;
    w.read_data();
    w.path_matrix();
    w.write_data();
}