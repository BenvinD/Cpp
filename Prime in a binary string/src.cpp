#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>

int main()
{
freopen("input.txt","r", stdin);
freopen("output.txt", "w", stdout);
int test;
std::cin>>test;
while(test--)
{
std::string str;std::cin>>str;
size_t n = std::count(str.begin(), str.end(), '1');
size_t z = std::count(str.begin(), str.end(), '0');
if(n==1 && z == 0)
{
    std::cout<<"No"<<std::endl;
    continue;
}
else if(n==1 && str.back()=='1')
{
    std::cout<<"No"<<std::endl;
    continue;
}
if(n>=1 && z>=0)
std::cout<<"Yes"<<std::endl;
else
std::cout<<"No"<<std::endl;
}
return 0;
}
 