#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

//angka random berdasarkan jumlah input user

int main() 
{
    int n;
    cout << "Masukkan banyaknya data : ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }

    random_device rd;
    mt19937 g(rd());

    shuffle(arr.begin(), arr.end(), g);

    //cetak angka random dengan spasi

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
