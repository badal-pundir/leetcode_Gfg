
#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {-1, 12, 1, 3, 5, 0};

    int n = 6;
    cout<<"Before arr[]: ";
    for (int k = 0; k < 6; k++)
        {
            cout << arr[k] << " ";
        }
    cout<<"\n\nProcess:\n";
    for (int i = 0; i < 6; i++)

    {

        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tem = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tem;
            }
        }

        for (int k = 0; k < 6; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout<<"\nAfter arr[]: ";
    for (int k = 0; k < 6; k++)
        {
            cout << arr[k] << " ";
        }
}