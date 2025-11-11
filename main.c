#include<stdio.h>
int main()
{
	int no_of_students , i;
	float marks[10],total =0 , average , highest, lowest ;
	int pass = 0, fail = 0 ;
	int grade_A_plus = 0, grade_A = 0 , grade_B = 0 , grade_C = 0 , grade_D = 0 ;
	
	printf ( " ~ STUDENT PERFOMANCE ANALYZER ~ \n");
	printf(" Enter total number of students (max 10): ");
	scanf("%d",&no_of_students);
	
	if (no_of_students > 10 || no_of_students <= 0)
	{
		printf(" Invalid number of students ! Please enter between 1 and 10. \n");
		return 0;
	}
	
	printf(" Enter marks of each student: \n");
	for ( i=0 ; i<no_of_students ; i++ )
	{
		printf(" Students %d: ",i+1);
		scanf("%f",&marks[i]);
		total += marks[i];
	}
	
	highest = marks[0];
	lowest = marks [0];
	
	for (i=0 ; i<no_of_students ; i++)
	{
		if (marks[i] > highest)
		    highest = marks[i];
		if (marks[i] < lowest)
		    lowest = marks[i];
		    
		if (marks[i] >= 90)
		{
			grade_A_plus++;
			pass++;
		} 
		else if (marks[i] >= 80)
		{
			grade_A++;
			pass++;
		}
		else if (marks[i] >= 70)
		{
			grade_B++;
			pass++;
		}
		else if (marks[i] >= 60) 
		{
		grade_C++;
		pass++;
	    }
	    else if(marks[i] >=50)
	    {
	    	grade_D++;
	    	pass++;
	    }
	    else 
	    {
	    	fail++;
	    }    
   }
   average = total/no_of_students ;
   
   printf(" ~ RESULT SUMMERY ~ \n");
   printf(" Average Marks : %.2f\n",average );
   printf(" Highest Marks : %.2f\n",highest );
   printf(" Lowest Marks : %.2f\n",lowest );
   printf(" Total Passed Students : %d\n", pass);
   printf(" Total Failed Students : %d\n", fail);
   printf(" Grade Distribution: \n");
   printf(" A+ : %d\n",grade_A_plus);
   printf(" A : %d\n", grade_A);
   printf(" B : %d\n",grade_B);
   printf(" C : %d\n",grade_C);
   printf(" C : %d\n",grade_D);
   printf(" Fail : %d\n",fail);
   printf(" -------------------------------\n");
   
   return 0;
}
