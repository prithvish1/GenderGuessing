#include<stdio.h>
void guess()
{
	char n[20];
	int k,i;
	printf("\n\tEnter a Hindu name(south Karnataka) in lower case...(without surname , spaces & initials)\n\n");
	scanf("%s",n);
	for(i=0;n[i]!='\0';i++)
	{
	}
	k=i-1;
	if((n[k]=='a')||(n[k]=='i')||(n[k]=='e'))
    {
        if((n[k-1]=='r'&&n[k]=='a')||(n[k-1]=='n'&&n[k-2]=='n')||(n[k-1]=='p'&&n[k-2]=='p')||(n[k-1]=='y'&&n[k-2]=='y')||(n[k-1]=='j'&&n[k-2]=='a'&&n[k-3]=='r')||(n[k-2]=='u'&&n[k-1]=='d')||(n[k-2]=='w'&&n[k-1]=='d')||(n[k-1]=='n'&&n[k-2]=='n')||(n[k-3]=='e')&&
        (n[k-2]=='s')&&(n[k-1]=='h')&&(n[k]=='a')||(n[k-2]=='r'&&n[k-1]=='y'&&n[k]=='a')||(n[k-4]=='m')&&n[k-3]=='a'&&n[k-2]=='n'&&n[k-1]=='y'&&n[k]=='a'||(n[k-2]=='e'&&n[k-1]=='y'&&n[k]=='a'))
        {
            printf("\n\n\t\tThe name belongs to MALE\n\n");
        }
        else
    	printf("\n\n\t\tThe name belongs to FEMALE\n\n");
    }
    else
    {
    	printf("\n\n\t\tThe name belongs to MALE\n\n");
    }
}
void main()
{
    int c;
    guess();
    while(1)
    {
    printf("Press 1 ----> If I am wrong.\n");
    printf("Press 2 ----> To check again with other names.\n");
    printf("Press 3 ----> Example(demo)\n");
    printf("Press 0 ----> Exit\n");
    scanf("%d",&c);
    if(c==1)
    {
        printf("\n\tThen I am sorry to say this **** YOU ARE A GAY ****...!\n");
        main();
    }
    else if(c==2)
    {
        main();
    }
    else if(c==3)
    {
        printf("\t\tEg :- Sachin R Tendulkar\n");
        printf("\t\tHere you should give only Sachin\n\n");
        main();
    }
    else
        printf("\t\t......THANK YOU......\n\n");
    return(1);
    }
}
