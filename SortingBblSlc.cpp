#include <iostream>
using namespace std;

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai ke-" << i+1 << " : ";
        cin >> arr[i];
    }
    cout << "-----------------------------------------" << endl;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[], int n)
{
    bool swap = false;

    while (!swap)
    {
        swap = true;
        for (int j = 1; j < n; j++)
        {
            printArray(arr, n);
            if (arr[j-1] > arr[j])
            {
                cout << "Pertukaran : ";
                swap = false;
                int temp = arr[j];
                arr [j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

void SelectionSort(int arr[], int n)
{
    int i = 0;
    while (i != n)
    {
        for (int j = i+1; j < n; j++)
        {
            printArray(arr, n);
            if (arr[i] > arr[j])
            {
                cout << "Pertukaran : ";
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }i++;
    }
}

void menuSorting(int arr[], int n)
{
    int metode;
    cout << "Pilih metode sorting yang akan digunakan\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Exit\n";
    cout << "Pilihan : ";
    cin >> metode;
    cout << "-----------------------------------------\n";
    cout << "-----------------------------------------\n";
    switch (metode)
    {
    case 1:
        cout << "Proses Bubble Sort : \n";
        BubbleSort(arr, n);
        cout << "-----------------------------------------\n";
        cout << "Data setelah diurutkan : ";
        printArray(arr, n);
        cout << "-----------------------------------------\n";
        break;
    case 2:
        cout << "Proses Selection Sort : \n";
        SelectionSort(arr, n);
        cout << "\n-----------------------------------------\n";
        cout << "Data setelah diurutkan : ";
        printArray(arr, n);
        cout << "-----------------------------------------\n";
        break;
    case 3:
        cout << "Terima kasih telah menggunakan program ini\n";
        cout << "-----------------------------------------\n";
        break;
    default:
        cout << "Pilihan tidak tersedia\n";
        cout << "-----------------------------------------\n";
        break;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "\n-----------------------------------------\n";
    cout << "-------------Program Sorting-------------\n";
    cout << "-----------------------------------------\n";
    cout << "Masukkan banyaknya data : ";
    cin >> n;
    cout << "\n-----------------------------------------\n";
    int arr[n];
    inputArray(arr, n);
    cout << "Data sebelum diurutkan : ";
    printArray(arr, n);
    cout << "-----------------------------------------\n";
    menuSorting(arr, n);
    return 0;
}