#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,l;
  scanf("%d",&n);
  int count=0;
  int temp=n;
  int sq=n*n;
  while(n!=0){
      n/=10;
      count++;
  }
int p=(int)pow(10,count);
int q=sq/p;
int rem=sq%p;
int sum=q+rem;
if(sum==temp)
    printf("k");
    return 0;
}
