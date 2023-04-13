#include <iostream>
using namespace std;


void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai ke-" << i+1 << " : ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SelectionSort(int arr[], int n)
{
    int i = 0;
    while (i != n)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }i++;

    }printArray(arr, n);
}
    
int main(int argc, char const *argv[])
{
    int n;
    cout << "Masukkan banyaknya data : ";
    cin >> n;
    int arr[n];
    inputArray(arr, n);
    cout << "Data sebelum diurutkan : ";
    printArray(arr, n);
    cout << "Data setelah diurutkan : ";
    SelectionSort(arr, n);
    return 0;
}