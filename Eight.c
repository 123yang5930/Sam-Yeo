# include <stdio.h>
main()
{
     int a,b,c,d;
     printf("输入被除数:");
     scanf("%d",&a);
     printf("输入除数:");
     scanf("%d",&b);
     c = a / b;
	 d = a % b;
	 printf("商=%d\n",c);
	 printf("余数=%d",d); 
	 return 0;
}
