/*
    Project Name : Sports Club Management System.

    Course Code  : CS-115

    Date Started : 26-10-2025

    Contributers : Ahmed Shaikh (CS-25094)
                   Uzair Mehmood (CS-25093)
                   Ebad Ziad Adam (CS-25083)
*/

// HEADER FILES
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*******************************************************************************************/


// STRUCTURE WHICH HELPS TO STORE EVERY BOOKING DETAILS
struct Booking
{
    char name[50];
    char phone_number[20];
    char day[20];
    char court_name[15];
    char timing[10];
};

/*******************************************************************************************/

// FUNCTION PROTOTYPES
void print_menu();                       
void about_club();                       
void check_availability();               
void get_string_input(char[], int);      
int get_int_input();                     
void check_booking();                    
void view_bookings();                    
void book_court();                      
void cancel_booking();                   
void perform_booking(struct Booking);   
void convert_to_lowercase(char[], int); 

/*******************************************************************************************/

// PROGRAM EXECUTION STARTS FROM HERE
int main()
{
    while (1)
    {
        system("cls"); // THIS IS CLEARING THE OUTPUT SCREEN
        printf("==================================================================\n");
        printf("                   WELCOME TO OUR SPORTS CLUB\n");
        printf("==================================================================\n\n");

        print_menu();

        printf("Enter Your Choice: ");
        int choice = get_int_input();

        switch (choice)
        {
        case 1:
            about_club();
            break;

        case 2:
            book_court();
            break;

        case 3:
            check_booking();
            break;

        case 4:
            cancel_booking();
            break;

        case 5:
            check_availability();
            break;
        
        case 6:
            view_bookings();
            break;

        case 7:
            printf("\nThanks For Using Our Management System. See You Soon :)");
            return 0;

        default:
            printf("\nPlease Enter A Valid Choice [1 - 7] Next Time. Enter Any Key To Continue...");
            getch();
            break;
        }
    }

    return 0;
}

/*******************************************************************************************/


// THIS FUNCTION PRINTS THE MAIN MENU TO THE USER
void print_menu()
{
    printf("Menu:\n");
    printf("1. About Our Club\n");
    printf("2. Book Our Court\n");
    printf("3. View Your Booking\n");
    printf("4. Cancel Your Booking\n");
    printf("5. Check Availability Of A Court\n");
    printf("6. View Database\n");
    printf("7. Exit\n");
}

/*******************************************************************************************/


// THIS FUNCTION DISPLAYS THE DETAILS OF THE SPORTS CLUB INCLUDING FACILITIES PROVIDED AND CONTACT DETAILS.
void about_club()
{
    system("cls");

    printf("==================================================================\n");
    printf("                      ABOUT OUR SPORTS CLUB\n");
    printf("==================================================================\n\n");

    printf("Welcome to our Sports Club - a hub for athletes, learners,\n");
    printf("and fitness enthusiasts! We were established with one clear\n");
    printf("mission: to promote a healthy, active, and energetic lifestyle.\n\n");

    printf("Our world-class facilities support a wide range of sports:\n");
    printf(" -> Tennis\n");
    printf(" -> Badminton\n");
    printf(" -> Football\n");
    printf(" -> Cricket\n");
    printf(" -> Basketball\n");
    printf(" -> Hockey\n");
    printf(" -> And many more...\n\n");

    printf("We proudly foster a community built on teamwork, discipline,\n");
    printf("and sportsmanship. Whether you're a beginner or a pro, our\n");
    printf("club helps you grow, compete, and enjoy the true spirit\n");
    printf("of sports.\n\n");

    printf("At our Sports Club, fitness feels fun - not forced. We ensure\n");
    printf("every member feels motivated, valued, and inspired to reach\n");
    printf("their personal goals. Join us and become part of a dynamic,\n");
    printf("passionate sports family that celebrates excellence and the\n");
    printf("joy of an active life!\n\n");

    printf("--------------------------------------------------------------\n");
    printf(" Contact   : +92 3123456789\n");
    printf(" Email     : sportsclub123@gmail.com\n");
    printf(" Website   : www.sportsclub.com\n");
    printf("--------------------------------------------------------------\n\n");

    printf("Press any key to go back to main menu...");
    getch();
}

