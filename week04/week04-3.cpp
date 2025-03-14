/// week04-3.cpp
/// 試各種 for迴圈
#include <stdio.h>
int main()
{
    int n=5;
    for(int i=0; i<n; i++) {
        printf("%d",i);
    } /// 電腦從0開始
    printf("\n"); ///跳行

    for(int i=1; i<=n; i++) {
        printf("%d",i);
    } /// 人類從1開始
    printf("\n"); ///跳行

    for(int i=n-1; i>=0; i--) {
        printf("%d",i);
    } /// 倒過來的迴圈
}
