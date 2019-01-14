#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

//void bjdx(char b[]) {			    // 7 - 4
//	len = strlen(b);
//	if (len < min_num) {
//		min_num = len;
//		strcpy(min_string , b);
//	}
//	if  (len > max_num) {
//		max_num = len;
//		strcpy(max_string , b);
//	}
//}

//int zzchu(int a,int b){			// 6 - 2
//	if( a%b == 0)
//		return b;
//	else
//		return zzchu( b,a%b );
//}

//long long p[1000010];				//	6 - 1
//long long pell (int k) {
//	if ( k < 3)
//		return k ;
//	else if ( p[k]== 0)
//		p[k] = (2*pell(k-1)+pell(k-2))%100000;
//	return p[k]%32767;
//
//}

int main()
{

	/*************************2018/5/5************************************************************************************************/

	////																				七周第五题，密码破解
	//	char a[10001];
	//	gets(a);
	//	int l=strlen(a);
	//	for(int i=0; i<l; i++) {
	//		if(a[i]=='z')a[i]='a';
	//		else if(a[i]=='Z')a[i]='A';
	//		else if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
	//			a[i]=a[i]+1;
	//	}
	//	puts(a);
	//	return 0;

	//// 																			七周第四题，统计最长最短单词
	//	char min_string[110];
	//	char max_string[110];
	//	int max_num = 0;
	//	int min_num = 110;
	//	int len;
	//
	//	char a[20210];
	//	char b[110];
	//	int index = 0;
	//
	//
	//	cin.getline(a,20210);
	//	for (int i=0; a[i]; i++) {
	//		if (a[i]== 44 || a[i] == 32) {
	//			b[index] = 0;
	//			if (index) {
	//				bjdx(b);
	//			}
	//			index =0;
	//		} else {
	//			b[index] = a[i];
	//			index++;
	//		}
	//	}
	//	if (index) {
	//		b[index] = 0;
	//		bjdx(b);
	//	}
	//	cout << max_string << endl;
	//	cout << min_string << endl;
	//	return 0;

	////																		七周第三题，石头剪刀布
	//	int t;
	//	string word_1,word_2;
	//	scanf("%d",&t);
	//	while(t--) {
	//		cin>>word_1>>word_2;
	//		if(word_1[0]=='R') {
	//			if(word_2[0]=='R') printf("Tie\n");
	//			if(word_2[0]=='P') printf("Player2\n");
	//			if(word_2[0]=='S') printf("Player1\n");
	//		}
	//		if(word_1[0]=='S') {
	//			if(word_2[0]=='S') printf("Tie\n");
	//			if(word_2[0]=='R') printf("Player2\n");
	//			if(word_2[0]=='P') printf("Player1\n");
	//		}
	//		if(word_1[0]=='P') {
	//			if(word_2[0]=='P') printf("Tie\n");
	//			if(word_2[0]=='S') printf("Player2\n");
	//			if(word_2[0]=='R') printf("Player1\n");
	//		}
	//	}
	//	return 0;

	////																	七周第二题，统计第一次出现一次的字母
	//	char a[100100];
	//	int i,j,k=0,l=0;
	//	gets(a);
	//	l=strlen(a);
	//	for(i=0; i<l; i++) {
	//		for(j=0; j<l; j++)
	//			if(a[i]==a[j]&&i!=j)
	//				k=1;
	//		if(k==0) {
	//			cout<<a[i];
	//			return 0;
	//		}
	//		k=0;
	//	}
	//	cout<<"no";

	////																七周第一题，统计数字数
	//	char c;
	//	int nu=0;
	//
	//	while(cin.get(c)) {
	//		if(c=='\n')
	//			break;
	//		if((c>='A' && c<='Z')||(c>='a' && c<='z'))
	//			continue;
	//		else if(c>='0'&&c<='9')
	//			nu++;
	//		else if(c==' ')
	//			continue;
	//		else
	//			continue;
	//	}
	//	cout<<nu;
	//	return 0;

	/*************************2018/4/28************************************************************************************************/

	////																六周第二题，最大公约数
	//	int a,b,max,min;
	//	cin>>a>>b;
	//	max=((a-b)>0)?a:b;
	//	if(a==max)
	//		min=b;
	//	else
	//		min=a;
	//	cout<<zzchu(max,min);
	//	return 0;

	////															六周第一题，pell数列
	//	int n;
	//	cin>>n;
	//	int a[n];
	//	for (int i =0; i<n; i++)
	//		cin>>a[i];
	//	for(int i=0; i<n; i++) {
	//		cout << (pell(a[i]));
	//		if (i!=(n-1))
	//			cout <<endl;
	//	}

	/*************************2018/4/19************************************************************************************************/

	////													 		五周第七题，求矩阵转置
	////freopen("C:\\Users\\fxc\\Documents\\geren\\devc++\\ceshi1.txt","r",stdin);
	//	int n,m;
	//	cin>>n>>m;
	//	int tu[n][m],fu[m][n];
	//
	//	for (int i=0; i<n; i++)
	//		for (int j=0; j<m; j++) {
	//			cin>>tu[i][j];
	//		}
	//
	//	for (int i=0; i<n; i++)
	//		for (int j=0; j<m; j++) {
	//			fu[j][i]=tu[i][j];
	//		}
	//
	//	for (int i=0; i<m; i++) {
	//		for (int j=0; j<n; j++) {
	//			cout<<fu[i][j];
	//			if(j!=(n-1))
	//				cout<<" ";
	//		}
	//		if(i!=(m-1))
	//			cout<<endl;
	//	}

	////													 		五周第六题，图像模糊处理
	//	//freopen("C:\\Users\\fxc\\Documents\\geren\\devc++\\in.txt","r",stdin);
	//	int n,m;
	//	cin>>n>>m;
	//	int tu[n][m],fu[n][m];
	//
	//	for (int i=0; i<n; i++)
	//		for (int j=0; j<m; j++) {
	//			cin>>tu[i][j];
	//			fu[i][j]=tu[i][j];
	//		}
	//
	////	for (int i=0; i<n; i++)
	////		for (int j=0; j<m; j++)
	////			printf("%d ",tu[i][j]);
	//
	//	for (int ii=1; ii<n-1; ii++)
	//		for (int jj=1; jj<m-1; jj++)
	//			tu[ii][jj]=int((fu[ii][jj]+fu[ii-1][jj]+fu[ii+1][jj]+fu[ii][jj-1]+fu[ii][jj+1])/5.0+0.5);
	//
	//	for (int i=0; i<n-1; i++) {
	//		for (int j=0; j<m-1; j++)
	//			printf("%d ",tu[i][j]);
	//		printf("%d\n",tu[i][m-1]);
	//	}
	//	for(int j=0; j<m-1; j++)
	//		printf("%d ",tu[n-1][j]);
	//	printf("%d",tu[n-1][m-1]);
	//	return 0;

	////													 		五周第五题，计算鞍点,掉渣天版本
	//	//freopen("C:\\Users\\fxc\\Documents\\geren\\devc++\\in.txt","r",stdin);
	//	const int N = 5;
	//	int A[N][N];
	//	int n = 5;
	//	for (int i=0; i<n; i++) {
	//		for (int j=0; j<n; j++) {
	//			cin >> A[i][j];
	//		}
	//	}
	//	bool flag = 0;
	//	int row, col;
	//	for (row=0; row<n; row++) {
	//		col = 0;
	//		for (int j=1; j<n; j++) { //查找第row行最大值的列号
	//			if (A[row][j] > A[row][col])
	//				col = j;
	//		}
	//		flag = 1;
	//		for (int i=0; i<n; i++) { //查找第col列最小值的行号，确定A[row][col]是否为鞍点
	//			if (A[i][col] < A[row][col]) { //A[row][col]不是鞍点
	//				flag = 0;
	//				break;
	//			}
	//		}
	//		if (flag) //A[row][col]是鞍点
	//			break;
	//	}
	//	if (flag)
	//		cout << row+1 << " " << col+1 << " " << A[row][col] << endl;
	//	else
	//		cout << "not found" << endl;
	//
	//	return 0;

	////													五周第五题，计算鞍点,渣渣版本
	//	//freopen("C:\\Users\\fxc\\Documents\\geren\\devc++\\in.txt","r",stdin);
	//	int a[5][5],max,min,ii,jj,count=0;
	//	for(int i=0; i<5; i++)
	//		for(int j=0; j<5; j++)
	//			cin>>a[i][j];
	//	for(int i=0; i<5; i++) {
	//		max=a[i][0];
	//		for(int j=0; j<5; j++) {
	//
	//			if(a[i][j]>=max) {
	//				ii=i;
	//				jj=j;
	//				max=a[i][j];
	//			}
	//		}
	//		min=max;
	//		for(int k=0; k<5; k++) {
	//		if(a[k][jj]<min)
	//			min=a[k][jj];
	//		}
	//		if(max==min) {
	//			count=1;
	//			cout<<ii+1<<" "<<jj+1<<" "<<max<<endl;
	//			break;
	//		}
	//	}
	//	if(count=0)
	//		cout<<"not found";
	//	return 0;

	////												五周第四题，校门口的树
	//	int a,b,c,d,count=0;
	//	cin>>a>>b;
	//	char shu[a+1];
	//	for(int i=0;i<=a;i++)
	//		shu[i]=1;
	//	for(int i=0;i<b;i++)
	//	{
	//		cin>>c>>d;
	//		for(int j=c;j<=d;j++)
	//			shu[j]=0;
	//	}
	//	for(int i=0;i<=a;i++)
	//	{
	//		if(shu[i]==1)
	//			count++;
	//	}
	//	cout<<count;

	////											五周第三题，年龄与疾病
	//	int a,c1=0.0,c2=0,c3=0,c4=0;
	//	scanf("%d",&a);
	//	int b[a+1];
	//	for(int i=0;i<a;i++)
	//	{
	//		scanf("%d",&b[i]);
	//	 }
	//	for(int i=0;i<a;i++)
	//	{
	//		if(b[i]>0&&b[i]<=18)
	//			c1++;
	//		if(b[i]>18&&b[i]<=35)
	//			c2++;
	//		if(b[i]>35&&b[i]<=60)
	//			c3++;
	//		if(b[i]>60)
	//			c4++;
	//	}
	//	printf("%4.2f%%\n",((float)c1)/a*100);
	//	printf("%4.2f%%\n",((float)c2)/a*100);
	//	printf("%4.2f%%\n",((float)c3)/a*100);
	//	printf("%4.2f%%",((float)c4)/a*100);

	////											五周第二题，摘苹果
	//	int a[10];
	//	int h,count=0;
	//	const int bd=30;
	//	for(int i=0;i<10;i++)
	//		cin>>a[i];
	//	cin>>h;
	//	h=h+bd;
	//	for(int i=0;i<10;i++)
	//	{
	//		if(h>=a[i])
	//			count++;
	//	}
	//	cout<<count;

	////											五周第一题，数的个数

	//	int a,c,count=0;
	//	cin>>a;
	//	int b[a+1];
	//	for(int i=0;i<a;i++)
	//		cin>>b[i];
	//	cin>>c;
	//	for(int i=0;i<a;i++)
	//	{
	//		if(c==b[i])
	//			count++;
	//	}
	//	cout<<count;

	/*************************2018/4/13************************************************************************************************/

	//											四周第六题，数字统计
	//	int l,r,count=0;
	//	scanf("%d%d",&l,&r);
	//	if(l>0&&r>0&&r>=l)
	//	{
	//		for(int i=l;i<=r;i++)
	//			for(int k=i;k>0;k/=10)
	//				if(k%10==2)
	//					count++;
	//		printf("%d\n",count);
	// 	}

	//											四周第五题，雇佣兵
	//	int n,m,x,engry;
	//	scanf("%d%d%d",&m,&n,&x);
	//	engry=n;//engry代表当前战斗力
	//	while(engry<=m&&x) {
	//		x-=ceil(double (m)/engry);
	//		if(x<0) break;
	//		engry+=floor(double (m)/engry);
	//	}
	//	cout<<engry;

	//											四周第四题，求特殊自然数
	//	int a,b,c,m=0,s[3];
	//	for(a=1; a<7&&m==0; a++)
	//		for(b=0; b<7&&m==0; b++)
	//			for(c=1; c<7&&m==0; c++)
	//				if((c+b*7+a*49)==(c*81+b*9+a)) {
	//					m=1;
	//					s[0]=(c+b*7+a*49);
	//					s[1]=(a*100+b*10+c);
	//					s[2]=(c*100+b*10+a);
	//					break;
	//				}
	//	cout <<s[0]<<endl<<s[1]<<endl<<s[2];
	//	return 0;

	//										四周第三题，数字反转
	//	char inStr[12];
	//	int i = 0;
	//	bool isNegative = false;   // 标识是否为负数
	//	cin >> inStr;
	//	if (inStr[0] == '-') {     // 若为负数，isNegative = true；
	//		isNegative = true;
	//	}
	//	while (inStr[i] != '\0') {  // 先遍历到数字结尾
	//		i++;
	//	}
	//
	//	while (inStr[i-1] == '0') {  // 从结尾开始返回到第一个不为0的数
	//		i--;
	//	}
	//	if (isNegative) {           // 若为负数，先输出负号
	//		cout << "-" ;
	//	}
	//	for (int j = i-1; j > 0; j--) {  // 逐个输出数字
	//		cout << inStr[j];
	//	}
	//	if (!isNegative) {          // 若为负数说明第一个为符号位，不用输出
	//		cout << inStr[0] << endl;
	//	} else cout << endl;        // 若不为负数，说明第一个为数字位，需要输出
	//	return 0;

	//												四周第二题，正常血压
	//	//freopen("C:\\Users\\fxc\\Documents\\geren\\devc++\\ceshi1.txt","r",stdin);
	//	int n,i,j,count=0,max=0;
	//	cin>>n;
	//	if(n>0&&n<100)
	//	{
	//		for(int k=0;k<n;k++)
	//		{
	//			cin>>i>>j;
	//			if(i>=90&&i<=140&&j>=60&&j<=90)
	//				{
	//				count++;
	//				if(count>=max)
	//					max=count;
	//				}
	//			else
	//			{
	//				count=0;
	//			}
	//		}
	//		printf("%d",max);
	//	 }

	//										四周第一题，角谷猜想
	//unsigned long long in,temp;
	//cin>>in;
	//if(in>0)
	//{
	//	if(in==1)
	//		printf("End");
	//	else
	//	{	while(in>1)
	//		{
	//			if(in%2==1)
	//			{
	//				temp=in;
	//				in=temp*3+1;
	//				printf("%lld*3+1=%lld\n",temp,in);
	//			}
	//			else
	//			{
	//				temp=in;
	//				in=temp/2;
	//				printf("%lld/2=%lld\n",temp,in);
	//				 }
	//		}
	//		printf("End");
	//	}
	//}

	////																				重定向输入
	//	freopen("C:\\Users\\fxc\\Documents\\geren\\devc++\\ceshi.txt","r",stdin); //此后所有输入都来自文件
	//	int n, mx = 0;
	//	while( cin >> n) {
	//		if( n > mx )
	//			mx = n;
	//	}
	//	printf("%d",mx);
	//	return 0;

	//	int n,m;
	//	while(scanf("%d%d",&n,&m) != EOF) { 	//EOF是直接能拿来用的符号常量
	//	printf("%d",n+m);
	//	}

	/*************************2018/4/8************************************************************************************************/
	//三周第十题
	//	int n,i;
	//	float x,y,a,b,z;
	//	scanf("%d",&n);
	//	if((n>1)&&(n<=20)) {
	//		float z[n];
	//		scanf("%f%f",&a,&b);
	//		x=b/a;
	////		printf("%f",x);
	//		for(i=1; i<n; i++) {
	//			scanf("%f%f",&a,&b);
	//			y=b/a;
	//			z[i]=x-y;
	//		}
	//		for(i=1; i<n-1; i++) {
	//			if(z[i]>0.05)
	//				printf("worse");
	//			else if((-z[i])>0.05)
	//				printf("better");
	//			else
	//				printf("same");
	//			printf("\n");
	//		}
	//		if(z[n-1]>0.05)
	//			printf("worse");
	//		else if((-z[n-1])>0.05)
	//			printf("better");
	//		else
	//			printf("same");
	//	}

	/*														//三周第九题
		long long a;
		unsigned int n;
		long long res=1;
		int i;
		scanf("%lld %u",&a,&n);
		for(i=0;i<n;i++)
			res*=a;
		printf("%lld",res);
		return 0;
	*/

	/*															//三周第八题
		int i,n,m,l,k,a=0,b=0,c=0,sum=0;
		scanf("%d",&n);
	//	printf("%d",n);
		if((n>=1)&&(n<=17))
		{
			for(i=0;i<n;i++)
			{
				scanf("%d %d %d",&m,&l,&k);
				a+=m;
				b+=l;
				c+=k;
	//			printf("%d %d %d %d",a,b,c,sum);
			}
			sum=a+b+c;
			printf("%d %d %d %d",a,b,c,sum);
		}
	*/

	/*															//三周第七题   ，最大跨度
		int n,i,a,max=0,min=1000;
	    scanf("%d\n",&n);
	    for(i=0; i<n; i++)
	    {
	        scanf("%d",&a);
	        if(a>max)
	            max=a;
	        if(a<min)
	            min=a;
	    }
	    printf("%d",max-min);
	    return 0;
	*/

	/*
		int a,i,n,max=0,min=1000;
		scanf("%d\n",&n);
			if(n==1)
			{
				scanf("%d",&a);
				printf("%d",a);
			}
			if((n>=2)&&(n<=1000))
			{
				 for(i=0; i<n; i++)
	    		{
	        		scanf("%d",&a);
	       				 if(a>max)
	           			 max=a;
	       				 if(a<min)
	          			  min=a;
	   			 }
	   		 printf("%d",max-min);
			}
	*/

	/*												//三周第六题
		int a,i,n,sum=0;
		double aver;
		scanf("%d",&n);
		if(n>=1&&n<=10000)
		{
			for(i=1;i<=n;i++)
				{
					scanf("%d",&a);
					sum+=a;
				}
		}
			aver=(double)sum/n;
			printf("%d %.5lf",sum,aver);
			return 0;
	*/

	/*													//简单计算器
		int a,b;
		char c;
		scanf("%d %d %c",&a,&b,&c);
		if((c!='+')&&(c!='-')&&(c!='*')&&(c!='/'))
			printf("Invalid operator!");
		else
		{
			switch(c)
			{
				case '+':
					printf("%d",a+b);
					break;
				case '-':
					printf("%d",a-b);
					break;
				case '*':
					printf("%d",a*b);
					break;
				case '/':
					{
						if(b==0)
						{
							printf("Divided by zero!");
							break;
						}
						printf("%d",a/b);
						break;
					}
				default:
					break;
			}

		}
	*/

	/*												//虫子吃苹果
		int n,x,y;
		scanf("%d%d%d",&n,&x,&y);
		if(y>=(n*x))
			printf("0");
		else
			{
				if(y%x==0)
					printf("%d",n-y/x);
				else
					printf("%d",n-y/x-1);
			}
		return 0;
	*/

	/*										//三周第三题，点与正方形关系
		int x,y;
		scanf("%d%d",&x,&y);
		if(x>=-1&&x<=1&&y>=-1&&y<=1)
			printf("yes");
		else
			printf("no");
		return 0;
	*/

	/*                                                  //完成版
	    double a,b,c,d;
	    double x1,x2;
	    double m,n;
	    double esp=pow(10,-7);
	    scanf("%lf%lf%lf",&a,&b,&c);
	    d=b*b-4*a*c;
	    if(d==0||d>0)
	    {
	        if(d==0)
	        {
	            x1=x2=(-b+sqrt(d))/(2*a);
	            printf("x1=x2=%.5lf\n",x1,x2);
	        }
	        else
	        {
	            x1=(-b+sqrt(d))/(2*a);
	            x2=(-b-sqrt(d))/(2*a);
	            printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	        }
	    }
	    else
	    {
	        m=-b/(2*a)+esp;
	        n=sqrt(-d)/(2*a);
	        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,n,m,n);
	    }
	    return 0;
	}
	*/

	/*										//第三周第二题，求一元二次方程的根，错误版
		double a,b,c,d;
		scanf("%lf%lf%lf",&a,&b,&c) ;
		d=b*b-4*a*c;
		if(d==0)
		{
			double x1;
			x1=(-b+sqrt(d))/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		else if(d>0)
		{
			double x1,x2;
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("x1=%.5lf;x2=%.5ld\n",x1,x2);
		}
		else
		{
			double c1,c2;
			double esp=pow(10,-7);
			c1=-b/(2*a)+esp;
			c2=sqrt(-d)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lfi-%.5lfi\n",c1,c2,c1,c2);

		}
		return 0;
	*/

	/*									//第三周第一题，判断奇偶数
	int n;
	scanf("%d",&n);
	if(n>0)
		{
			if(n%2==0)
				printf("even");
			else
				printf("odd");
		}
	return 0;
	*/

	/*************************2018/3/26************************************************************************************************/
	/*						//第二周第五题，大象喝水
		int r,h;
		float n,v;
		scanf("%d %d",&h,&r);
		v=3.14159*float(r)*float(r)*float(h);
		n=20000.0/v;
		printf("%d",((int)n+1));
		return 0;
		*/

	/*					//第二周第四题，计算球的体积
	double r;
	scanf("%lf",&r);
	printf("%.2f",4.0/3.0*3.14*r*r*r);
	return 0;
	*/

	/*						//第二周第三题， 输出字符、整数、单精度浮点数和双精度浮点数
	char a;
	int b;
	float c;
	double d;
	scanf("%c %d %f %lf",&a,&b,&c,&d);
	printf("%c %d %.6f %.6f",a,b,c,d);
	return 0;
	*/

	/*                      //第二周第二题，12位浮点数
	double a;
	scanf("%lf",&a);
	printf("%.12f",a);
	return 0;
	*/

	/*                  //第二周第一题 ，八位一个排顺序
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%8d %8d %8d",a,b,c);
	return 0;
	*/

	/*					//输出ffffffff，-1，1，1
	unsigned int x = 0xffffffff;
	unsigned int b = x + 2;
	int y = x;
	printf("%x,%d,%x,%d",y,y,b,b);
	*/
	/* 						//输出e，104
	char c = 'a' + 4;
	cout << c << "," << (int) c + 3 << endl;
	*/

	/*   优先级
	 	++ -- ！ ~
		 * /%
		 +-
		 < <= > >= == !=
		 &&
		 ||
		 = += -= *= /+ %=
	*/

	/*				//运算时短路计算
	int a=0,b=1;
	bool n=(a++)&&(b++);
	cout<<a<<endl<<b;
	n=a++&&b++;
	cout<<endl<<a<<endl<<b;
	return 0;
	*/

	//与或非，&&,||,!

	/*			    //bool类型
	int a=true;
	cout<<a;
	*/

	/*                //输出3
	double d=10/3;
	cout<<d<<endl;
	return 0;
	*/
	//溢出被抛弃
	// +-*/% ++ --
	//double>long long>int>short>char  精度从高到低

	/*                  //cin.get(),读入一个字符
	int c;
	while((c=cin.get())!=EOF)
	{
		cout<<(char)c;
	}
	return 0;
	*/

	/*                     //cin，cout比scanf，printf慢，不能同时用
	int n1,n2;
	double f;
	char c;
	cin>>n1>>n2>>c>>f;
	cout<<n1<<","<<n2<<","<<c<<","<<f<<endl;
	return 0;
	*/

	/*                          // 基本输入输出
	int n,m;
	char c;
	float f;
	scanf("%d%c,%f:%d",&n,&c,&f,&m);    //输入12k,3.75:290,scanf中被跳过
	printf("%d %c %f %d",n,c,f,m);
	return 0;
	*/

	/**************************************2018/3/20********************************************************************************************/
	/*                          //输出类型大小
	float a;
	double b;
	printf("%d %d\n",sizeof(int),sizeof(short));
	printf("%d %d",sizeof(a),sizeof(b));
	return 0;
	*/

	/*                          //输出数字
	char ch;
	scanf("%d",&ch);
	printf("%c",ch);
	return 0;
	*/

	/*                  //  输出ascii码
	char ch;
	scanf("%c",&ch);
	printf("%d",ch);
	return 0;
	*/

	/*                   // 输出菱形
	char ch;
	scanf("%c",&ch);
	printf("  %c  \n",ch);
	printf(" %c%c%c \n",ch,ch,ch);
	printf("%c%c%c%c%c\n",ch,ch,ch,ch,ch);
	printf(" %c%c%c \n",ch,ch,ch);
	printf("  %c  \n",ch);
	return 0;
	*/
	/**************************************2018/3/19***************************************/
	/*                     // 输出两个数：32768 -32768
	unsigned int a;
	int b;
	a = 32768;
	b = a;
	printf("%d %d\n", a, b);
	return 0;
	*/

	/*                 //c++试题第一题
	unsigned int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",b);
	return 0;
	*/

	/*                  //  helloworld
	int n;
	cin>>n;
	cout<<n<<"\nhello,world"<<endl;
	return 0;
	*/

	/*                    //输入求和
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a+b);
	return 0;
	*/

	/*                    //读入字符
	char a,b,c;
	scanf("%c%c%c",&a,&b,&c);
	printf("%c%c%c\n",a,b,c);s
	printf("%d",sizeof(a));
	return 0;
	*/
}
