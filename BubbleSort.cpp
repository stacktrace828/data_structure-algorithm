#include <iostream>
using namespace std;

void Bubble_Sort(int A[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        int flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                flag = 0;
            }
        }
        if (flag)
        {
            break;
        }
    }
}
void swap(int m, int n)
{
    int t = m;
    m = n;
    n = t;
}

int main()
{
    int A[] = {3, 5, 1, 10, 2};
    Bubble_Sort(A, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
