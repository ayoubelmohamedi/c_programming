#include<stdio.h>

void main(){
// outputs
float studentAverage, classAverage, allSectionAverage;
int sections = 5; 
int numberOfStudents = 0;

float midterm, finalGrade;
//
for (int i = 1; i <= sections ; i++){
    printf("you are in section %d ",i);

    do {
        printf("enter student's midterm grade : \n");
        scanf("%f",&midterm);
        
        printf("enter student's final grade : \n");
        scanf("%f",&finalGrade);
        
        if (midterm == 0 || finalGrade == 0){
            
            if (numberOfStudents == 0) numberOfStudents = 1;
            classAverage = (float) classAverage / numberOfStudents;
            allSectionAverage += classAverage;
            numberOfStudents = 0;
           
            break;
        }  
        else {
            numberOfStudents += 1;
            studentAverage = (midterm + finalGrade) / 2;
            classAverage += studentAverage;
            printf("student average in section %d is %.2f \n",i,studentAverage);
        }
    }while(midterm != 0 || finalGrade != 0);

 printf("class number %d , average is %.2f \n",i,classAverage);
}


allSectionAverage = allSectionAverage / sections;
printf("all sections average is %.2f \n",allSectionAverage);
}