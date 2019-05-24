#include <iostream>

using namespace std;

int main()
{
    int i, j,n, temp;
    int score[i];
    char name[32];
    cin>>n;


    while(n--)
    {
      cin>>name>>score[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; i++)
        {
            if(score[i]<score[j])
            {
                temp =score[j];
                score[i]=score[j];
                score[j]=temp;

            }
        }

    }

    for(i=0; i<n; i++)
    {
        cout<<score[i];
    }

}

