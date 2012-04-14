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
e1(72)
e4(0)
e9(0)
e1(101)
e4(0)
e9(0)
e1(108)
e4(0)
e9(0)
e1(108)
e4(0)
e9(0)
e1(111)
e4(0)
e9(0)
e1(44)
e4(0)
e9(0)
e1(87)
e4(0)
e9(0)
e1(111)
e4(0)
e9(0)
e1(114)
e4(0)
e9(0)
e1(108)
e4(0)
e9(0)
e1(100)
e4(0)
e9(0)
e1(33)
e4(0)
e9(0)
return 0;}
