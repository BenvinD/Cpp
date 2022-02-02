#include <iostream>
#include <vector>
int main()
{
//freopen("input.txt","r", stdin);
//freopen("output.txt", "w", stdout);
int test;
std::cin>>test;
while(test--)
{
    std::vector<char> lol {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int n;std::cin>>n;
    int i=0,it =0;
    std::string st;
    while (i<n)
    {
        st += lol[it];
        it++;
        i++;
        if(it>=26)
        it=0;
    }
    std::cout<<st<<std::endl;
}
return 0;
}