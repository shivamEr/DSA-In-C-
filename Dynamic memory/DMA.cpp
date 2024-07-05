#include <iostream>
using namespace std;

int main()
{
    int *a = new int;
    *a = 10;
    cout << *a << endl;

    float *b = new float;
    *b = 10.5;
    cout << *b << endl;

    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // deallocation of dynamicly allocated memory
    delete a;
    delete b;
    delete[] arr;

    // How to create a 2D array dynamically
    int **arr2D = new int *[4];

    for (int i = 0; i < 5; i++)
    {
        arr2D[i] = new int[5];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr2D[i][j] = i + j;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    // deallocation of 2D array
    for (int i = 0; i < 4; i++)
    {
        delete arr2D[i]; // deallocate the 2D part of 1D
    }
    delete[] arr2D; // deallocate 1D of @D
    

    return 0;
}