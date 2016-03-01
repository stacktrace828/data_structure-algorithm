#include <iostream>
using namespace std;

void Insertion_Sort(int A[], int n)
{
    for (int p = 1; p < n; p++)
    {
        int i, Tmp = A[p];
        for (i = p - 1; i >= 0 && Tmp < A[i]; i--)
        {
            A[i + 1] = A[i];
        }
        A[i + 1] = Tmp;
    }
}

int main()
{
    int A[] = {3, 5, 1, 10, 2};
    Insertion_Sort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
