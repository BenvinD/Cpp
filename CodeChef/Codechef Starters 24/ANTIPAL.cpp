#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

typedef std::map<char, int> M;

bool value_comparer(M::value_type &i1, M::value_type &i2)
{
return i1.second<i2.second;
}

int main()
{
//freopen("input.txt","r", stdin);
//freopen("output.txt", "w", stdout);
int test; std::cin>>test;
while(test--)
{
   int lolol; std::cin>>lolol;
  std::string str;std::cin>>str;
  std::map<char, int> dic;
  if((str.length()%2)!=0)
    {
        std::cout<<"NO"<<std::endl;
        continue;
    }
    else
    {
    for(int i=0;i<str.length();i++)
    dic[str[i]] += 1;
    std::map<char, int>::iterator itr;
    char tmp;
    M::iterator itor = std::max_element(dic.begin(), dic.end(),value_comparer);
    if(itor->second > str.length()/2)
        {
            std::cout<<"NO"<<std::endl;
            continue;
        }
    else
    {
    int i = 1;
    std::string news;
    itr = dic.begin();
    while(i<=str.length())
    {   
        if(i==str.length()/2)
        {
            if(itr->second!=0)
            {
            tmp = itr->first;
            news+=itr->first;
            itr->second--;
            itr++;
            news+=itr->first;
            itr->second--;
            i+=2;
            }
        }
        if(itr->second!=0)
        {
            news+=itr->first;
            itr->second--;
            i++;
        }
        else 
            {
            itr++;
            if(itr->first < 'a' || itr->first > 'z')
            break;
            news+=itr->first;
            itr->second--;
            i++;
            }
    }
    while(i<=str.length())
    {
        news+=tmp;
        i++;
    }
    std::cout<<"YES"<<std::endl;
    std::cout<<news<<std::endl;
    }
    }
}
return 0;
}
 