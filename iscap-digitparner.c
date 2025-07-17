#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>


// Functions
int simple_calculator();
int perinfo();
int perread();
int addition();
int subtract();
int multiply();
int divide();
int square();
int exponential();
int logarithm();
int squareRoot();
void exitCalculator();
int expense();
int pass();
int healthcarecalculator();
int trigono_calculator();
int number_system_conversion();
int phonebook();
int printCalendar(int year);
int isLeapYear(int year);
int getDayNumber(int day, int month, int year);

int main()
{
    int choice,info;
    char big3[] =
       "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   #####  \n"
        "\t\t\t\t\t\t\t      ## \n"
        "\t\t\t\t\t\t\t       ##\n"
        "\t\t\t\t\t\t\t  #####  \n"
        "\t\t\t\t\t\t\t       ##\n"
        "\t\t\t\t\t\t\t      ## \n"
        "\t\t\t\t\t\t\t  #####  \n";
    char big2[] =
        "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t  #####  \n"
        "\t\t\t\t\t\t\t ##     ## \n"
        "\t\t\t\t\t\t\t##       ##\n"
        "\t\t\t\t\t\t\t        ##\n"
        "\t\t\t\t\t\t\t      ## \n"
        "\t\t\t\t\t\t\t     ##  \n"
        "\t\t\t\t\t\t\t  ##########\n";

        char big1[] =
        "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t    ##  \n"
        "\t\t\t\t\t\t\t   ###  \n"
        "\t\t\t\t\t\t\t ## ##  \n"
        "\t\t\t\t\t\t\t    ##  \n"
        "\t\t\t\t\t\t\t    ##  \n"
        "\t\t\t\t\t\t\t    ##  \n"
        "\t\t\t\t\t\t\t ########\n";

    system("color 00");
    sleep(4);
    system("color 10");
    printf("Hello!!!...");
    sleep(3);
    system("cls");
    printf("Welcome you to our project");
    sleep(3);
    system("cls");
    system("color 20");
    printf(".......................................ISCAP DIGIPARTNER....................................................");
    system("color 50");
    sleep(3);
    system("cls");
    printf("lets start.....");
    sleep(4);
    system("cls");
    system("color 30");
    printf("%s", big3);
    sleep(1);
    system("cls");
    system("color 40");
    printf("%s", big2);
    sleep(1);
    system("cls");
    system("color 50");
    printf("%s", big1);
    sleep(1);
    system("cls");
    system("color F0");
    homescreen:
    system("cls");
    hs:
    printf("\t\t\t\tDIGITAL PARTNER(ISCAP)\n");
    printf("Enter:\n1. Calculator\n2. Calendar\n3. health calculator\n4. number system convertor \n5. Phonebook \n6. personal informatiom\n7. expense tracker\n8. password manager\n9. exit\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
                simple_calculator();
                goto homescreen;
        case 2:

                {
                    int year;
                    printf("Enter the year for the calendar: ");
                    scanf("%d", &year);
                    printCalendar(year);
                    goto hs;
                }
        case 3:
                if(healthcarecalculator()==10)
                {
                    system("cls");
                    goto homescreen;
                }
                break;
        case 4:
                number_system_conversion();
                goto homescreen;
        case 5:
                menu();
                goto homescreen;
        case 6:
                mark:
                    printf("1.view personal info\n2.edit or write personal information\n3.exit\n");
                    scanf("%d",&info);
                    if (info==2)
                    {
                        perinfo();
                        goto mark;
                    }
                    if (info==1)
                    {
                        perread();
                        goto mark;
                    }
                    if (info==3)
                    {
                        goto homescreen;
                    }
                    goto homescreen;
        case 7:
                expense();
                goto homescreen;
        case 8:
                pass();
                goto homescreen;
        case 9:
                printf("Goodbye!\n");
                break;
        default:
                printf("Invalid choice.\n");
                goto homescreen;
    }

    return 0;
}
//phonebook
struct person
{
    char name[35];
    char address[150];
    char father_name[35];
    char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[150];
    char citision_no[20];

};
void menu();
void got();
void start();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();

