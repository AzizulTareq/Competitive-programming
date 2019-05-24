#include <iostream>

using namespace std;

int main()
{
    int N;
    if (0 < N < 1000000)
    {
        cin>>N;
    }

    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6=0, sum7=0, sum8=0, sum9=0, sum10=0, sum11=0, sum12=0, sum13=0, sum14=0;



    sum1 = N / 100;
    sum2 = N%100;

    if(sum2>=50 && sum2<=100)
    {
        sum3 = sum2/50;
    }

        sum4 = sum3%50;



    if(sum4>=20 && sum4<=50)
    {
        sum5 = sum4/20;
    }

    sum6 = sum4%20;



    if(sum6>=10 && sum6<=20)
    {
        sum7 = sum5/10;
        sum8 = sum5%10;
    }
    else if(sum8>=5 && sum8<=10)
    {
        sum9 = sum8/5;
        sum10 = sum8%5;

    }

    sum10 = sum8%5;

    if(sum10>=2 && sum10<=5)
    {
        sum11=sum10/2;
    }

    sum12 = sum10%2;

    if(sum12>=1 && sum12>=2)
    {
        sum13 = sum11/1;
    }






    cout<<sum1<<" nota(s) de R$ 100,00"<<endl;
    cout<<sum3<<" nota(s) de R$ 50,00"<<endl;
    cout<<sum5<<" nota(s) de R$ 20,00"<<endl;
    cout<<sum7<<" nota(s) de R$ 10,00"<<endl;
    cout<<sum9<<" nota(s) de R$ 5,00"<<endl;
    cout<<sum11<<" nota(s) de R$ 2,00"<<endl;
    cout<<sum13<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}
