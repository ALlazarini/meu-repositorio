/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int x,vp=0,vn=0, qn=0,t=0;
 float med, pn, pp;
 
 printf("digite 0 para encerrar \n");
 
 while(1){
     printf("digite um numero: ");
      scanf("%d",&x);
     if(x==0){break;}
     t+=x;
     qn++;
     
     if(x>0){
         vp++;
     }else{ vn++;}
 }
 med=(float)t/qn;
 pn=((float)vn/qn)*100;
 pp=((float)vp/qn)*100;
 
 printf("a media dos valores e: %2f \n",med);
 printf("qde positiva: %d \n",vp);
 printf("qde negativa: %d \n",vn);
 printf("porcentual positivo %2f, percentual negativo %2f",pp,pn);
    return 0;
}