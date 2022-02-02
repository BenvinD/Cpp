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
int x,y,z; std::cin>>x>>y>>z;
if(x>=y)
std::cout<<"PIZZA"<<std::endl;
else if(x>=z)
std::cout<<"BURGER"<<std::endl;
else
std::cout<<"NOTHING"<<std::endl;
}
return 0;
}
 