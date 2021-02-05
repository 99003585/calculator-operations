
#include <gtest/test.h>
#include <calculator.h>

int add(int val1, int val2)
{
    return val1 + val2;
}
int sub(int val1, int val2)
{
    return val1 - val2;
}
int mul(int val1, int val2)
{
    return val1 * val2;
}
int divn(int val1, int val2)
{
    if(0 == val2)
        return 0;
    else
        return val1 / val2;
}


int main(){

    int sum = add(10,20);
    cout<<sum<<endl;

    int diff = sub(10,20);
    cout<<diff<<endl;

    int prod = mul(10,20);
    cout<<prod<<endl;

    int quot = divn(100,20);
    cout<<quot<<endl;

    return 0;
}
