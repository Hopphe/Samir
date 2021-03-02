#include <stdio.h>
int main()
{
   // Input part: Name and Age
   
   int name[10][10], age[10],i,j;
   float deg[10];
   for(i=0;i<5;i++)
        {
	     printf("Enter the name:");
	     scanf("%s",&name[i]);
	     printf("Enter the age:");
	     scanf("%d",&age[i]);
	    }
	    
	// For Question a)
	
	for(i=0;i<5;i++)
	{
		if(age[i]<=20)
		{
			deg[i]=1;
		}
		else if( age[i]>20 && age[i]<=30)
		{
			deg[i]=((float)30-age[i])/10;
		}
		else 
		{
			deg[i]=0;
		}
		
	}
	
	printf("\n");
	printf("The Degree of membership from conditon A are as follows:\n\n");
	for(i=0;i<5;i++)
	{
		printf("%s:%.1f",name[i],deg[i]);
		printf("\n");
		
	}
	
	// for question b)
	
	float deg1[20];
		for(i=0;i<5;i++)
	{
		if(age[i]<=15)
		{
			deg1[i]=1;
		}
		else if( age[i]>15 && age[i]<=35)
		{
			deg1[i]=((float)35-age[i])/20;
		}
		else 
		{
			deg1[i]=0;
		}
		
	}
	printf("\n");
	printf("The Degree of membership from conditon B are as follows:\n\n");
	for(i=0;i<5;i++)
	{
		printf("%s:%.1f",name[i],deg1[i]);
		printf("\n");
	}
	
// union/fuzzy or:

    float uni[20];
    for(i=0;i<5;i++)
    {
    	if(deg[i]>deg1[i])
    	{
    		uni[i]=deg[i];
		}
		else
		{
			uni[i]=deg1[i];
		}
	}
    printf("\n\n");
	printf("Union = {"); 
    for(i=0;i<5;i++)
	{
		printf("%.1f",uni[i]);
		printf("\t");
		
	}	    
	printf("}"); 
	
    // Intersection/fuzzy and:
    float int_[20];
    for(i=0;i<5;i++)
    {
    	if(deg[i]<deg1[i])
    	{
    		int_[i]=deg[i];
		}
		else
		{
			int_[i]=deg1[i];
		}
	}
    printf("\n\n");
	printf("Intersection = {"); 
    for(i=0;i<5;i++)
	{
		printf("%.1f",int_[i]);
		printf("\t");
		
	}	    
	printf("}");
	
	// complement
	// For question a) 
    float com1[20];
    for(i=0;i<5;i++)
    {
    	com1[i]=1-deg[i];
	}
	printf("\n\n");
	printf("The complement of a: {");
	for(i=0;i<5;i++)
	{
		printf("%.1f",com1[i]);
		printf("\t");
	}
	printf("}");
	
	//for question b)
	
	float com2[20];
	 for(i=0;i<5;i++)
    {
    	com2[i]=1-deg1[i];
	}
	printf("\n\n");
	printf("The complement of b: {");
	for(i=0;i<5;i++)
	{
		printf("%.1f",com2[i]);
		printf("\t");
	}
	printf("}");
	
	
}

   
	
