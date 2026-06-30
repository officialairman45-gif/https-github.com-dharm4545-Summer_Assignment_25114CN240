#include <stdio.h>

struct Ticket
{
    int seatNo;
    char name[50];
    int booked;
};

int main()
{
    struct Ticket t[10];
    int i, choice, seat, found = 0;

    // Initialize seats
    for(i = 0; i < 10; i++)
    {
        t[i].seatNo = i + 1;
        t[i].booked = 0;
    }

    while(1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. View Booked Tickets\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nAvailable Seats:\n");
                for(i = 0; i < 10; i++)
                {
                    if(t[i].booked == 0)
                        printf("Seat %d\n", t[i].seatNo);
                }
                break;

            case 2:
                printf("Enter Seat Number (1-10): ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10)
                {
                    printf("Invalid Seat Number!\n");
                    break;
                }

                if(t[seat - 1].booked == 1)
                {
                    printf("Seat Already Booked!\n");
                }
                else
                {
                    printf("Enter Passenger Name: ");
                    scanf(" %[^\n]", t[seat - 1].name);

                    t[seat - 1].booked = 1;
                    printf("Ticket Booked Successfully!\n");
                }
                break;

            case 3:
                printf("Enter Seat Number to Cancel: ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10)
                {
                    printf("Invalid Seat Number!\n");
                    break;
                }

                if(t[seat - 1].booked == 1)
                {
                    t[seat - 1].booked = 0;
                    printf("Ticket Cancelled Successfully!\n");
                }
                else
                {
                    printf("Seat is Not Booked!\n");
                }
                break;

            case 4:
                printf("\nBooked Tickets:\n");
                found = 0;

                for(i = 0; i < 10; i++)
                {
                    if(t[i].booked == 1)
                    {
                        printf("Seat No : %d\n", t[i].seatNo);
                        printf("Passenger : %s\n\n", t[i].name);
                        found = 1;
                    }
                }

                if(found == 0)
                    printf("No Tickets Booked!\n");

                break;

            case 5:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}