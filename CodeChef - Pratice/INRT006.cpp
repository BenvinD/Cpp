#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
int main()
{
//freopen("input.txt","r", stdin);
//freopen("output.txt", "w", stdout);
int test;
std::cin>>test;
while(test--)
{
int n;std::cin>>n;
int sum =0;
for(int i=1;i<=n/2;i++)
    if(n%i==0)
        sum+=i;
if(sum==n)
std::cout<<"The number is a Perfect number!"<<std::endl;
else
std::cout<<"The number is not a Perfect number!"<<std::endl;
}
return 0;
}
 