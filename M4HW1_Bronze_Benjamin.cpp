// CSC 134
// M4HW1 (Gold)
// N'Ky Benjamin
// 10/12/24

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    // Bronze
    int firstNum;
    int answer;

    firstNum = 5;

    for (int i = 1; i <= 12; i++)
    {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
    }
    return 0;
}