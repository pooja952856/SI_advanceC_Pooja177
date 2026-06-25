
// generate an invoice of different outlets and which include entities's id ,product quantity,product mrp,product discound,product features
//note this online/einvoice system provides the feature to represent the whole stock also provide the functionality to add a single or more items
// note:once the requirement is done user can generate the ereciept by own itself
// hint:each items and their other properties will store in an array of same size
//and with the help of loop we can take 
 #include <stdio.h>

int main()
{
    int choice;
    int ID[10]={101,102,103,104,105,106,107,108,109,110};
    int Qty[10]={10,2,7,5,9,1,17,20,23,11};
    char MRP[10]={10,20,30,40,50,60,70,80,90,25};
    char OFF[10]={10,40,60,50,30,80,11,25,45,35};
    do{

    printf("\t\t********D-MART Invoice*******\t\t\t\n");
    printf("\t\t1. View Inventory Stock\n");
    printf("\t\t2. Purchase Items\n");
    printf("\t\t3. Checkout & Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    while(choice<1||choice>3)
    {
        printf("invalid choice\n");
        printf("please enter the correct choice");
        scanf("%d",&choice);
        if(choice>=1&&choice<=3){
            break;
        }

    }
    

    
    
    if(choice==1)
    {// display stock
        printf("\t\tID\t\tQty\t\tMRP\t\tOFF\n");
        for(int i=0;i<10;i++){
            printf("\t\t%d\t\t%d\t\t%d\t\t%d\n",ID[i],Qty[i],MRP[i],OFF[i]);

        }
        
    }
    else if(choice==2)
    {// dispay purchase functionility
        int pid,qty,i;
        int bill;
        printf("enter product id:");

        scanf("%d",&pid);
        printf("enter product quantity:");
        scanf("%d",&qty);
        for(i=0;i<10;i++){
            if(pid==ID[i]){
              bill=qty*MRP[i];
              printf("\t\t\t=======PURCHASE DETAILS=====\t\t\n");
              printf("product id:%d\n",ID[i]);
              printf("quantity:%d\n",Qty[i]);
              printf("Price:%d\n",MRP[i]);
              printf("Offer:%d\n",OFF[i]);
              printf("bill amount:%d\n",bill);
              break;
              

            }
        }
        if(i==10){
            printf("product not found");
        }
     }
    else
    {// checkout
        printf("\t\t=======CHECKOUT======\n");
        
        printf("THANK YOU FOR SHOPPING AT D-MART");

    }
}while(choice!=3);
}

    
    
       
