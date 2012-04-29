#include <stdio.h>
#define e9(x) *p=0;
#define e8(x) }
#define e7(x) while(*p){
#define e6(x) p+=x;
#define e5(x) p-=x;
#define e4(x) putchar(*p);
#define e3(x) *p-=x;
#define e2(x) c=getchar();if(c>=0)*p=c;
#define e1(x) *p+=x;
char buf[0xffff];
int main(){
char *p=buf;
int c;
e1(46)
e6(1)
e1(91)
e6(1)
e1(45)
e6(1)
e1(93)
e6(2)
e1(43)
e5(1)
e2(0)
e7(0)
e7(0)
e6(1)
e4(0)
e5(1)
e3(1)
e8(0)
e5(4)
e7(0)
e4(0)
e6(1)
e8(0)
e2(0)
e8(0)
e1(10)
e4(0)
return 0;}
