# include <stdio.h>
# include <stdlib.h>
#include <string.h>
struct chlothes {
	char clothes[10]; 
	char shoes[10];
	char bags[10];
	int size;

}person1;



void main(){
	int a,n=10,b,i,j,*ptr1 ,*ptr2,k=1;
	int psh =0,tpsh=0, tpbg=0 ,pbg=1,*p, pcl=0 , *ptr3 ,ptotal =1;
	p = &pbg ;



	printf ("how many item do you want to buy");
	scanf ("%d", &n);
	 ptr1= (int*)malloc(n *sizeof(int));

	for (a=0; a<n ; ++a){
		printf("choose your products\n ");
		printf("1=shoes\n ,2=bags , 3=clothes\n");
		ptr2= (int*)malloc(k *sizeof(int));
		for (int i = 0; i < k; ++i)
		{
			scanf ("%d ", & b);
			if (b==1)
			{
				strcpy (person1.shoes , "shoes");
				printf("how many?\n");
				scanf ("%d\n" , &psh);
				tpsh = psh * 300 ;


				for(j=0; j<psh; ++j){

			      printf("enter size");
				  scanf ("%d\n",& person1.size);
						
				}

			}
			if (b==2)
			{
				
				strcpy (person1.bags , "bags");
				printf("how many?");
				scanf ("%d\n" , &pbg);

				
                printf("CHEKDFKJD+ %d\n",pbg );
				tpbg = pbg * 800 ;
				for(j=0; j<pbg ; ++j){

			      printf("enter size");
				  scanf ("%d\n",& person1.size);
						
				}
				
				



			}
			if (b==3)
			{
				strcpy (person1.clothes , "clothes");
				printf("how many?\n");
				scanf ("%d\n" , &pcl);
				pcl = pcl * 500 ;

				for(j=0; j<1; ++j){

			      printf("enter size");
				  scanf ("%d\n",& person1.size);
						
				}
			} 

	
		}
	
	}
	ptotal = tpsh+tpbg+pcl ;
	printf("the total price is = %d\n", ptotal );


	printf("%s\n", person1.clothes );
	printf("%s\n", person1.shoes );
	printf("%d\n", person1.size );
	printf("\n%s\n", person1.bags );
	free(ptr1);
	free(ptr2);

}