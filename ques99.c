/*Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/
#include <stdio.h>
int main() {
    char date[15];
    char months[12][4] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int month;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    month = (date[3] - '0') * 10 + (date[4] - '0');

    if (month < 1 || month > 12) {
        printf("Invalid month.\n");
        return 0;
    }

    printf("Formatted date: %c%c-%s-%c%c%c%c\n",
           date[0], date[1],
           months[month - 1],
           date[6], date[7], date[8], date[9]);

    return 0;
}
