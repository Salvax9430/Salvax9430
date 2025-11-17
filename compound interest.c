
//program to calculate compound interest 
    #include <stdio.h>
int main()
 {
    float principal, compoundinterest, rate, number_of_compounding_yearly, Total_number_of_years, Final_amount;
    
    printf("Enter principal: ");
    scanf("%f", &principal);
    
    printf("Enter rate: ");
    scanf("%f", &rate);
    
    printf("Enter number_of_compounding_yearly: ");
    scanf("%f", &number_of_compounding_yearly);
    
    printf("Enter total_number_of_years: ");
    scanf("%f", &Total_number_of_years);
    
    // Calculation of compound interest
    Final_amount = principal * pow((1 + rate/100
    /number_of_compounding_yearly),(Total_number_of_years * number_of_compounding_yearly));
    compoundinterest=Final_amount-principal;
    printf("compoundinterest=%.2f\n",compoundinterest);
    printf("Final_amount = %.2f\n", Final_amount);
    
    return 0;
}
