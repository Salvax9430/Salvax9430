//program to calculate electricity bills 
//Bramuel the programmer 
 #include <stdio.h>
int main()
{
    int customerID, unitsConsumed;
    float totalBill, totalAmountToPay, surchargeRate = 0.15;
    float chargesPerUnit;
    char customerName[50];  

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
     scanf("%s",& customerName); 
    
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed <= 199) {
        chargesPerUnit = 1.20;
    } else if (unitsConsumed <= 400) {
        chargesPerUnit = 1.50;
    } else if (unitsConsumed <= 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.0;
    }

    totalBill = unitsConsumed * chargesPerUnit;

    if (totalBill > 400) {
        totalAmountToPay = totalBill + (totalBill * surchargeRate);
    } else {
        totalAmountToPay = totalBill;
    }

    // Ensure minimum bill of 100
    if (totalAmountToPay < 100) {
        totalAmountToPay = 100;
    }

    
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", chargesPerUnit);
    printf("Total Bill: %.2f\n", totalBill);
    printf("Total Amount to Pay: %.2f\n", totalAmountToPay);

    return 0;
}
 