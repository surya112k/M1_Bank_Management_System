/**
 * @file main.c
 * @author Surya
 * @brief Bank Management System
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "./inc/headers.h" ///< import the packages consists of header files.


/**
 * @brief Program starts from here main function.
 * @brief After enter the creditional the screen goes to main page of the program.
*/
void main()
{
    char pass[20],password[20]="#@developer";
    const char *title = "Bank Management System";
    const int title_width = strlen(title);
    const int screen_width = GetColumnWidth();
    const int field_width = (screen_width - title_width) / 2 + title_width;
    printf("%*s\n", field_width, title);
    
    const char *P1 = "Enter the password to login:";
    const int P1_width = strlen(P1);
    const int field_width_1 = (screen_width - P1_width) / 2 + P1_width;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n%*s", field_width_1, P1);
    scanf("%s",pass);

    if (strcmp(pass,password)==0)
        {
            printf("\n\nPassword Match!\nLOADING");
            for(i=0;i<=6;i++)
                {
                    delay(100000000);
                    printf(".");
                }
            menu();
        }
    else
        {
            printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                {
                    system("cls");
                    main();
                }
            else if (main_exit==0)
                {
                    system("cls");
                    close();
                }
            else
                {
                    printf("\nInvalid!");
                    delay(1000000000);
                    system("cls");
                    goto login_try;
                }
        }
}