// invoice of d mart using structure.
#include <stdio.h>

struct Product
{
    int id;
    int qty;
    int mrp;
    int off;
};

int main()
{
    int choice;

    struct Product p[10] =
    {
        {101,10,10,10},
        {102,2,20,40},
        {103,7,30,60},
        {104,5,40,50},
        {105,9,50,30},
        {106,1,60,80},
        {107,17,70,11},
        {108,20,80,25},
        {109,23,90,45},
        {110,11,25,35}
    };

    do
    {
        printf("\n\t\t******** D-MART INVOICE ********\n");
        printf("\t\t1. View Inventory Stock\n");
        printf("\t\t2. Purchase Items\n");
        printf("\t\t3. Checkout & Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        while(choice < 1 || choice > 3)
        {
            printf("Invalid Choice!\n");
            printf("Enter Correct Choice: ");
            scanf("%d", &choice);
        }

        if(choice == 1)
        {
            printf("\nID\tQty\tMRP\tOFF\n");

            for(int i = 0; i < 10; i++)
            {
                printf("%d\t%d\t%d\t%d%%\n",
                       p[i].id,
                       p[i].qty,
                       p[i].mrp,
                       p[i].off);
            }
        }

        else if(choice == 2)
        {
            int pid, qty, i;
            float bill, discount, netbill;

            printf("Enter Product ID: ");
            scanf("%d", &pid);

            printf("Enter Quantity: ");
            scanf("%d", &qty);

            for(i = 0; i < 10; i++)
            {
                if(pid == p[i].id)
                {
                    if(qty > p[i].qty)
                    {
                        printf("Insufficient Stock!\n");
                        break;
                    }

                    bill = qty * p[i].mrp;
                    discount = bill * p[i].off / 100.0;
                    netbill = bill - discount;

                    printf("\n===== PURCHASE DETAILS =====\n");
                    printf("Product ID : %d\n", p[i].id);
                    printf("Quantity   : %d\n", qty);
                    printf("MRP        : %d\n", p[i].mrp);
                    printf("Offer      : %d%%\n", p[i].off);
                    printf("Bill       : %.2f\n", bill);
                    printf("Discount   : %.2f\n", discount);
                    printf("Net Bill   : %.2f\n", netbill);

                    p[i].qty -= qty; // Update stock
                    break;
                }
            }

            if(i == 10)
            {
                printf("Product Not Found!\n");
            }
        }

        else
        {
            printf("\n======= CHECKOUT =======\n");
            printf("THANK YOU FOR SHOPPING AT D-MART \n");
        }

    } while(choice != 3);

    return 0;
}