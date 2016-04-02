//WAP to implement FOLLOW[X] where X is a non-terminal symbol.

# include<stdio.h>

# include<conio.h>

# include<process.h>

 void main()

 {

 clrscr();

 char  prod1[20];

 char prod2[20];

 char follow1[5];

 char follow2[5];

 char op[5];

 int i=0;

 printf("\nenter first production !");

 scanf("%s",prod1);

 printf("\nenter second production !");

 scanf("%s",prod2);

while(prod1[i]!='\0')

{

if(prod1[i]==prod2[0])

{

follow2[0]=prod1[i+1];

follow2[1]='$';

} 

i++:

}

i=0;

while(prod2[i]!='\0')

{

if(prod2[i]==prod1[0])

{

follow1[0]=prod2[i+1];

follow1[1]='$';

} 

i++:

}

printf("FOLLOW[%c] : {%c,%c}",prod1[0],follow1[0],follow1[1]);

printf("FOLLOW[%c] : {%c,%c}",prod2[0],follow2[0],follow2[1]);

 getch();

 }