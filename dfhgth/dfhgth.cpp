
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{   //1
    /*int N;
    cout << "N: ";
    cin >> N;

    if (N % 2 != 0)
        N++;

    int a[25];

    for (int i = 0; i < 25; i++) {
        a[i] = N + i * 2;
        cout << a[i] << endl;
    }*/
    //2
    /*int a[100];
    int X;
    int count = 0;

    for (int i = 0; i < 100; i++) {
        a[i] = rand() % 201 - 100;
    }

    cout << "X: ";
    cin >> X;

    for (int i = 0; i < 100; i++) {
        if (a[i] == X)
            count++;
    }

    if (count > 0)
        cout << "num" << X << " appears " << count << " times." << endl;
    else
        cout << "num" << X << " is not present in the array." << endl;*/
//3
    int a[20];

    a[0] = 0;
    a[1] = 1;

    for (int i = 2; i < 20; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    for (int i = 0; i < 20; i++) {
        cout << a[i] << " ";
    }
}