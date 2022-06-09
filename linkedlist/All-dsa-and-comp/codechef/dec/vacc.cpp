#include<iostream>
using namespace std;
int  main()
{
    int d1,d2,v1,v2,p,i=0;
    cin>>d1>>v1>>d2>>v2>>p;
    if(d1==d2)
    {
        while(i<101)
        {
            if((v1+v2)*i>p)
            {
            cout<<i;
            exit(0);
            }
            i++;
        }
    }
    else if(d1>d2)
    {
    while(i<101)
     {
        if (((d1 - d2) * v1 + (v1 + v2)*i) > p)
        {
            cout<<i+1;
            exit(0);

        }
        i++;
     }
    
    }
    else {
        while(i<101)
        {
            if (((d2 - d1) * v2 + (v1 + v2)*i) > p)
            {
                cout << i+1;
                exit(0);
            }
            i++;
        }
    }
    
    return 0;
}

