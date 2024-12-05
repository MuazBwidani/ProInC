// Array HM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void print(int array[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
}
void swap(int* po1, int* po2)
{
    int temp = *po1;
    *po1 = *po2;
    *po2 = temp;
}
void sort(int array[],int n)
{
    int* po1 = array;
    int* po2 = array;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j< n-i; j++)
        {
            po1 = &array[j];
            po2 = &array[j + 1];
            
            if (*po1 < *po2)
            {
               
                swap(po1,po2);
            }
        }
        

    }
}
int main()
{
    int arr[10]{};
    cout << "Pleas enter 10 number" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    print(arr, 10);
    sort(arr, 10);
    cout << endl;
    print(arr, 10);
  
}

