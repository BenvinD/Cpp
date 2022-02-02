#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
int main()
{
//freopen("input.txt","r", stdin);
//freopen("output.txt", "w", stdout);
int test;
std::cin>>test;
while(test--)
{
int  n;std::cin>>n;
std::vector <int> arr;
for(int i=0;i<n;i++)
{
    int n;std::cin>>n;
    arr.push_back(n);
}
sort(arr.begin(),arr.end());
double average1 = std::accumulate( arr.begin(), arr.begin()+(arr.size()-1), 0.0)/ (arr.size()-1);
double average2 = std::accumulate( arr.end()-1, arr.end(), 0.0/ 1);
std::cout<<std::fixed<<std::setprecision(6)<<average1+average2<<std::endl;
}
return 0;
}