#include<iostream>

using namespace std;

int solve(int sum)
{
    long  int D, d, P, Q, n, rem, sumor;
    cin >> D >> d >> P >> Q;

    n = D / d;
    rem = D % d;
    long  int a = P;

    sumor = (d * n * ((2 * a) + (n - 1) * Q)) / 2;
    sumor += rem * (P + Q * n);

    if(sum==sumor)
    {
        return 0;
    }

    else{
        return sumor;
    }

}

int main()
{
    long  int T;
    T=1000;     

    while (T--)
    {
        long  int i , D,d,P,Q;
        int sum=0;
        D=rand();
        d=rand();
        P=rand();
        Q=rand();

    if(D>d)
      {  
          if(D%d==0)
        {  
            for(i=0;i<D/d;i++)
        {
            sum+=((P+(i*Q))*d);
        }
       int sumor= solve(sum);

       if(sumor>0)
       {
        cout<<"\n Not equal sum = "<<sum<<" requied sum = "<<sumor<<" D d P Q"<<D<<"\t"<<d<<"\t"<<P<<"\t"<<Q<<endl;
       }
    
    }

        else
        {
            for (i =0;i<D/d;i++)
            {
                sum += ((P + (i * Q)) * d);
            }

            for(int j=1;j<=D%d;j++)
            {
                sum+=((P+(i*Q)));
            }
            int sumor = solve(sum);

            if (sumor>0)
            {
                cout << "\n Not equal sum = " << sum << "requied sum = " << sumor << "D d P Q" << D << d << P << Q << endl;
            }
        }
    }

    }
    
    return 0;
}