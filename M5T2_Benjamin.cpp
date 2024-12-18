// CSC 134
// M5T2
// N'Ky Benjamin
// 10/23/2024

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void printResult(int number, int result)
{
    cout << number << " squared is " << result << endl;
}

int square(int number)
{
    int result;
    result = number * number;
    return result;
}

int main()
{
    int count = 1;
    int result;

    while (count <= 10)
    {
        result = square(count);
        printResult(count, result);
        count++;
    }

    return 0;


}
