#include <iostream>
#include <fstream>
#include <stdio.h>
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
int n,v;std::cin>>n>>v;
std::vector<int> arr;
for(int i=0;i<n;i++)
{
    int tmep;std::cin>>tmep;
    arr.push_back(tmep);
}
sort(arr.begin(),arr.end(),std::greater<int>());
int sum = 0,i; 
for(i=0;i<n;i++)
{
    sum+=arr[i];
    if(sum>=v)
        break;
}
if(sum>=v)
std::cout<<++i<<std::endl;
else
std::cout<<"-1"<<std::endl;
}
return 0;
}
 