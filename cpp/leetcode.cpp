#include<iostream>
#include<cmath>
#include<cassert>
#include<ctime>
#include<vector>
#include<map>

//using namespace std;
//
//template<typename T>
//int binarySearch( T arr[], int n, T target)
//{
//	int l = 0, r = n - 1;
//	while(l <= r)
//	{
//		int mid = l + (r-l)/2;
//		if( arr[mid] == target)
//			return mid;
//		if( target >arr[mid] )
//		{
//			l = mid + 1;
//		}
//		else
//		{
//			r = mid - 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int n = 10000,ret,target =999 ;
//	int A[n];
//	for( int i = 0;i<n;i++)
//	{
//		A[i] = i;
//	}
//	//cout<<A[100];
//	ret = binarySearch( A , n, target);
//	cout<<ret;
//
//}

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	map<int,int> record;
	for(int i = 0; i<nums1.size(); i++)
		record[nums1[i]] ++;
	vector<int> ret;
	for(int i =0; i<nums2.size(); i++)
		if(record[nums2[i]]>0) {
			ret.push_back( nums2[i] );
			record[ nums2[i ]]--;
		}
	return ret;
}

int main() {
	vector<int> a {1,2,3,4,7,8,9};
	vector<int> b {2,2,2,2,4,4,4,8,8,8,8,8,8,8};
	vector<int> ret ;
	ret = intersect(a,b);
	for(auto i : ret)
		cout<<i<<endl;

	return 0;

}













