#include<stdio.h>

void show_Memberships(){
    printf("---------------\n");
    printf("choose which plan you prefer : \n");
    printf("1 - Standard Plan: 400 MAD/month \n2 - Premium Plan: 700 MAD/month \n3 - VIP Plan: 1200 MAD/month \n");
}

void show_benefits(){
    printf("---------------\n");
    printf("Available benefits: \n");
    printf("4 - Pool access 200 MAD/month \n5 -Hammam access: 550 MAD/ month \n6 - Martial Arts lessons: 800 MAD/month \n");
}


void main(){
    int membership,benefits;
    int totalamount, mostbenefit;
    int clients, client_Charges,monthsToPay,benefits_Charges = 0;
    int cost;

    int numberOfBenefits;
    int firstBenefit, secondBenefit, thirdBenefit = 0;


    printf("How many clients there are ? \n");
    scanf("%d",&clients);

    for (int i = 0 ; i < clients;i++){
        printf("client number %d ",i+1);
        show_Memberships();
        scanf("%d",&membership);

        printf("how many months you want to pay ? \n");
        scanf("%d",&monthsToPay);

        // give the charges of the clients based on his/her membership plan and the amount of months.
        switch (membership)
        {
        case 1:
            cost = 400;
            client_Charges = cost * monthsToPay;
            break;
        case 2:
            cost = 700;
            client_Charges = cost * monthsToPay;
            break;
        case 3:
            cost = 1200;
            client_Charges = cost * monthsToPay;
            break;
        }

        show_benefits();
        printf("How many benefits you want : \n");
        scanf("%d",&numberOfBenefits);

        for (int j = 0; j < numberOfBenefits; j++){
            printf("%d - choose the benifit you wish to add : ",j+1);
            scanf("%d",&benefits);

            switch (benefits)
            {
            case 4:
                firstBenefit++;
                cost = 200;
                benefits_Charges += cost;
                break;
            case 5:
                cost = 550;
                secondBenefit++;
                benefits_Charges += cost;
                break;
            case 6:
                cost = 800;
                thirdBenefit++;
                benefits_Charges += cost;
                break;
            }
        }

        printf("How many months you want to use these benefits ? \n");
        scanf("%d",&monthsToPay);

        // the cost of client's benefits, based on how many months.
        benefits_Charges = benefits_Charges * monthsToPay;
        
        // the total amount to pay is accumulated for every client.
        totalamount += benefits_Charges + client_Charges;

    }
    // the total amount the gym earned
    printf("the total amount the gym earned = %d MAD \n",totalamount);

    //the most chosen benefit
    if (firstBenefit > secondBenefit){
        if (firstBenefit > thirdBenefit){
            printf("the most chosen benefit is Pool access \n");
        }else {
            printf("the most chosen benefit is Martial Arts lessons \n");
        }
    }else{
        if (secondBenefit > thirdBenefit){
            printf("the most chosen benefit is Hammam access \n");
        }else{
            printf("the most chosen benefit is Martial Arts lessons \n");
        }
    }

}