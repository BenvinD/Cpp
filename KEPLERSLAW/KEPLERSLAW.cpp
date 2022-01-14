#include <iostream>
#include <fstream>
#include <stdio.h>

float sqr(float r)
{
    return r*r;
}
float cub(float c)
{
    return c*c*c;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    std::cin>>test;
    while(test--)
    {
        float t1,t2,r1,r2;
        std::cin>>t1>>t2>>r1>>r2;
        if((sqr(t1)/cub(r1)) == (sqr(t2)/cub(r2)))
        std::cout<<"YES"<<std::endl;
        else
        std::cout<<"NO"<<std::endl;
    }
}
