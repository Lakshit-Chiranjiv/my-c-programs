//menu driven for:
// case 1: to reverse a string 
// case 2: to extract substring
// case 3: to extract the first characters of all words
// case 4: to extract the last characters of all words
#include <stdio.h>

int main()
{
	printf("enter a string\n");
     char str[80];
     gets(str);
     int l=0;
     while(str[l]!='\0')
     	l++;
    printf("enter a choice between 1-4\n");
    int n;
    scanf("%d",&n);
     
    switch(n)
    {
    	case 1:
    	{
    		char str1[80];
    	       int c=0;
    	       for (int i = l-1; i >=0; i--)
    	       {
    	       	 str1[c++]=str[i];
    	       }
    	       printf("\nreversed string = %s",str1);
    	       break;
    	   }
    	case 2:
    	 {
    	 	char str2[80];
    	 	int m,n;
    	 	printf("\nenter the starting and ending positions to exctract\n");
    	 	scanf("%d%d",&m,&n);
    	 	int c=0;
    	 	for (int i = m-1; i<=n-1; i++)
    	       {
    	       	 str2[c++]=str[i];
    	       }
    	        printf("\nthe substring is = %s",str2);
    	       break;
    	 } 
    	 case 3:
    	 {
    	 	char str3[80]={str[0]};
    	 	int c=1;
    	 	for (int i = 0; i<=l-1; i++)
    	       {
    	       	 if(str[i]==' ')
    	       	 str3[c++]=str[i+1];
    	       }
    	       printf("\nthe first characters of each word are:\n");
    	     for(int i=0;i<c;i++)  
    	       printf("%c\t",str3[i]);
    	       break;
    	 } 
    	 case 4:
    	 {
    	 	char str4[80];
    	 	int c=0;
    	 	for (int i = 0; i<=l-1; i++)
    	       {
    	       	 if(str[i]==' ')
    	       	 str4[c++]=str[i-1];
    	       }
    	       str4[c++]=str[l-1];
    	       printf("\nthe last characters of each word are:\n");
    	     for(int i=0;i<c;i++)  
    	       printf("%c\t",str4[i]);
    	       break;
    	 } 
    	 default:printf("\ninvalid choice\n"); 

    }
    return 0;
}
