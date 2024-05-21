### Sorting Methods Using Bubble and Selection

This repository contains a simple C++ program that demonstrates two fundamental sorting algorithms: Bubble Sort and Selection Sort. The program allows users to input an array of integers, choose a sorting method, and see the sorting process step-by-step.

#### Features
- **Input Array**: Users can input an array of integers to be sorted.
- **Bubble Sort**: Implements the Bubble Sort algorithm, displaying each step of the sorting process.
- **Selection Sort**: Implements the Selection Sort algorithm, displaying each step of the sorting process.
- **Menu Interface**: Users can select which sorting method to use or exit the program.
- **Display Sorted Array**: The program displays the array before and after sorting.

#### Usage
1. **Clone the Repository**:
   ```sh
   git clone https://github.com/whdhdyt21/Sorting-Methods-Using-Bubble-and-Selection.git
   ```
2. **Compile the Program**:
   ```sh
   g++ main.cpp -o sorting
   ```
3. **Run the Program**:
   ```sh
   ./sorting
   ```

#### Example
Upon running the program, you will be prompted to enter the number of elements and the elements themselves. Then, you can choose between Bubble Sort and Selection Sort to see the sorting process in action.

#### Code Overview
- **inputArray**: Function to input elements into the array.
- **printArray**: Function to print the elements of the array.
- **BubbleSort**: Function implementing the Bubble Sort algorithm.
- **SelectionSort**: Function implementing the Selection Sort algorithm.
- **menuSorting**: Function providing a menu interface for choosing the sorting method.
- **main**: The main function driving the program.

#### Example Output
```
-----------------------------------------
-------------Program Sorting-------------
-----------------------------------------
Masukkan banyaknya data : 5

Masukkan nilai ke-1 : 3
Masukkan nilai ke-2 : 1
Masukkan nilai ke-3 : 4
Masukkan nilai ke-4 : 5
Masukkan nilai ke-5 : 2
-----------------------------------------
Data sebelum diurutkan : 3 1 4 5 2 
-----------------------------------------
Pilih metode sorting yang akan digunakan
1. Bubble Sort
2. Selection Sort
3. Exit
Pilihan : 1
-----------------------------------------
Proses Bubble Sort : 
3 1 4 5 2 
Pertukaran : 
1 3 4 5 2 
...
Data setelah diurutkan : 1 2 3 4 5 
-----------------------------------------
```

This project is a great resource for understanding and visualizing how Bubble Sort and Selection Sort algorithms work. Feel free to explore, modify, and use this code as a learning tool or a base for further development.
