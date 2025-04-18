/// week09-2.cpp
#include <stdio.h>
int main()
{
	int a[100];
	for(int i=0;i<100;i++) scanf(" %d",&a[i]);
	for(int i=0;i<100;i++){
		for(int n=i+1;n<100;n++){
			if(a[i]>a[n]){
				int temp=a[i];
				a[i]=a[n];
				a[n]=temp;}}}
	for(int i=0;i<100;i++) printf("%d ",a[i]);
}
