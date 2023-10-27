#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Fungsi untuk mencetak array sebelum diurutkan
void printArray(const vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// BubbleSort dengan input dari file eksternal atau file input
void BubbleSort(vector<int>& arr)
{
    bool swap = false;

    while (!swap)
    {
        swap = true;
        for (int j = 1; j < arr.size(); j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap = false;
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    printArray(arr);
}

int main()
{
    string filename;
    cout << "Masukkan nama file: ";
    cin >> filename;
    ifstream file;
    file.open(filename);

    vector<int> arr; // Menggunakan vector untuk menyimpan data dari file

    int number;
    while (file >> number) 
    {
        arr.push_back(number); // Memasukkan data dari file ke vector
    }

    cout << "\nData sebelum diurutkan: " << endl;
    printArray(arr);

    cout << "\n\nData setelah diurutkan: " << endl;
    BubbleSort(arr);

    return 0;
}
