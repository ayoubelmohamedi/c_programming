#include <stdio.h>

void show_Memberships();
int getDiscount(int months);
float membershipCost(char plan,int monthsToPay, int disc);
void displayInfo(const char gym [],const int months [],const int discount [],const float payments []);

void main(){
    char gym [10];
    int months [10];
    int discount [10];
    float payment [10];

    for (int i = 0; i < 10; i++){
        float amountToPay;
        printf("-------%d--------\n",i+1);
        show_Memberships();
        scanf(" %c",&gym[i]);
        printf("how many months you want to sign for ? \n");
        scanf("%d",&months[i]);
        int disc = getDiscount(months[i]);
        discount[i] = disc;

        float pay = membershipCost(gym[i],months[i],discount[i]);
        payment[i] = pay; 
    }

    displayInfo(gym,months,discount,payment);
}

void show_Memberships(){
    printf("choose which plan you prefer : \n");
    printf("s - Standard Plan: 400 MAD/month \np - Premium Plan: 700 MAD/month \nv - VIP Plan: 1200 MAD/month \n");
}

int getDiscount(int months){
    if(months >= 6 && months < 12){
        return 10;
    }else if (months >= 12 && months < 24)
    {
        return 25;
    } else if (months >= 24){
        return 55;
    }else {
        // must be less than 6 months; no discount
        return 0;
    }
}

float membershipCost(char plan,int monthsToPay, int disc){
    int cost = 0;
    float discount;
    float amount_reduced = 0;
    int totalToPay;

    switch (plan)
        {
        case 's':
            cost = 400;
            break;
        case 'p':
            cost = 700;
            break;
        case 'v':
            cost = 1200;
            break;
        }
    totalToPay =  (cost * monthsToPay);
    
    if (disc != 0){
        discount = disc / 100;
        amount_reduced =  (cost * monthsToPay) * discount; 
        
        return totalToPay - amount_reduced;
    }
    
    return totalToPay;
}

void displayInfo(const char gym [],const int months [],const int discount [],const float payments []){
    printf("gym \tmonths \tdiscount \tpayment\n");
    for (int i = 0; i < 10; i++){
        printf("%c \t%d \t%d \t\t%.2f\n",gym[i],months[i],discount[i],payments[i]);
    }
}
