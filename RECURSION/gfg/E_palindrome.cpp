#include <bits/stdc++.h>

using namespace std;

int digit(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int rev(int &num)
{

    if (num / 10 == 0)
        return num;

    int last = num % 10;
    num /= 10;
    rev(num);
    int count = digit(num);
    num += last * pow(10, count);
    return num;
}

bool palin(int num)
{
    int temp = num;
    if (temp == rev(num))
        return true;

    else
        return false;
}
int main()
{
    int num = 13331;
    cout << palin(num);
    return 0;
}

// if we will fold the number (which is palindrome) from middle then it will match .
// so we can start from middle and then