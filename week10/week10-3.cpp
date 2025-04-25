/// week10-3.cpp
/// SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int ans = 0,b = a;
	while(a>0){
		ans = ans*10+a%10;
		a/=10;
	}
	printf("%d+%d=%d\n",b,ans,b+ans);
}
