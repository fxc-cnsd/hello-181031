//#include<iostream>
//
//using namespace std;
//
//int main(){
//	float x,y;
//	scanf("%f",&x);
//	if(x>=0.0&&x<5.0)
//		y=-x+2.5;
//	else if(x>=5.0&&x<10.0)
//		y=2-1.5*(x-3)*(x-3);
//	else //if(x>=10.0&&x<20.0)
//		y=x/2-1.5;
//	printf("%.3f",y);
//
//	return 0;
//}

//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    int n, temp, p=1, q=2;
//    double x=0;
//    cin >> n;
//    for (int i=0; i<n; i++){
//        x += (double)q/p;
//        temp = q;
//        q += p;
//        p = temp;
//    }
//    cout << fixed << setprecision(4) << x << endl;
//    return 0;
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    int i,j,H,W;
//    char ch;
//    int flag;
//    cin >> H >> W >> ch >> flag;
//    if (flag == 0) { // 空心
//        for (i=0;i<H;i++){
//            for (j=0;j<W;j++){
//                if (i==0 || i==H-1 || j==0 || j==W-1)
//                    cout << ch;
//                else
//                    cout << ' ';
//            }
//            cout << endl;
//        }
//    }
//    else { // 实心
//        for (i=0;i<H;i++){
//            for (j=0;j<W;j++){
//                cout << ch;
//            }
//            cout << endl;
//        }
//    }
//    return 0;
//}


//#include<cstdio>
//
//using namespace std;
//
//int n;
//double ans=1;
//
//int main(){
//    int i;
//    long long p=1;
//    scanf("%d",&n);         //输入要到多少项
//    for(int i=1;i<=n;i++){
//        p=p*i;  //p表示 i!因为每次都乘上 i，所以每次乘起来最后就是i！
//        ans+=(double)1/p;   //将算的 1/i!累加起来
//    }
//    printf("%.10lf",ans); //保留10位小数输出
//    return 0;
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    float x, temp=1, value=0;
//    int n;
//    cin >> x >> n;
//    for (int i=1; i<=n; i++){
//        temp *= x;
//        value += temp;
//    }
//    cout << fixed << setprecision(2) << value+1;
//}


//#include<cstring>
//#include<cstdio>
//int main() {
//	int a[210],b[210],x,na,nb,n,i;
//	char as[210],bs[210];
//	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(b));
//	scanf("%s",as);
//	scanf("%s",bs);
//	na=strlen(as);
//	nb=strlen(bs);
//	for(i=1; i<=na; i++)
//		a[i]=as[na-i]-'0';
//	for(i=1; i<=nb; i++)
//		b[i]=bs[nb-i]-'0';
//	if(na>nb) n=na;
//	else n=nb;
//	for(i=1; i<=n; i++) {
//		a[i]=a[i]+b[i];
//		a[i+1]=a[i+1]+a[i]/10;
//		a[i]=a[i]%10;
//	}
//	if(a[n+1]>0) n++;
//	while(n>1&&a[n]==0) n--;
//	for(i=n; i>0; i--)
//		printf("%d",a[i]);
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//int main() {
//	int n, last, current, a[3001]= {0};
//	cin >> n;
//	cin >> last;
//	for (int i=1; i<n; i++) {
//		cin >> current;
//		a[abs(current-last)]++;
//		last = current;
//	}
//	for (int i=1; i<n; i++) {
//		if (a[i] != 1) {
//			cout << "Not jolly" << endl;
//			return 0;
//		}
//	}
//	cout << "Jolly" << endl;
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//
//void reverseStr(string &s,int begin,int end) {
//
//	while (begin < end) {
//		char temp = s[begin];
//		s[begin] = s[end];
//		s[end] = temp;
//		begin++;
//		end--;
//	}
//}
//
//
//int main() {
//
//	string s;
//
//	while (getline(cin,s)) {
//
//		int length = (int)s.length();
//		reverseStr(s,0,length-1); //先将句子按字符反转
//
//		int j = 0;
//		for (int i=0; i<length; i++) {
//			if (s[i]==' ') {
//				reverseStr(s,j,i-1); //再将句子的单词按字符反转
//				j=i+1;
//			}
//		}
//		cout<<s<<endl;
//	}
//
//	return 0;
//}


//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//
//char a[1100];
//int main(){
//    cin.getline(a,1100);
//    int len=strlen(a);
//    for(int i=0;i<len;i++){
//        a[i]=toupper(a[i]);
//    }
//    int i=0;
//    while(i<len){
//        int cnt=1;
//        while(a[i]==a[i+1]){
//            cnt++;
//            i++;
//        }
//        printf("(%c,%d)",a[i],cnt);
//        i++;
//    }
//}


//#include<iostream>
//
//using namespace std;
//
//int n,m;
//char mp[222][222];
//string s;
//
//int main() {
//	cin>>m>>s;
//	n=s.size()/m;
//
//	for(int i=0; i<s.size(); i++) {
//		int j=i+1;
//
//		int x=(j-1)/m+1;
//		if(x&1) {
//			mp[x][(j-1)%m+1]=s[i];
//		} else {
//			mp[x][m+1-((j-1)%m+1)]=s[i];
//		}
//	}
//	for(int i=1; i<=m; i++) {
//		for(int j=1; j<=n; j++) {
//			cout<<mp[j][i];
//		}
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int n,m;
//int a[10000];
//int main() {
//	int n,m,sum=0;
//	double s;
//	cin>>n>>m;
//	for(int i=1; i<=n; i++) {
//		cin>>s;
//		a[i]=s*100;
//	}
//	sort(a+1,a+n+1);
//	int l=0,r=a[n]/100*100+1;
//	while(l+1<r) {
//		int mid=(l+r)/2;
//		for(int i=1; i<=n; i++)
//			sum+=a[i]/mid;
//		if(sum>=m) l=mid;
//		else r=mid;
//		sum=0;
//	}
//	printf("%.2lf",l/100.00);
//	return 0;
//
//}


//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <cstdlib>
//#include <cmath>
//using namespace std;
//
//#define MAXN (100100)
//int num[MAXN];
//
//int main() {
//	int n;
//	cin >> n;
//	for(int i = 1; i <= n; ++ i) scanf("%d", &num[i]);
//	int m;
//	cin >> m;
//	while(m --) {
//		int x, ans;
//		cin >> x;
//		int l = 1, r = n, mid;
//		if(x <= num[1]) {
//			cout << num[1] << endl;
//			continue;
//		}
//		if(x >= num[n]) {
//			cout << num[n] << endl;
//			continue;
//		}
//		while(l <= r) {
//			mid = (l+r)>>1;
//			if(num[mid] <= x)
//				l = mid+1;
//			else r = mid-1;
//		}
//		// r <= l
//		if(abs(num[l]-x) < abs(num[r]-x))
//			ans = l;
//		else ans = r;
//		cout << num[ans] << endl;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	int n,s=0;
//	cin>>n;
//	while(n>0) {
//		s+=n%2;
//		n/=2;
//	}
//	cout<<s;
//	return 0;
//}




#include<iostream>
using namespace std;
int main(){
//	float t = 1.0851;
//	for(int i=1;i<256;i++)
//		cout<<i<<" "<<t*i<<endl;
//	int a=0 , b=0;
//	int &rea = a;
//	int &rea = b;

//	char a1[] = {'c','+','+'};
//	char a2[] = {'c','+','+','\0'};
//	cout<<int(a1[8])<<endl;
//	cout<<a2[8];

typedef int int_array[4];

int_array a= {1,2,3,4};
cout<<a; 

	
	return 0;
}




















































