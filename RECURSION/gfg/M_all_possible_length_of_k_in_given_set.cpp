// im able to do this for a string with length of 2 and not more for as the length of string increases so does the op3 and op4 etc
// line increases

// #include <bits/stdc++.h>

// using namespace std;

// void solve(string ip, string op, int k)
// {
//     if (op.length() == k)
//     {
//         cout << op << endl;
//         return;
//     }

//     string op1, op2, op3, op4;
//     op1 = op;
//     op2 = op;
//     // op3 = op;
//     // op4 = op;
//     op1.push_back(ip[0]);
//     op2.push_back(ip[1]);
//     // op3.push_back(ip[2]);
//     // op4.push_back(ip[3]);

//     solve(ip, op1, k);
//     solve(ip, op2, k);
//     // solve(ip, op3, k);
//     // solve(ip, op4, k);
// }
// int main()
// {
//     string ip = "ab", op = "";
//     int k = 1;
//     solve(ip, op, k);
//     return 0;
// }

// up is my code

#include <bits/stdc++.h>

using namespace std;

void solve(string ip, string op, int k)
{
    if (op.length() == k)
    {
        cout << op << endl;
        return;
    }

    string op_array[10];

    for (int i = 0; i < ip.length(); i++)
    {
        op_array[i] = op;
        op_array[i].push_back(ip[i]);
        solve(ip, op_array[i], k);
    }
}

int main()
{
    string ip = "ab", op = "";
    int k = 4;
    solve(ip, op, k);
    return 0;
}

// // C++ program to print all
// // possible strings of length k
// #include <bits/stdc++.h>
// using namespace std;

// // The main recursive method
// // to print all possible
// // strings of length k
// void printAllKLengthRec(char set[], string prefix,
//                         int n, int k)
// {

//     // Base case: k is 0,
//     // print prefix
//     if (k == 0)
//     {
//         cout << (prefix) << endl;
//         return;
//     }

//     // One by one add all characters
//     // from set and recursively
//     // call for k equals to k-1
//     for (int i = 0; i < n; i++)
//     {
//         string newPrefix;

//         // Next character of input added
//         newPrefix = prefix + set[i];

//         // k is decreased, because
//         // we have added a new character
//         printAllKLengthRec(set, newPrefix, n, k - 1);
//     }
// }

// void printAllKLength(char set[], int k, int n)
// {
//     printAllKLengthRec(set, "", n, k);
// }

// // Driver Code
// int main()
// {

//     cout << "First Test" << endl;
//     char set1[] = {'a', 'b'};
//     int k = 3;
//     printAllKLength(set1, k, 2);

//     cout << "Second Test\n";
//     char set2[] = {'a', 'b', 'c', 'd'};
//     k = 1;
//     printAllKLength(set2, k, 4);
// }

// // This code is contributed
// // by Mohit kumar