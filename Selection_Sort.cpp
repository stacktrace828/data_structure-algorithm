#include <iostream>
using namespace std;

void Selection_Sort(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j, min = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        swap(A[min], A[i]);
    }
}
void swap(int m, int n)
{
    int Tmp = m;
    m = n;
    n = Tmp;
}

int main()
{
    int A[] = {3, 5, 1, 10, 2};
    Selection_Sort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}