void menu()
{
    system("cls");
    printf("\t\t**********WELCOME TO PHONEBOOK*************");
    printf("\n\n\t\t\t  MENU\t\t\n\n");
    printf("\t1.Add New   \t2.List   \t3.Exit  \n\t4.Modify \t5.Search\t6.Delete\n\nEnter:");

    switch(getch())
    {
        case '1':
                addrecord();
                break;
        case '2':
                listrecord();
                break;
        case '3':
                break;
        case '4':
                modifyrecord();
                break;
        case '5':
                searchrecord();
                break;
        case '6':
                deleterecord();
                break;
        default:
                system("cls");
                printf("\nEnter 1 to 6 only");
                printf("\n Enter any key");
                getch();
    }
}
void addrecord()
{
    system("cls");
    FILE *f;
    struct person p;
    f=fopen("project","ab+");
    printf("\n Enter name: ");
    got(p.name);
    printf("\nEnter the address: ");
    got(p.address);
    printf("\nEnter father name: ");
    got(p.father_name);
    printf("\nEnter mother name: ");
    got(p.mother_name);
    printf("\nEnter phone no.:");
    scanf("%ld",&p.mble_no);
    printf("Enter sex:");
    got(p.sex);
    printf("\nEnter e-mail:");
    got(p.mail);
    printf("\nEnter Aadhar no:");
    got(p.citision_no);
    fwrite(&p,sizeof(p),1,f);
    fflush(stdin);
    printf("\nrecord saved");
    fclose(f);
    printf("\n\nEnter any key");
    getch();
    system("cls");
    menu();
}
void listrecord()
{
    struct person p;
    FILE *f;
    f=fopen("project","rb");
    if(f==NULL)
    {
        printf("\nfile opening error in listing :");
        exit(1);
    }
    while(fread(&p,sizeof(p),1,f)==1)
    {
        printf("\n\n\n YOUR RECORD IS\n\n ");
        printf("\nName=%s\nAdress=%s\nFather name=%s\nMother name=%s\nMobile no=%ld\nSex=%s\nE-mail=%s\nAadhar no=%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);
        getch();
        system("cls");
    }
    fclose(f);
    printf("\n Enter any key");
    getch();
    system("cls");
    menu();
}
void searchrecord()
{
    struct person p;
    FILE *f;
    char name[100];
    int count=0;
    f=fopen("project","rb");
    if(f==NULL)
    {
        printf("\n error in opening\a\a\a\a");
        exit(1);
    }
    printf("\nEnter name of person to search\n");
    got(name);
    while(fread(&p,sizeof(p),1,f)==1)
    {
        if(strcmp(p.name,name)==0)
        {
            printf("\n\tDetail Information About %s",name);
            printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nAadhar no:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);
            count++;
        }
        else
        {
            continue;
            count++;
        }
    }
    if(count==0)
    {
        printf("\n\nSorry...No such FILE is found");
    }
    fclose(f);
    printf("\n Enter any key");
    getch();
    system("cls");
    menu();
}
void deleterecord()
{
    struct person p;
    FILE *f,*ft;
    int flag;
    char name[100];
    f=fopen("project","rb");
    if(f==NULL)
    {
        printf("\nCONTACT'S DATA NOT ADDED YET.");
    }
    else
    {
        ft=fopen("temp","wb+");
        if(ft==NULL)
        {
            printf("file opening error");
        }
        else
        {
            printf("Enter CONTACT'S NAME:");
            got(name);
            fflush(stdin);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(p.name,name)!=0)
                {
                    fwrite(&p,sizeof(p),1,ft);
                }
                if(strcmp(p.name,name)==0)
                {
                    flag=1;
                }
            }
            fclose(f);
            fclose(ft);
            if(flag!=1)
            {
                printf("NO CONACT'S RECORD TO DELETE.");
                remove("temp.txt");
            }
            else
            {
                remove("project");
                rename("temp.txt","project");
                printf("RECORD DELETED SUCCESSFULLY.");
            }
        }
    }
    printf("\n Enter any key");
    getch();
    system("cls");
}
void modifyrecord()
{
    int c;
    FILE *f;
    int flag=0;
    struct person p,s;
    char  name[50];
    f=fopen("project","rb+");
    if(f==NULL)
    {
        printf("CONTACT'S DATA NOT ADDED YET.");
        exit(1);
    }
    else
    {
        system("cls");
        printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
        got(name);
        while(fread(&p,sizeof(p),1,f)==1)
        {
            if(strcmp(name,p.name)==0)
            {
                printf("\n Enter name:");
                got(s.name);
                printf("\nEnter the address:");
                got(s.address);
                printf("\nEnter father name:");
                got(s.father_name);
                printf("\nEnter mother name:");
                got(s.mother_name);
                printf("\nEnter phone no:");
                scanf("%ld",&s.mble_no);
                printf("\nEnter gender:");
                got(s.sex);
                printf("\nEnter e-mail:");
                got(s.mail);
                printf("\nEnter Aadhar no:\n");
                got(s.citision_no);
                fseek(f,-sizeof(p),SEEK_CUR);
                fwrite(&s,sizeof(p),1,f);
                flag=1;
                break;
            }
                fflush(stdin);
        }
        if(flag==1)
        {
            printf("\n your data id modified");
        }
        else
        {
            printf(" \n data is not found");
        }
        fclose(f);
    }
    printf("\n Enter any key");
    getch();
    system("cls");
    menu();
}
void got(char *name)
{
    int i=0,j;
    char c,ch;
    do
    {
        c=getch();
        if(c!=8&&c!=13)
        {
            *(name+i)=c;
            putch(c);
            i++;
        }
        if(c==8)
        {
            if(i>0)
            {
                i--;
            }
            // printf("h");
            system("cls");
            for(j=0;j<i;j++)
            {
                ch=*(name+j);
                putch(ch);
            }
        }
    }while(c!=13);
    *(name+i)='\0';
}

