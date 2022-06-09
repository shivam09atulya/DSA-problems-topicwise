#include <iostream>
#define ll long long int
using namespace std;

int getRandom(int x, int y)
{
    return (x + rand() % (y - x + 1));
}

void red_alert()
{
    ll N, D, H, A[100], sum = 0;
    int i;
    // cin >> N >> D >> H;

    N=getRandom(0,100),D=getRandom(0,100);
    H=getRandom(0,1000);

    for (i = 0; i < N; i++)
        A[i]=getRandom(0,100);

    // cout<<N<<" "<<D<<" "<<H<<" "<<endl;
    // for(i=0;i<N;i++)
    // cout<<" "<<A[i]<<endl;
    for (i = 0; i < N; i++)
    {
        if (A[i] > 0)
        {
            sum += A[i];
        }

        else if (A[i] == 0)
        {
            sum -= D;
        }

        else if (A[i] < D)
        {
            sum = 0;
        }

        if (sum > H)
        {
            // cout << "YES" << endl;
            // cout<<sum<<endl;
            return;
        }
    }
    cout<<"------------------------------------------------"<<endl;
    cout << "NO" << endl;
    for (i = 0; i < N; i++)
        cout << " " << A[i] << endl;
    cout << N << "  " << D << "  " << H << " " << endl;
    cout << "------------------------------------------------" << endl;

    cout << sum << endl;
    return;
}

int main()
{
    ll T;
    // cin >> T;

    T=1000;
    while (T--)
    {
        red_alert();
    }
    return 0;
}