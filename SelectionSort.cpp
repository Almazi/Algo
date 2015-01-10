#include <iostream>
using namespace std;

int SelectionSort(int a[], int n)
{
    int i , j, minIndex, temp;
    for(i = 0; i < n - 1; i++)
    {
        minIndex = i;
        cout <<"value of i >> " <<i<<endl;
        for(j = i+1; j < n ; j++)
        {
            cout <<"value of j: " <<j<<endl;
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;

    }

}

int main()
{
    int i, n;
    cout <<"How many terms you want to sort?" << endl;
    cin >> n;
    int a[n];

    cout << "Please input " <<n<<" terms: " << endl;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    SelectionSort(a,n);
   cout << "The Selection Sorted list: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";

    }

}
