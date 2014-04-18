#include<stdio.h>
#include<math.h>
#define pi 3.14
void fun1();
void fun2();
void fun3();
void fun4();
void fun5();
int main(){
  int ch=1;
  
  while(ch!=0){
   printf("Enter your choice");
   scanf("%d",&ch);
   switch(ch){
     case 1: fun1(); break;
     case 2: fun2(); break;
     case 3: fun3(); break;
     case 4: fun4(); break;
     case 5: fun5(); break;
     case 0: break;
     default: printf("Invalid Option"); break;
  }
     
 }
 return 0;
}
void fun1(){
  float a,p,v,t,x,o,acc;
  printf("Enter amplitude");
  scanf("%f",&a);
  printf("Enter time");
  scanf("%f",&t);
  printf("Enter period");
  scanf("%f",&p);
  o = 2*pi/p;
  x = sin(o*t);
  v = o*sqrt(a*a-x*x);
  acc = o*o*x;
  printf("x= %f\nV = %f\na = %f\n",x,v,acc);
  return;
}
void fun2(){
  float v1,v2,x1,x2,a,tp,t;
  printf("Enter x1,x2,v1,v2");
  scanf("%f%f%f%f",&x1,&x2,&v1,&v2);
  t = v1*v1/v2/v2;
  printf("%f",t);
  a = sqrt((x2*x2*t-x1*x1)/(t-1));
  tp = 2*pi/(v1/sqrt(a*a-x1*x1));
  printf("\nA = %f\nT = %f\n",a,tp);
  return;
}
void fun3(){
  float a,tp,t1,t2,x1,x2;
  printf("Enter a,T,x1,x2");
  scanf("%f%f%f%f",&a,&tp,&x1,&x2);
  t2 = asin(x2/a)*tp/2/pi;
  t1 = asin(x1/a)*tp/2/pi;
  printf("\nt = %f\n",(t2-t1));
  return;
}
void fun4(){
  
}
void fun5(){
  
}

