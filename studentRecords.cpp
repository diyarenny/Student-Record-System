#include <stdio.h> 
#include <string.h> 
#define SIZE 2
#define SIZE2 2
#define SIZE3 50
struct student {
    
char name[SIZE3];
char course_code[SIZE3];
int year;
int result[SIZE2];

};


     void inputStudents (struct student *studentArray);
     void  displayAllStudent(struct student *studentArray);
     float displayAverage (int studentIndex, struct student *studentArray);
     
     
    int main() {
        
     struct student studentArray[SIZE];  
     int studentIndex =0;
     inputStudents (studentArray);
     displayAllStudent(studentArray);
     float average;
     average = displayAverage(studentIndex, studentArray);
       printf("Student Average: %f",  average);    
     }
    
    void inputStudents (struct student *studentArray) {

        int index;
        
    for (index=0; index<SIZE; index++)
    {
        
      printf("Enter Student Name %d:", index+1);
      fflush(stdin);
      scanf(" %s", &studentArray[index].name); 
  
      printf("Enter Student Course Code %d:", index+1);
      fflush(stdin);
      scanf(" %s", &studentArray[index].course_code); 

      printf("Enter Student Year %d:", index+1);
      scanf("%d", &studentArray[index].year); 

      int i;
      for (i=0; i<SIZE2; i++)
       {   
      printf("Enter Student Result %d:", i+1);
      scanf("%d", &studentArray[index].result[i]); 
       }
     
    //etc.
     
     }

    }
    
     void  displayAllStudent(struct student *studentArray) {
     
         int i;
for (i=0; i < SIZE; i++)
{

printf("Student Name: %s\n", studentArray[i].name);
printf("Student CourseCode : %s\n", studentArray[i].course_code); 
printf("Student Year: %d\n", studentArray[i].year); 
printf(" "); 

int j;
for ( j=0; j< SIZE2; j++)
     {
    
     printf("Student Result %d: %d\n", j+1 ,studentArray[i].result[j]); 
     
}
 //end if
} //end for
     
     }
     
     float displayAverage (int studentIndex, struct student *studentArray) {

         char name[10];
         float average[SIZE];
         float sum;
        
          
            int i;
          
           for (i=0; i < SIZE; i++)
               
            {
 
          
               
              
          int j;
          for ( j=0; j < SIZE2; j++)
             {
              sum = sum  + studentArray[i].result[j];
            }
       
            average[i+1] = sum/SIZE2;

      }  
            

           printf("Please enter student name \n");
           scanf(" %s", &name);
           
           
         for (int i = 1; i < SIZE-1; i++)
	{
              if (name == studentArray[i].name) {
        printf("The average for student %d are...\n", (i+1)); 
		
	       
                printf("%f%% ", average[i]);
	      	printf("\n");
              }
	}
           
           
     }