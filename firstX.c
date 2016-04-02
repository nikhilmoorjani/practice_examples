//WAP to implement FIRST[X] where X is a non-terminal symbol.
# include<stdio.h>

# include<conio.h>

# include<process.h>

 void main()    {

char  prod1[20],prod2[20],first1[5],first2[5],op[5];

int i=0,c=0,j=0;

printf("\nenter first production !");

 scanf("%s",prod1);

 printf("%s",prod1);

 printf("\nenter second production !");

 scanf("%s",prod2);

 printf("%s",prod2);

 if (prod1[3]=='+'|| prod1[3]=='*' || prod1[3]=='(') {

   first1[0]=prod1[3];

 }

 while(prod1[i]!='\0') {

  if (prod1[i]=='/') {

   first1[1]=prod1[i+1];

   c=1;

  }

  i++;

 }

 if (c==0) {

  first1[1]='\0';

 }

 else {

  first1[2]='\0';

 }

 printf("\nfirst[%c] : {%c,%c}",prod1[0],first1[0],first1[1]);

 i=0,c=0;  int k=0;

 if (prod2[3]=='+'|| prod2[3]=='*' || prod2[3]=='(') {

   first2[0]=prod2[3];

   j=1;

 }

 if (j==0) {

  printf("\nfirst[%c] : {%c,%c}",prod2[0],first1[0],first1[1]);

  exit(0);

 }

 while(prod2[i]!='\0') {

  if (prod2[i]=='/' || c==1){

   op[k]=prod2[i+1];

   c=1;   k++;

  }

  i++;

 }

 if (c==0) {

  first2[1]='\0';

 }

 else {

  op[k]='\0';    }

 printf("\nfirst[%c] : {%c,%s}",prod2[0],first2[0],op);    }