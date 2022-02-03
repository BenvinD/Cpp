#include <iostream>
#include <algorithm>

int main() {
	int t;std::cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,p,q,r;
	    std::cin>>a>>b>>c>>p>>q>>r;
	    int d1,d2,d3;
	    d1=p-a;
	    d2=q-b;
	    d3=r-c;
	    int m;
        m = std::max({d1,d2,d3});
	    if(m==d1){
	        if((p+b+c)>((p+q+r)/2))
	        std::cout<<"yes"<<std::endl;
	        else
	        std::cout<<"no"<<std::endl;
	    }
	    else if(m==d2){
	        if((a+q+c)>((p+q+r)/2))
	        std::cout<<"yes"<<std::endl;
	        else
	        std::cout<<"no"<<std::endl;
	    }
	    else if(m==d3){
	        if((a+b+r)>((p+q+r)/2))
	        std::cout<<"yes"<<std::endl;
	        else
	        std::cout<<"no"<<std::endl;
	    }
	}
	return 0;
}