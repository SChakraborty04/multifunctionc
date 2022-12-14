#include<stdio.h>
//Function initialisation
int eo(int);
int p(int);
int genp(int);
int fib(int);
int arm(int);
int perfect(int);
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
  //Function Calling
eo(n);
p(n);
genp(n);
fib(n);
arm(n);
perfect(n);
return 0;
}
//Function Definition
int eo(n){
if(n%2==0){
printf("%d is even number\n",n);
}
else{
printf("%d is odd number\n",n);
}
return 0;}
int p(n){
int check=0;
if (n == 0 || n == 1){
  check=1;
}
for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      check=1;
    }
  }
if(check==1){
    printf("%d is not prime\n",n);
}
else{
  printf("%d is composite\n",n);  
}
return 0;}

int genp(n){
    int i,factor,j;
    printf("Prime numbers upto %d are:- ",n);
    for(i=1; i<=n; i++)
    {
        factor=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                factor++;
        }
        if(factor==2)
            printf("%d " ,i);
    }
    printf("\n");
return 0;}

int fib(n){
  int t1 = 0, t2 = 1;
  int t3 = t1 + t2;
  printf("Fibonacci Series upto %d is: %d %d ", n, t1, t2);
  for (int i = 3; i <= n; ++i) {
    printf("%d ", t3);
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
  }
printf("\n");
  return 0;
}

int arm(n){
  int a,p,s=0;
  int i=n;
  while(n!=0){
    a=n%10;
    p=a*a*a;
    s=s+p;
    n=n/10;
  }
  if(s==i){
    printf("%d is an armstrong.\n",i);
  }
  else{
    printf("%d is not an armstrong.\n",i);
  }
  return 0;
}

int perfect(n){
  int s=0;
  for(int i=1;i<n;i++){
    if(n%i==0){
      s=s+i;
    }
  }
  if(s==n){
    printf("%d is a perfect number\n",n);
  }
  else{
    printf("%d is not a perfect number\n",n);
  }
return 0;}

