/* Name: MUKINE JOEL */
/* Student Number: 22/U/BIO/1688/PD */

#include <stdio.h>

int main(void)
{
    float amount,fee_percebt,fee_amount,total_deducted;
    printf("Enter amount to send:");
    scanf("%f",&amount);
    printf("Enter transaction fee(%):");
    scanf("%f",&fee_percent);
    
    fee_amount = amount*(fee_percent)/100;
    total_deducted = amount+fee_amount;
    printf("Transaction fee:%.2f UGX\n",fee_amount);
    printf("Total_deducted:%.2f UGX\n",total_deducted(;


    return 0;
}
