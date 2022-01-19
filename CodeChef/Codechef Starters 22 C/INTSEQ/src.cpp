#include <iostream>
int main()
{
//freopen("input.txt","r", stdin);
//freopen("output.txt","w", stdout);
int test; std::cin>>test;
while(test--)
{
    int k;std::cin>>k;
    int ans = 0;
    if(k%2==0)
    while(1)
    {
        k=k/2;
        ans++;
        if(k%2!=0)
        break;
    }
    std::cout<<ans<<std::endl;
}
return 0;
}
