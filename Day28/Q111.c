#include <stdio.h>

int main() {
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    while (1) {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Tickets\n");
        printf("2. Check Available Seats\n");
        printf("3. Cancel Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &seats);

                if (seats <= (totalSeats - bookedSeats)) {
                    bookedSeats += seats;
                    printf("%d ticket(s) booked successfully.\n", seats);
                } else {
                    printf("Not enough seats available.\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", totalSeats - bookedSeats);
                printf("Booked Seats: %d\n", bookedSeats);
                break;

            case 3:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &seats);

                if (seats <= bookedSeats) {
                    bookedSeats -= seats;
                    printf("%d ticket(s) cancelled successfully.\n", seats);
                } else {
                    printf("Invalid number of tickets to cancel.\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}