//calculator
int simple_calculator()
{
    int op;
    do {
        printf("Select an operation to perform in the calculator:\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Trigonometric functions\n6. Exponential\n7. Logarithm\n8. Exit\n");
        printf("Please make a choice: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                addition();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                trigono_calculator();
                break;
            case 6:
                exponential();
                break;
            case 7:
                logarithm();
                break;
            case 8:
                return 10;
            default:
                printf("Invalid choice.\n");
                break;
        }
        printf("\n**********************************************\n");
    } while (op != 12);

    return 0;
}

int addition()
 {
    int i, sum = 0, num, f_num;
    printf("...............Addition................\n");
    printf("How many numbers do you want to add: ");
    scanf("%d", &num);
    printf("Enter the numbers:\n");
    for (i = 1; i <= num; i++)
    {
        scanf("%d", &f_num);
        sum = sum + f_num;
    }
    printf("Total Sum of the numbers = %d\n",sum);
    return 0;
}

int subtract()
{
    int n1, n2, res;
    printf("----------------Subtraction-------------------\n");
    printf("The first number is: ");
    scanf("%d", &n1);
    printf("The second number is: ");
    scanf("%d", &n2);
    res = n1 - n2;
    printf("The subtraction of %d - %d is: %d\n", n1, n2, res);
    return 0;
}

int multiply()
 {
    int n1, n2, res;
    printf("**************Multiplication****************\n");
    printf("The first number is: ");
    scanf("%d", &n1);
    printf("The second number is: ");
    scanf("%d", &n2);
    res = n1 * n2;
    printf("The multiplication of %d * %d is: %d\n", n1, n2, res);
    return 0;
}

