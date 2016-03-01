#include <iostream>
using namespace std;

void Shell_Sort(int A[], int n)
{
    for (int d = n / 2; d > 0; d /= 2)
    {
        for (int p = d; p < n; p++)
        {
            int i, Tmp = A[p];
            for (i = p; i >= d && A[i - d] > Tmp; i -= d)
            {
                A[i] = A[i - d];
            }
            A[i] = Tmp;
        }
    }
}

int main()
{
    int A[] = {3, 5, 1, 10, 2};
    Shell_Sort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
