#include<stdio.h>

int choice, rows, columns;
char proceed,character;

void menu(){
    printf("welcome to your Drawing Tool \n");
    printf("you can draw 3 shapes : 1- Rectangle \t2- Triangle \t3- Square  \n");
    printf("From 1 - 3 pick the shape you wish to draw \n");
    scanf("%d",&choice);
}

void askDimentions(int shape){
    // check if square 
    if (shape == 3){
        printf("pick the dimentions of your Square \n");
        printf("size : ");
        scanf("%d",&rows);
    }else {
        printf("How many rows and columns you want \n");
        printf("Rows: ");
        scanf("%d",&rows);
        printf("Columns: ");
        scanf("%d",&columns);
    }
   
}

void triangle(int rows, int columns,char character){
    for (int i = 0; i < columns; i++){
        for (int j = 0; j < rows; j++){
            if (i < j){
                break;
            }else{
              printf(" %c",character);  
            }
        }
        printf("\n");
    }
}

void square(int rows, int columns,char character){
    for(int i = 0; i < columns; i++){
        for (int j = 0; j< rows; j++){
            printf(" %c",character);
        }
        printf("\n");
    }
}

void rectangle(int size,char character){
    for (int i = 0; i < size; i ++){
        for (int j= 0; j < size; j++){
            printf(" %c",character);
        }
        printf("\n");
    }

}

void main(){

    do {

        menu();
        askDimentions(choice);

        printf("choose a character : ");
        scanf(" %c ",&character);

        switch ((choice))
        {
        case 1:
            askDimentions(1);
            rectangle(rows,character);
            break;
        case 2:
            askDimentions(2);
            triangle(rows,columns,character);
            break;
        case 3:
            askDimentions(3);
            square(rows,columns,character);
            break;
        
        default:
            printf("please enter the right answer \n");
            break;
        }

        printf("Do you want to proceed ? \n");
        scanf(" %c ",&proceed);
    }while(proceed == 'y');


}