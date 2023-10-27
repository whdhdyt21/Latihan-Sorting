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

// BubbleSort dengan input dari user dan tampilan ketika proses pengurutan
void BubbleSort(int arr[], int n)
{
    bool swap = false;

    while (!swap)
    {
        swap = true;
        for (int j = 1; j < n; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap = false;
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;

                // Tampilan ketika proses pengurutan
                printArray(arr, n);
            }
        }
    }
    printArray(arr, n);
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

    cout << "\n\nData setelah diurutkan : " << endl;
    BubbleSort(arr, n);

    return 0;
}
