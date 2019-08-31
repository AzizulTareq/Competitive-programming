#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double n, m, a, sum1 = 0, sum2 = 0;
    long long result = 0;
    cin>>n>>m>>a;

    sum1 = ceil(n/a);
    sum2 = ceil(m/a);
    result = sum1*sum2;

    cout<<result;

}
