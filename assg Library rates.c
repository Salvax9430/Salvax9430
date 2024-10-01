#include <stdio.h>

int main() {
    int BookID, Returndate, Duedate, Daysoverdue, Fineamount;
    int Finerate ;
    
    printf("Enter book ID: ");
    scanf("%d", &BookID); 
    
    printf("Enter due date: ");
    scanf("%d", &Duedate);
    
    printf("Enter return date: ");
    scanf("%d", &Returndate);

    Daysoverdue = Returndate - Duedate;

    // Calculate fine amount based on days overdue
    if (Daysoverdue <= 7) {
    Finerate=20;
        Fineamount = Daysoverdue * Finerate;
    } else if (Daysoverdue <= 14) {
        Finerate=50;
        Fineamount = Daysoverdue * Finerate;
    } else {
        Finerate=100;
        Fineamount = Daysoverdue * Finerate;
    }
printf("BookID: %d\n",BookID );
printf("Duedate: %d\n",Duedate);
printf("Returndate: %d\n",Returndate);
printf("Daysoverdue: %d\n",Daysoverdue);
printf("Finerate: %d\n",Finerate);

    printf("Final amount = %d\n", Fineamount);
    return 0;
}
