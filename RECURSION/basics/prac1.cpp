// C++ recursive function to
// solve tower of hanoi puzzle
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod,
                  char to_rod, char aux_rod, int &count)
{
    count++;
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod, count);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod, count);
}

// Driver code
int main()
{
    int n = 2;
    int count = 0; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B', count);

    cout << " The total no of steps " << count;
    // A, B and C are names of rods
    return 0;
}

// This is code is contributed by rathbhupendra
