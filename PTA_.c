//////#include <stdio.h>
////void PrintN ( int N );
////int main ()
////{
////    int N;
////    scanf("%d", &N);
////    PrintN( N );
////    return 0;
////}
////
////void PrintN( int n )
////{
////  int i=1;
////  for( ;i<n;i++)
////  {
////    printf("%d\n",i);
////  }
////  printf("%d",n);
////}
//
//#include <stdio.h>
//#define MAXN 10
//double f( int n, double a[], double x );
//int main()
//{
//    int n, i;
//    double a[MAXN], x;	
//    scanf("%d %lf", &n, &x);
//    for ( i=0; i<=n; i++ )
//        scanf("%lf", &a[i]);
//    printf("%.1f\n", f(n, a, x));
//    return 0;
//}
//
//double f( int n, double a[], double x )
//{
//	int i,j;
//	double ret = a[0],buff=1.0;
//	for( i=1; i<=n ;i++ )
//	{
//	buff*=x;
//	ret += a[i]*buff;
//	}
//	return ret;
//}
////double f( int n, double a[], double x )
////{
////   int i,j;
////  double ret = 0.0,buff=1.0;
////  for( i=0; i<=n ;i++ )
////  {
////    for( j=0;j<i;j++ )
////    {
////      buff*=x;
////    }
////    ret += a[i]*buff;
////    buff=1.0;
////  }
////  return ret;
//
//}





//#include<stdio.h>
//
//int main(){
//	
//	int a[10] = {0,1,2,3,4,5,6,7,8,9};
//	memcpy(a+3,a,5);
//	int i =0;
//	for(i=0;i<10;i++)	
//		printf("%d,",a[i]);
//	return 0;
//}


//#include<stdio.h>
//#define DF(a,b)  (a+2*b) 

//#define  F1(var)  printf("var=%d", var)
//#define  F0(var)  F1(var * var)



//struct { 
//    int k; 
//    char s[30]; 
//} a[5] = {1, "ABC", 2, "abc"}, *p = a;

//int main(){
//	
////	printf("%c",*(p++)->s);
//
////	printf("%d",!!"2010-01-27");
//
////int s=5;
////int k= DF(s+1,s-3);
////printf("%d",k);
//
////int a[3][6];
////printf("%d",sizeof( a[0] ));
//
//// int a = 6, b = 0, c = 3;
////printf("%d",a && b || b - c);
//
////char a[20]="cehiknqtw";
////char *s="fbla",*p;
////int i, j;
////for(p=s; *p; p++) {
////   j=0;
////   while (*p>=a[j] && a[j]!='\0') j++;
////   for(i=strlen(a); i>=j; i--) a[i+1] = a[i];
////   a[j]=*p;
////}
////printf("%s", a);
//
////F0(3+4);
//
//
//	return 0;
//}


//int x, y, z, w;
//void p(int *y, int x)
//{
//    static int w;
//    *y++; x++; w = x+*--y;
//    printf("%d#%d#%d#%d#",x,*y,z,w);
//}
//int main(void)
//{
//    int x, y, z, w;
//    x=y=z=w=1;
//    do{
//        static int x;
//        p(&x, y);
//        printf("%d#%d#%d#%d#",x,y,z,w);
//    } while(0);
//    return 0;
//}


//void swap( int *pa, int *pb ) 
//{
//    int pt;
//    pt = *pa, *pa = *pb, *pb = *pa;
//}
//int main(void)
//{    
//    int x=1, y=2;
//    swap(&x, &y);
//    printf("%d%d", x, y);
//}


#include<stdio.h>

float getmax(int a,int b,int c,int d,int e,int f)
{
	float res1 = ((float)c)/a ;	
	float x1 = ((float)b)/e;
	float d1 = x1*d;
	float f1 = x1*f;
	float res2_x = (c-f1)/(a-d1);
	float res2_y = (c-a*x1)/((float)b);
	float res2 = res2_x + res2_y;
	if(res2>res1)
		return res2;
	else
		return res1;
}
int main(void)
{
	int a=1,b=2,c=3,d=-4,e=5,f=9;
	float output;
	//scanf();
	output = getmax(a,b,c,d,e,f);
	printf("%.2f\n",output);
	getchar();
	
	return 0;
}




























