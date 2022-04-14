#include<stdio.h> 
#include<stdlib.h>

int main()

{

int i,a,b=0,c; 
scanf("%d",&a);

for(i=1;i<a;i++) 
{

c=0;
int d=i;
while(d!=0)
{

b=d%10;

c=c*10+b;

d=d/10;

} 


if(c+i==a){

printf("true");
return 0;
}



}
printf("False");


}


