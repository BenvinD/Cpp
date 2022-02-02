#include <iostream>
int main()
{
//freopen("input.txt","r", stdin);
//freopen("output.txt", "w", stdout);
int test;
std::cin>>test;
while(test--)
{
int n,a; std::cin>>n>>a;
if((n-a)>a)
std::cout<<a<<std::endl;
else
std::cout<<(n-a)<<std::endl;
}
return 0;
}
 