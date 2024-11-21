// CSC 134
// M4LAB1
// N'Ky Benjamin
// 10/12/24

#include <iostream>

using namespace std;

int main()
{
    int height, width;
    height = 5;
    width = 5;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}