/*******************************************************************************************/


/* THIS FUNCTION TAKES USER DETAILS AND STORE IT IN BOOKING STRUCT. THEN IT PASSES THIS STRUCT TO
ANOTHER FUNCTION WHICH SAVES THE USER BOOKING DETAILS INTO THE FILE */
void book_court()
{
    system("cls");
    printf("==================================================================\n");
    printf("                BOOK A COURT AT OUR SPORTS CLUB\n");
    printf("==================================================================\n\n");

    printf("Courts:\n");
    printf("1. Cricket\n");
    printf("2. Football\n");
    printf("3. Basketball\n");
    printf("4. Tennis\n");
    printf("5. Badminton\n");
    printf("6. Boxing\n");
    printf("7. Hockey\n");
    printf("8. Volleyball\n");
    printf("9. Table Tennis\n");
    printf("10. Back To Main Menu\n");

    printf("Enter Your Choice: ");
    int choice = get_int_input();

    struct Booking record;

    switch (choice)
    {
    case 1:
        strcpy(record.court_name, "Cricket");
        break;
    case 2:
        strcpy(record.court_name, "Football");
        break;
    case 3:
        strcpy(record.court_name, "Basketball");
        break;
    case 4:
        strcpy(record.court_name, "Tennis");
        break;
    case 5:
        strcpy(record.court_name, "Badminton");
        break;
    case 6:
        strcpy(record.court_name, "Boxing");
        break;
    case 7:
        strcpy(record.court_name, "Hockey");
        break;
    case 8:
        strcpy(record.court_name, "Volleyball");
        break;
    case 9:
        strcpy(record.court_name, "Table Tennis");
        break;
    case 10:
        return;
    default:
        printf("\n\nPlease Select A Valid Option [1-10] Next Time. Enter Any Key To Continue...");
        getch();
        return;
    }

    printf("\nEnter Your Full Name: ");
    get_string_input(record.name, sizeof(record.name));

    printf("\nEnter the day you would like to reserve the court for: ");
    get_string_input(record.day, sizeof(record.day));

    printf("\nEnter your phone number: +92 ");
    get_string_input(record.phone_number, sizeof(record.phone_number));

    printf("\nSelect Your Timings:\n");
    printf("1. Morning\n");
    printf("2. Afternoon\n");
    printf("3. Evening\n");
    printf("4. Night\n");

    printf("Enter Your Choice: ");
    int timing_choice = get_int_input();

    switch (timing_choice)
    {
    case 1:
        strcpy(record.timing, "Morning");
        break;
    case 2:
        strcpy(record.timing, "Afternoon");
        break;
    case 3:
        strcpy(record.timing, "Evening");
        break;
    case 4:
        strcpy(record.timing, "Night");
        break;
    default:
        printf("Please Enter A Valid Choice [1-4] Next Time. Press Any Key To Continue...");
        getch();
        return;
    }

    perform_booking(record); // PASSING ALL THE USER BOOKING DETAILS TO A NEW FUNCTION THROUGH STRUCT

    printf("\n\nCourt Booked Successfully. Press Any Key To Continue...");
    getch();
}

/*******************************************************************************************/


