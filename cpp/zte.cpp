#include<iostream>
#include<vector>
#include<string>
//#include<set>
#include<algorithm>
using namespace std;

/*
int aaa( int n, int cap, int arr[])
{
	sort(arr,arr+n);
//	for(int i=0;i<n;i++)
//		cout<<arr[i]<<' ';
//	cout<<'\n';	

	int l = 0, r = n-1;
	int sum=0;
	int ret=0;
	while(l<r){
		while(l<r){
			if(arr[l]+arr[r]>cap){
				r--;	ret++;
			}
			else if(arr[l]+arr[r]==cap){
				l++;	r--;	ret++;
			}
			else{
//				if( (l+1<r)&&( arr[l]+arr[l+1]+arr[r]>cap) )
//				{
//					l++;
//				}				
				l++;
			}
			ret++;	l = 0;	r-=2;
		}
	}
	return ret;
	
}
*/

//vector<string> bbb(string s1,string s2,int p)
//{
//	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
//	transform(s2.begin(),s2.end(),s2.begin(),::tolower);
//	cout<<"s1=  "<<s1<<endl;
//	cout<<"s2=  "<<s1<<endl;
//	string temp;
//	vector<string> ret;
//	//set<char> re = s1;
//	//cout<<set<<endl; 
//	for(auto i=s1.begin();i!=s1.end();i++)
//		for(auto j=s2.begin();j!=s2.end();j++)
//		{
//			if( (*i == *j) )
//			{
//				if(temp.find(*i) == temp.npos)
//					temp.push_back(*i);
//			 } 
//				
//		}
//	sort(temp.begin(),temp.end());
//	int len = temp.size();
//	char san[len];
//	cout<<"temp=  "<<temp<<"   len= "<<len<<endl;
//	if(len<p)
//		return vector<string> {"len<p"};
//	else if(len==p)
//		return vector<string> {"len=p"};
//	else
//	{
//		for( int i = 0; i<len-p+1 ; i++)
//			for( int j=i+1 ;j<len-p+2;j++ )
//				for(int k=j+1;k<len-p+3;k++)
//				{
//					char san[]={temp[i],temp[j],temp[k]};
//					ret.push_back(string{san}); 
//				}
//		return ret;
//	}
//	
//}


class foo{
	public:
		static char a[4];
		virtual int func(){};
		
};

class bar:public foo{
	private :
		char *p;
};


char foo::a[4] ={4,5,6,7};
char *p1 = foo::a+2;
char *p2 =(char*)(&foo::a + 1);









int main()
{
//	string s1 = {"RadheGupta"};
//	string s2 = {"RADHIKA"};
//	int n = 3;
//	vector<string> ret;
//	ret = bbb( s1,s2,n );
//	cout<<"result   ";
//	for(auto i:ret){
//		cout<<i<<' ';
//	}

	cout<<sizeof(foo)<<endl;
	cout<<sizeof(bar)<<endl;
	cout<<*(foo::a+1)<<endl;
	cout<<*p1<<endl;
	cout<<(*p2-1)<<endl;
	cout<<foo::a[p2-p1]<<endl;

}





