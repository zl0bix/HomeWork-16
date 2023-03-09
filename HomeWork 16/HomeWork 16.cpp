#include <iostream>
#include<ctime>
#include<cstdlib>

int main(){
    double n = 0;
    int m = 0;
    setlocale(LC_ALL, "rus");
    std::cout << "\n\n\t\tHome work 16.1\n\n";//среднее арифметическое значение  одномерного массива
    
    const unsigned int size0 = 10;
    int arr0[size0];
    srand(time(NULL));
    
    for (int i = 0; i < size0; i++)
        arr0[i] = rand() % 30;
    
    std::cout << "Массив: \n";
   
    for (int i = 0; i < size0; i++) {
        std::cout << arr0[i] << ' ';
        n += arr0[i];
    }
    std::cout << "\n\nСреднее арефметическое значение эл-ов массива = " << n / size0 ;

    std::cout << "\n\nЭлeменты меньше сред. арифм.: ";
    for (int i = 0; i < size0; i++) {
       
        if (arr0[i] < n / size0) {
            m++;
            std::cout << arr0[i] << ' ';        
        }
    }
    std::cout << std::endl;
    std::cout << "\nИх количество: " <<m;

    std::cout << "\n\n\t\tHome work 16.2\n\n";//двумерные массивы
    
    const unsigned int size1 = 5;
    int arr1[size1][size1];
    int arr2[size1][size1];

    for (int i = 0; i < size1; i++) 
        for (int j = 0; j < size1; j++)
            arr1[i][j] = rand() % 100;
    std::cout << "\nИзначальный массив 1: \n\n";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1; j++)
            std::cout << arr1[i][j] << "\t";
        std::cout << std::endl;
    }
    
    for (int i = 0; i < size1; i++) 
        for (int j = 0; j < size1; j++)
            arr2[i][j] = rand() % 220;
    
    std::cout << "\nИзначальный массив 2: \n\n";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1; j++)
            std::cout << arr2[i][j] << "\t";
        std::cout << std::endl;
    }

    std::cout << "\nСумма масивов: \n\n";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1; j++)
            std::cout << arr1[i][j] + arr2[i][j] << "\t";
        std::cout << std::endl;
    }

    std::cout << "\n\n\t\tHome work 16.3\n\n";//6 значное число -> массив
    std::cout << "Введите шести значное число -> ";
    std::cin >> m;
    const int size3 = 6;
    int arr3[size3];
    if (m > 99999 && m < 1000000) {
        int k = 1000000;
        for (int i = 0; i < size3; i++) {
           
            arr3[i] = m % k << ' ';
            k /= 10;
            if (k == 1) {
                arr3[i] = m / 10;
                std::cout << arr3[i] << ' ';
            }
            else
            std::cout << arr3[i] << ' ';
        }
    }
    else
        
    std::cout << std::endl;
        return 0;
}

