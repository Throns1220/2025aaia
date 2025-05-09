/// week12-a.cpp
/// SOIT108_Base_008
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=(double)1200/a*3600/1000;
	printf("%d",b);
}

/// week12-3b.cpp
/// SOIT108_Base_006
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%4==0 && a%100!=0) printf("%d is a leap year.\n",a);
	else printf("%d is not a leap year.\n",a);
}

/// week12-3c.cpp
/// SOIT108_Base_011
#include <stdio.h>
int main()
{
	int a1,b1,a2,b2,ans;
	scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
	ans=(a2-a1)*(b2-b1);
	if(ans<0) printf("%d",ans*-1);
	else printf("%d",ans);
}
