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
std::vector<int> cry;
int val;
for(int i=0;i<9;i++)
{
    std::cin>>val;
    cry.push_back(val);
}
int result = std::max(cry[1],cry[3])+std::max(cry[2],cry[6])+std::max(cry[5],cry[7]);
std::cout<<result<<std::endl;
}
return 0;
}
 