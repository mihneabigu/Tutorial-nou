#include <iostream>

using namespace std;
bool isPalindrom(unsigned long long number)
{
    unsigned long long copie=0,x=0;
    copie=number;
    while (copie!=0)
    {
        x=x*10+copie%10;
        copie=copie/10;
    }
    if(x==number)
        return 1;
    return 0;
}
unsigned long long t;
int main()
{
    cin>>t;
    cout<<isPalindrom(t);
    return 0;
}