/* THIS FUNCTION CHECKS IF A BOOKING EXISTS FOR THE NAME ENTERED BY THE USER. IT OPENS THE RECORD FILE
AND GO THROUGH EVERY BOOKING AND WHEN IT FOUNDS THE NAME, IT PRINTS IT DETAILS. */
void check_booking()
{
    system("cls");
    printf("==================================================================\n");
    printf("            CHECK YOUR BOOKING AT OUR SPORTS CLUB\n");
    printf("==================================================================\n\n");

    char check_name[50];
    printf("Please Enter Your Full Name As Entered While Booking: ");
    get_string_input(check_name, sizeof(check_name));
    convert_to_lowercase(check_name, sizeof(check_name));

    FILE *my_file = fopen("./booking.txt", "r");

    if (my_file == NULL)
    {
        printf("Error: Unable To Access Booking Records...!");
        getch();
        return;
    }

    char name[50], court[15], day[20], timing[10], phone_number[20];
    int found = 0;

    while (fscanf(my_file, " %49[^,], %19[^,], %14[^,], %19[^,], %9[^\n]", name, phone_number, court, day, timing) == 5)   
    {
        char temp[50];
        strcpy(temp, name);

        convert_to_lowercase(temp, sizeof(temp));

        if (strcmp(check_name, temp) == 0)
        {
            printf("\n\nRecord founded:");
            printf("\nName: %s", name);
            printf("\nCourt: %s", court);
            printf("\nPhone number: %s", phone_number);
            printf("\nDay: %s", day);
            printf("\nTiming: %s", timing);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\n\nError: Record Not Found. Please Enter Correct Details..!");
    }

    printf("\n\nPress any key to go back to main menu...");
    getch();
    fclose(my_file);
}

/*******************************************************************************************/


/* THIS FUNCTION CANCELS THE BOOKING FOR THE NAME ENTERED BY THE USER. IT OPENS THE RECORD FILE AND GO
THROUGH EVERY BOOKING AND COPY IT TO A NEW FILE. IF IT FOUNDS THE NAME, IT SKIPS THAT RECORD SO THAT THE
NEW FILE DOESNT STORE IT. AT LAST IT REMOVES THE ORIGINAL RECORD FILE AND RENAMES THE NEW FILE TO ORIGINAL. */
void cancel_booking()
{
    system("cls");
    printf("==================================================================\n");
    printf("            CANCEL YOUR BOOKING AT OUR SPORTS CLUB\n");
    printf("==================================================================\n\n");
    FILE *my_file = fopen("./booking.txt", "r");

    if (my_file == NULL)
    {
        printf("\n\nError: Could not open file.");
        getch();
        return;
    }

    FILE *temp_file = fopen("./temp.txt", "w");

    if (temp_file == NULL)
    {
        printf("\n\nError: Could not open file.");
        fclose(my_file);
        getch();
        return;
    }

    char name[50], court[15], day[20], timing[10], phone_number[20];
    char check_name[50];
    int found = 0;

    printf("Please Enter Your Full Name As Entered While Booking: ");
    get_string_input(check_name, sizeof(check_name));
    convert_to_lowercase(check_name, sizeof(check_name));

    while (fscanf(my_file, " %49[^,], %19[^,], %14[^,], %19[^,], %9[^\n]", name, phone_number, court, day, timing) == 5)
    {
        char temp[50];
        strcpy(temp, name);

        convert_to_lowercase(temp, sizeof(temp));

        if (strcmp(temp, check_name) == 0)
        {
            found = 1;
            continue;
        }
        fprintf(temp_file, "%s, %s, %s, %s, %s\n", name, phone_number, court, day, timing);
    }

    fclose(my_file);
    fclose(temp_file);

    remove("booking.txt");             // DELETING THE OLD FILE
    rename("temp.txt", "booking.txt"); // RENAMING THE NEW FILE

    if (found)
        printf("\n\nYour Booking Has Been Successfully Cancelled.");
    else
        printf("\n\nError: Record Not Found. Please Enter Correct Details...!");

    printf("\n\nPress any key to go back to main menu...");
    getch();
}

/*******************************************************************************************/


/* THIS FUNCTION CHECKS THE AVAILABILITY OF A COURT AT USER ENTERED TIMINGS. IF THE COURT IS AVAILABLE, THEN IT
ASKS THE USER IF THEY WANT TO BOOK THE COURT, THEN IT TAKES REMAINING DETAILS OF THE USER AND BOOKS THE COURT. */
void check_availability()
{
    system("cls");
    printf("==================================================================\n");
    printf("        CHECK AVAILABILITY OF A COURT AT OUR SPORTS CLUB\n");
    printf("==================================================================\n\n");

    struct Booking record;
    char check_court[15], check_day[20], check_timing[10];
    printf("Select the court you want to check\n");
    printf("1. Cricket\n");
    printf("2. Football\n");
    printf("3. Basketball\n");
    printf("4. Tennis\n");
    printf("5. Badminton\n");
    printf("6. Boxing\n");
    printf("7. Hockey\n");
    printf("8. Volleyball\n");
    printf("9. Table Tennis\n");
    printf("10. Back To Main Menu\n");

    printf("Enter your choice: ");
    int choice = get_int_input();

    switch (choice)
    {
    case 1:
        strcpy(check_court, "Cricket");
        break;
    case 2:
        strcpy(check_court, "Football");
        break;
    case 3:
        strcpy(check_court, "Basketball");
        break;
    case 4:
        strcpy(check_court, "Tennis");
        break;
    case 5:
        strcpy(check_court, "Badminton");
        break;
    case 6:
        strcpy(check_court, "Boxing");
        break;
    case 7:
        strcpy(check_court, "Hockey");
        break;
    case 8:
        strcpy(check_court, "Volleyball");
        break;
    case 9:
        strcpy(check_court, "Table Tennis");
        break;
    case 10:
        return;
    default:
        printf("\n\nPlease Select A Valid Option [1-10] Next Time. Enter Any Key To Continue... ");
        getch();
        return;
    }
    
    printf("\nEnter the day: ");
    get_string_input(check_day, sizeof(check_day));
    convert_to_lowercase(check_day, sizeof(check_day));

    printf("\nSelect the timing:\n");
    printf("1.Morning\n");
    printf("2.Afternoon\n");
    printf("3.Evening\n");
    printf("4.Night\n");
    printf("Enter your choice:");

    int timing_choice = get_int_input();

    switch (timing_choice)
    {
        case 1:
            strcpy(check_timing, "Morning");
            break;
        case 2:
            strcpy(check_timing, "Afternoon");
            break;
        case 3:
            strcpy(check_timing, "Evening");
            break;
        case 4:
            strcpy(check_timing, "Night");
            break;
        default:
            printf("Please enter valid choice [1-4] next time. Press any key to continue... ");
            getch();
            return;
    }

    int found = 0;
    FILE *my_file = fopen("./booking.txt", "r");
    if (my_file == NULL)
    {
        printf("Cannot check availability....");
        getch();
        return;
    }

    char name[50], court[15], day[20], timing[10], phone_number[20];

    while (fscanf(my_file, " %49[^,], %19[^,], %14[^,], %19[^,], %9[^\n]", name, phone_number, court, day, timing) == 5)
    {
        convert_to_lowercase(day, sizeof(day));

        if (strcmp(check_court, court) == 0 && strcmp(check_day, day) == 0 && strcmp(check_timing, timing) == 0)
        {
            found = 1;
            break;
        }
    }
    fclose(my_file);

    if (found)
    {
        printf("\nSorry! This court is not available at the given timings.");
        printf("\nPress any key to go back to main menu... ");
        getch();
        return;
    }

    if (!found)
    {
        printf("\nThe court is available\n");
        printf("Press 1 to book the court or any other key to return to main menu... ");
        int press = get_int_input();
        if (press == 1)
        {
            printf("\nEnter your full name: ");
            get_string_input(record.name, sizeof(record.name));

            printf("\nEnter your phone number: +92 ");
            get_string_input(record.phone_number, sizeof(record.phone_number));

            strcpy(record.court_name, check_court);
            strcpy(record.timing, check_timing);
            strcpy(record.day, check_day);

            perform_booking(record);

            printf("\n\nThe court is booked successfully!\n");
            printf("Press any key to go back to main menu... ");
            getch();
            return;
        }
    }
}

/***************************************************************************************************/


// IT IS AN ADMINISTRATIVE FUNCTION. IT FIRST ASKS FOR THE ADMINISTRATIVE PIN AND THEN SHOWS ALL THE BOOKINGS.
void view_bookings()
{
    system("cls");
    printf("==================================================================\n");
    printf("              VIEW ALL BOOKINGS AT OUR SPORTS CLUB\n");
    printf("==================================================================\n\n");

    char password[] = "839493";

    char pin[20];
    printf("Enter Administrative PIN: ");
    get_string_input(pin, sizeof(pin));

    if (strcmp(password, pin) != 0)
    {
        printf("\nEntered PIN Is Incorrect. Please Try Again Later...");
        printf("\n\nPress Any Key To Continue...");
        getch();
        return;
    }

    FILE *my_file = fopen("./booking.txt", "r");
    if (my_file == NULL)
    {
        printf("\n\nError: Could not open file. Please try again later...");
        getch();
        return;
    }

    char name[50], court[15], day[20], timing[10], phone_number[20];

    printf("\n-------------------------------------------------------------------------------------------------\n");
    printf("| %-25s | %-19s | %-14s | %-13s | %-10s |\n", "Name", "Contact", "Court", "Day", "Timings");
    printf("-------------------------------------------------------------------------------------------------\n");

    int count = 0;
    while (fscanf(my_file, " %49[^,], %19[^,], %14[^,], %19[^,], %9[^\n]", name, phone_number, court, day, timing) == 5)
    {
        printf("| %-25s | %-19s | %-14s | %-13s | %-10s |\n", name, phone_number, court, day, timing);
        count++;
    }
    printf("-------------------------------------------------------------------------------------------------\n");

    if (count == 0)
        printf("\nNo bookings found!\n");

    fclose(my_file);

    printf("\n\nPress any key to go back to main menu...");
    getch();
}

/***************************************************************************************************/


// THIS IS A HELPER FUNCTION FOR USER'S BOOKING AS IT SAVES THE USER'S DETAILS TO A FILE.
void perform_booking(struct Booking record)
{
    FILE *my_file;
    my_file = fopen("./booking.txt", "a");

    if (my_file == NULL)
    {
        printf("\n\nError: Can Not Perform Booking..!");
        getch();
        return;
    }

    fprintf(my_file, "%s, +92 %s, %s, %s, %s\n", record.name, record.phone_number, record.court_name, record.day, record.timing);
    fclose(my_file);
}

/*******************************************************************************************/


/* THIS IS A HELPER FUNCTION FOR TAKING INTEGER INPUT. AS OUR PROGRAM TAKES INTEGER INPUT MANY TIMES,
WE CREATED A FUNCTION WHICH TAKES INTEGER AS INPUT AND RETURNS TO THE CALLER TO PROMOTE MODULARITY. */
int get_int_input()
{
    char buffer[100]; // WE USED STRING INSTEAD OF AN INTEGER TO HANDLE CASES WHERE USER ENTERS INVALID INPUTS
    
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        return atoi(buffer); // IT RETURNS THE STRING ENTERED BY THE USER CONVERTED TO INTEGER.
    }
    
    return -1;
}

/*******************************************************************************************/


// THIS IS A HELPER FUNCTION WHICH CONVERTS A STRING TO ITS LOWERCASE FOR COMPARING PURPOSES.
void convert_to_lowercase(char str[], int length)
{
    for (int i = 0; i < length; ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32; // ADDS 32 TO CURRENT CHARACTER ASCII VALUE
    }
}

/*******************************************************************************************/


/* THIS IS A HELPER FUNCTION FOR TAKING STRING INPUT. AS OUR PROGRAM TAKES STRING INPUT MANY TIMES,
WE CREATED A FUNCTION WHICH TAKES STRING AS INPUT TO PROMOTE MODULARITY. */
void get_string_input(char str[], int size)
{
    if (fgets(str, size, stdin) != NULL)
        str[strcspn(str, "\n")] = 0; // REMOVES THE NEWLINE CHARACTER FROM THE STRING INSERTED TRHOUGH fgets()
}
/*******************************************************************************************/