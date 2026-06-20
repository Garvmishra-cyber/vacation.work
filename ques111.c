//question111
#include <stdio.h>

int main() {
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, tickets;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Tickets\n");
        printf("2. Cancel Tickets\n");
        printf("3. View Available Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);

                if (tickets <= (totalSeats - bookedSeats)) {
                    bookedSeats += tickets;
                    printf("%d ticket(s) booked successfully.\n", tickets);
                } else {
                    printf("Sorry! Not enough seats available.\n");
                }
                break;

            case 2:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &tickets);

                if (tickets <= bookedSeats) {
                    bookedSeats -= tickets;
                    printf("%d ticket(s) cancelled successfully.\n", tickets);
                } else {
                    printf("Invalid cancellation request.\n");
                }
                break;

            case 3:
                printf("Total Seats     : %d\n", totalSeats);
                printf("Booked Seats    : %d\n", bookedSeats);
                printf("Available Seats : %d\n", totalSeats - bookedSeats);
                break;

            case 4:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}