
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n;
        cin>>n;
        int result=0;
        for(int i=1;i<=n;i++)
        {
        	if(i%2==0)
                result-=i;
        	else
                result+=i;
        }
        
        cout<<"#"<<test_case<<" "<<result<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}