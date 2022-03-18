#include <stdio.h>

void primeFactors(int n)
{
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        cout<<c<<" ";
        n/=c;
        }
        else c++;
    }
}
 
/* Driver code */
int main()
{
    int n = 612852475143;
    primeFactors(n);
    return 0;
}