int divide()
 {
    float n1, n2, res;
    printf(".-.-.-.-.-.-.-.-.-.Division.-.-.-.-.-.-.-.-.-.-.-\n");
    printf("The first number is: ");
    scanf("%f", &n1);
    printf("The second number is: ");
    scanf("%f", &n2);
    if (n2 == 0)
    {
        printf("Divisor cannot be zero. Please enter another value.\n");
        scanf("%d", &n2);
    }
    res = n1 / n2;
    printf("The division of %.2f / %.2f is: %.2f\n", n1, n2, res);
    return 0;
}
int trigono_calculator()
{
    char choice;
    do {
        printf("Trigonometric Calculator Menu:\n");
        printf("1. Sine\n");
        printf("2. Cosine\n");
        printf("3. Tangent\n");
        printf("4. Cosecant\n");
        printf("5. Secant\n");
        printf("6. Cotangent\n");
        printf("Enter your choice (1-6): ");
        int option;
        scanf("%d", &option);
        if (option < 1 || option > 6)
        {
            printf("Invalid choice. Please enter a valid option.\n");
            continue;
        }
        double angle_degrees;
        printf("Enter an angle in degrees: ");
        scanf("%lf", &angle_degrees);
        double angle_radians = angle_degrees * M_PI / 180.0;
        double result;
        char* function_name;

        switch (option)
         {
            case 1:
                result = sin(angle_radians);
                function_name = "Sine";
                break;
            case 2:
                result = cos(angle_radians);
                function_name = "Cosine";
                break;
            case 3:
                result = tan(angle_radians);
                function_name = "Tangent";
                break;
            case 4:
                if (angle_degrees == 0 || fmod(angle_degrees, 180.0) == 0)
                {
                    printf("Cosecant is undefined for this angle.\n");
                    continue;
                }
                result = 1 / sin(angle_radians);
                function_name = "Cosecant";
                break;
            case 5:
                if (fmod(angle_degrees, 90.0) == 0)
                {
                    printf("Secant is undefined for this angle.\n");
                    continue;
                }
                result = 1 / cos(angle_radians);
                function_name = "Secant";
                break;
            case 6:
                if (fmod(angle_degrees, 180.0) == 0)
                {
                    printf("Cotangent is undefined for this angle.\n");
                    continue;
                }
                result = 1 / tan(angle_radians);
                function_name = "Cotangent";
                break;
            default:
                break;
        }
        printf("%s of %.2lf degrees is: %.4lf\n", function_name, angle_degrees, result);
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

int exponential()
{
    int n1,n2;
    float ex;
    printf(">>>>>>>>>>>>>>>>Exponential<<<<<<<<<<<<<<\n");
    printf("Enter the base value:");
    scanf("%d",&n1);
    printf("Enter the power value:");
    scanf("%d",&n2);
    ex=pow(n1,n2);
    printf("The exponent value of %d to the power %d is %.3f\n",n1,n2,ex);
    return 0;
}
int logarithm()
{
    int n1,n2;
    float lg;
    printf("<<<<<<<<<<<<<<<<Logarithm>>>>>>>>>>>>>>>>>>>\n");
    printf("1.Natural Logarithm\n2. Base 10 Logarithm\n");
    scanf("%d",&n1);
    switch(n1)
    {
        case 1:
            printf("Enter the number :");
            scanf("%d",&n2);
            lg=log(n2);
            printf("The log of %d is %.3f\n",n2,lg);
            break;
        case 2:
            printf("Enter the number :");
            scanf("%d",&n2);
            lg=log10(n2);
            printf("The log of %d to the base 10 is %.3f\n",n2,lg);
            break;
        default:
            printf("Invalid input!!\n");
    }
    return 0;
}



//calender
int printCalendar(int year)
{
    int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const char* daysOfWeek[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    printf("Calendar for the year %d:\n\n", year);
    int month,i,day;
    for (month = 0; month < 12; month++)
    {
        printf("------------ %s ------------\n", months[month]);
        printf("Mon Tue Wed Thu Fri Sat Sun\n");

        int dayNumber = getDayNumber(1, month + 1, year);

        // Print leading spaces
        for (i = 0; i < dayNumber; i++)
        {
            printf("    ");
        }

        for ( day = 1; day <= daysInMonth[month]; day++)
        {
            printf("%3d ", day);
            if ((day + dayNumber) % 7 == 0 || day == daysInMonth[month])
            {
                printf("\n");
            }
        }

        printf("\n");
    }
    return 0;
}

int isLeapYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int getDayNumber(int day, int month, int year)
 {

    if (month < 3)
    {
        month += 12;
        year--;
    }
    return (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
}


// Health calculator
int healthcarecalculator()
{
    int choice;
    bmi:
    printf("1.BMI calculator\n2.Calories Counter\n3.Nutrition Analysis\n4.exit");
    printf("\nEnter the respective number that you want to calculate: ");
    scanf("%d",&choice);
    if(choice==1)
    {    //BMI Calculator....
        float weight, height_cm,height_m,bmi;
        printf("Enter your weight in kilograms: ");
        scanf("%f", &weight);
        printf("Enter your height in centimers: ");
        scanf("%f", &height_cm);
        height_m=height_cm/100;
        bmi = weight / (height_m * height_m);
        printf("Your BMI is: %.2f\n", bmi);
        if (bmi < 18.5)
        {
            printf("You are underweight.\n");
        }
        else if (bmi >= 18.5 && bmi < 25)
        {
            printf("You are in the healthy weight range.\n");
        }
        else if (bmi >= 25 && bmi < 30)
        {
            printf("You are overweight.\n");
        }
        else
        {
            printf("You are obese.\n");
        }
        goto bmi;
        return 0;
    }

//Calories Counter
    else if(choice==2)
    {
        void displayActivityOptions()
        {
            printf("Choose an activity:\n");
            printf("1. Walking\n");
            printf("2. Running\n");
            printf("3. Bicycling\n");
            printf("4. Swimming\n");
            printf("5. Jumping rope\n");
            printf("6. Yoga\n");
    // Add more activities as needed
            printf("Enter 0 to exit.\n");
        }
        float weight, calories = 0;
        int activity;
        printf("Enter your weight in kilograms: ");
        scanf("%f", &weight);
        while (1)
        {
            displayActivityOptions();
            printf("Enter activity choice (0 to exit): ");
            scanf("%d", &activity);
            if (activity == 0)
            {
                break;
            }
            float met_values[] = {3.8, 8.0, 7.5, 7.0, 12.0, 2.5}; // MET values for corresponding activities
            if (activity >= 1 && activity <= 6)
            {
                float duration;
                printf("Enter the duration of the activity in hours: ");
                scanf("%f", &duration);
                calories = met_values[activity - 1] * weight * duration;
                printf("You burned %.2f calories.\n", calories);
            }
            else
            {
                printf("Invalid activity choice.\n");
            }
        }
        goto bmi;
    }
    else if(choice==3)
    {
//Nutrition analysis
        float gramsOfCarbs, gramsOfProtein, gramsOfFat;
        float caloriesFromCarbs, caloriesFromProtein, caloriesFromFat;
        float totalCalories, percentCaloriesFromFat;
        printf("Enter grams of carbohydrates: ");
        scanf("%f", &gramsOfCarbs);
        printf("Enter grams of protein: ");
        scanf("%f", &gramsOfProtein);
        printf("Enter grams of fat: ");
        scanf("%f", &gramsOfFat);

    //calories from macronutrient

        caloriesFromCarbs = gramsOfCarbs * 4;   // 4 calories per gram of carbohydrates
        caloriesFromProtein = gramsOfProtein * 4; // 4 calories per gram of protein
        caloriesFromFat = gramsOfFat * 9;       // 9 calories per gram of fat

    // total calories
        totalCalories = caloriesFromCarbs + caloriesFromProtein + caloriesFromFat;

    // percentage of calories from fat
        percentCaloriesFromFat = (caloriesFromFat / totalCalories) * 100;

    // results
        printf("\nNutrition Information\n");
        printf("Calories from Carbohydrates: %.2f\n", caloriesFromCarbs);
        printf("Calories from Protein: %.2f\n", caloriesFromProtein);
        printf("Calories from Fat: %.2f\n", caloriesFromFat);
        printf("Total Calories: %.2f\n", totalCalories);
        printf("Percentage of Calories from Fat: %.2f%%\n", percentCaloriesFromFat);
        if(percentCaloriesFromFat>35)
        {
            printf("*Your fat percentage is too high \n*You have to reduce the fat consumption\n*Otherwise it leads to the risk of,Obesity, Diabetes and other cardiovascular problems.\n");
        }
        else if(percentCaloriesFromFat<20)
        {
            printf("*You have to increase your fat consumption.\n*Your resistance to disease and energy are lower.\n*You are at the risk of health problems.\n");
        }
        else
        {
            printf("CONGTRADULATIONS\n You have a balanced Diet\n");
        }
        goto bmi;
        return 0;
    }
    else if (choice==4)
    {
        return 10;
    }
}
int number_system_conversion()
{
    int choice;
    char number[50];
    numbersystem:
    printf("\n**********************************************\n");
    printf("Number System Conversion\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Decimal to Octal\n");
    printf("4. Octal to Decimal\n");
    printf("5. Decimal to Hexadecimal\n");
    printf("6. Hexadecimal to Decimal\n");
    printf("7. Binary to Octal\n");
    printf("8. Binary to Hexadecimal\n");
    printf("9. Octal to Binary\n");
    printf("10. Hexadecimal to Binary\n");
    printf("11.exit\n");
    printf("Enter your choice (1-11): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1: // Decimal to Binary
            printf("Enter a decimal number: ");
            scanf("%d", &choice);
            itoa(choice, number, 2);
            printf("Binary: %s\n", number);
            goto numbersystem;

        case 2: // Binary to Decimal
            printf("Enter a binary number: ");
            scanf("%s", number);
            int decimal = strtol(number, NULL, 2);
            printf("Decimal: %d\n", decimal);
            goto numbersystem;

        case 3: // Decimal to Octal
            printf("Enter a decimal number: ");
            scanf("%d", &choice);
            itoa(choice, number, 8);
            printf("Octal: %s\n", number);
            goto numbersystem;

        case 4: // Octal to Decimal
            printf("Enter an octal number: ");
            scanf("%s", number);
            int octal = strtol(number, NULL, 8);
            printf("Decimal: %d\n", octal);
            goto numbersystem;

        case 5: // Decimal to Hexadecimal
            printf("Enter a decimal number: ");
            scanf("%d", &choice);
            itoa(choice, number, 16);
            printf("Hexadecimal: %s\n", number);
            goto numbersystem;

        case 6: // Hexadecimal to Decimal
            printf("Enter a hexadecimal number: ");
            scanf("%s", number);
            int hexadecimal = strtol(number, NULL, 16);
            printf("Decimal: %d\n", hexadecimal);
            goto numbersystem;

        case 7: // Binary to Octal
            printf("Enter a binary number: ");
            scanf("%s", number);
            int octal_binary = strtol(number, NULL, 2);
            itoa(octal_binary, number, 8);
            printf("Octal: %s\n", number);
            goto numbersystem;

        case 8: // Binary to Hexadecimal
            printf("Enter a binary number: ");
            scanf("%s", number);
            int hex_binary = strtol(number, NULL, 2);
            itoa(hex_binary, number, 16);
            printf("Hexadecimal: %s\n", number);
            goto numbersystem;

        case 9: // Octal to Binary
            printf("Enter an octal number: ");
            scanf("%s", number);
            int binary_octal = strtol(number, NULL, 8);
            itoa(binary_octal, number, 2);
            printf("Binary: %s\n", number);
            goto numbersystem;

        case 10: // Hexadecimal to Binary
            printf("Enter a hexadecimal number: ");
            scanf("%s", number);
            int binary_hex = strtol(number, NULL, 16);
            itoa(binary_hex, number, 2);
            printf("Binary: %s\n", number);
            goto numbersystem;
        case 11:
            return 10;
        default:
            printf("Invalid choice.\n");
            goto numbersystem;
    }
    return 0;
}
int perinfo()
{
    FILE *file;
    char name[100], address[100],email[100];
    int age,number;
    // Open
    file = fopen("personal_info.txt", "w");

    if (file == NULL)
        {
            printf("Error opening the file.\n");
            return 1;
        }
    // Input
    printf("Enter your name: ");
    scanf(" %[^\n]", name);  //
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your address: ");
    scanf(" %[^\n]", address);
    printf("Enter your number: ");
    scanf(" %[^\n]", number);
    printf("Enter your email: ");
    scanf(" %[^\n]", email);
    fprintf(file, "Name: %s\nAge: %d\nAddress: %s\nnumber: %d\nemail: %s\n", name, age, address);

    // Close
    fclose(file);

    printf("Personal information saved to personal_info.txt\n");

}
int perread()
{

    FILE *file;

    // Open the file for reading
    file = fopen("personal_info.txt", "r");


    if (file == NULL)
    {
        printf("File could not be opened.\n");
        return 1; // Exit the program with an error code
    }

    // Read and print
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch); // Print character by character
    }

    // Close
    fclose(file);


}


struct Expense
 {
    char date[20];
    char description[100];
    float amount;
};

void addExpense(FILE *file)
 {
    struct Expense expense;

    printf("Enter expense date (YYYY-MM-DD): ");
    scanf("%s", expense.date);
    printf("Enter expense description: ");
    scanf(" %[^\n]", expense.description);
    printf("Enter expense amount: $");
    scanf("%f", &expense.amount);

    // Write expense to the file
    fprintf(file, "%s %s %.2f\n", expense.date, expense.description, expense.amount);
    printf("Expense added successfully!\n");
}

void viewAllExpenses(FILE *file)
 {
    struct Expense expense;

    rewind(file);

    printf("Expense Details:\n");

    while (fscanf(file, "%s %[^\n] %f", expense.date, expense.description, &expense.amount) != EOF)
        {
            printf("Date: %s\nDescription: %s\n\n", expense.date, expense.description, expense.amount);
        }
}

int expense()
{
    FILE *expenseFile;
    expenseFile = fopen("expenses.txt", "a+");

    if (expenseFile == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    int choice;

    do
    {
        printf("\nExpense Tracker Menu:\n");
        printf("1. Add an Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addExpense(expenseFile);
                break;
            case 2:
                viewAllExpenses(expenseFile);
                break;
            case 3:
                printf("Exiting the Expense Tracker.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    fclose(expenseFile); // Close the file

    return 0;
}


#define MAX_PASSWORDS 100
struct PasswordEntry {
    char website[50];
    char username[50];
    char password[50];
};

int addPassword(struct PasswordEntry passwords[], int count)
 {
    if (count < MAX_PASSWORDS)
    {
        printf("Enter website: ");
        scanf("%s", passwords[count].website);
        printf("Enter username: ");
        scanf("%s", passwords[count].username);
        printf("Enter password: ");
        scanf("%s", passwords[count].password);
        printf("Password added successfully!\n");
        return count + 1;
    }
    else
    {
        printf("Password storage is full.\n");
        return count;
    }
}

//  retrieve a password
void retrievePassword(struct PasswordEntry passwords[], int count, const char* website)
 {
    int found = 0,i;
    for ( i = 0; i < count; i++)
        {
            if (strcmp(passwords[i].website, website) == 0)
            {
                found = 1;
                printf("Website: %s\n", passwords[i].website);
                printf("Username: %s\n", passwords[i].username);
                printf("Password: %s\n", passwords[i].password);
                break;
            }
        }
    if (!found)
    {
        printf("Password not found for %s.\n", website);
    }
}

int pass()
 {
    struct PasswordEntry passwords[MAX_PASSWORDS];
    int passwordCount = 0;

    while (1)
        {
            printf("Password Manager Menu:\n");
            printf("1. Add a Password\n");
            printf("2. Retrieve a Password\n");
            printf("3. Exit\n");

            int choice;
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    passwordCount = addPassword(passwords, passwordCount);
                    break;
                case 2:
                    {
                        char website[50];
                        printf("Enter website to retrieve the password: ");
                        scanf("%s", website);
                        retrievePassword(passwords, passwordCount, website);
                        break;
                    }
                case 3:
                    printf("Goodbye!\n");
                    return 0;
                default:
                    printf("Invalid choice. Please select a valid option.\n");
            }
        }

    return 0;
}
