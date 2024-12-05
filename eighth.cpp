// First hw (Veri Yapıları).cpp 
//Ad / SoyAd : MUAZ BWIDANI
//Öğrenci Num : 1306190101

#include <iostream>
#include <time.h>
using namespace std;
#define MAX 100
int top;
int a[MAX];
bool push(int x)
{
    if (top >= (MAX - 1))
    {
        
        return false;
    }
    else
    {
        a[++top] = x;
       
        return true;
    }
}
int pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
bool isEmpty()
{
    return (top < 0);
}
void main()
{
    int x,y,z=0;
    srand((unsigned)time(NULL));
    for (int i = 1; i <= 1000; i++)
    {
        x = rand();
        cout << i;
        printf(" %d\n", x);
        push(x);
    }
    cout << "Enter the element you want to search" << endl;
    cin >> y;
    for (int i = 1; i <= 100; i++)
    {
        if (isEmpty() == false)
        {
            x = pop();
            if (x == y)
                z++;
        }
       

    }
    if (z == 0)
        cout << "The number is not exist" << endl;
    else
        cout << "you have " << z << "   number" << endl;
    
}

