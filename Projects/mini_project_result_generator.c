#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student_data
{
    char stduent_name[150];
    int student_roll;
    char student_mother_name[150];
    char student_father_name[150];
    int science_marks;
    int maths_marks;
    int social_studies_marks;
    int english_marks;
    int hindi_marks;
    int total;
    int percentage;
    char grade;
} sd;

char sciencegrade;
char mathsgrade;
char socialstudiesgrade;
char englishgrade;
char hindigrade;

char msg[200];

sd S;

void student_data_input();
void display_student_result();

int main()
{
    int input;
    while (1)
    {

        fflush(stdin);
        printf("\n-----------------RESULT GENERATOR------------------\n\n");

        printf("press 1 - to generate result for student\npress 0 - to exit program\ninput : ");
        scanf("%d", &input);

        if (input == 0)
        {
            printf("\nexiting program\n");
            exit(0);
        }
        else if (input == 1)
        {
            student_data_input();
            display_student_result();
        }
        else
        {
            printf("\ninvalid input!! TRY AGAIN\n");
        }
    }

    return 0;
}

void display_student_result()
{
    printf("\n\n--------------------------------------RESULT-----------------------------------------\n");
    printf("NAME : %s\n", S.stduent_name);
    printf("ROLL NUMBER : %d\n", S.student_roll);
    printf("MOTHER'S NAME : %s\n", S.student_mother_name);
    printf("FATHER'S NAME : %s\n", S.student_father_name);
    printf("_________________________________________________________\n");
    printf("|    Subject        |   Marks (out of 100)  |   Grade   |\n");
    printf("|___________________|_______________________|___________|\n");
    printf("| %-17s | %21d | %9c |\n", "Science", S.science_marks, sciencegrade);
    printf("| %-17s | %21d | %9c |\n", "Maths", S.maths_marks, mathsgrade);
    printf("| %-17s | %21d | %9c |\n", "Social Studies", S.social_studies_marks, socialstudiesgrade);
    printf("| %-17s | %21d | %9c |\n", "English", S.english_marks, englishgrade);
    printf("| %-17s | %21d | %9c |\n", "Hindi", S.hindi_marks, hindigrade);
    printf("|___________________|_______________________|___________|\n");
    printf("| TOTAL             | %21d |           |\n", S.total);
    printf("|___________________|_______________________|___________|\n");
    printf("Overall Percentage : %d%%\n", S.percentage);
    printf("Grade : %c\n", S.grade);
    puts(msg);
    printf("-------------------------------------------------------------------------------------\n");

    printf("Press Enter to go back to main menu\n");
    fflush(stdin);
    getchar();
}


void student_data_input()
{
    fflush(stdin);
    printf("enter student full name : ");
    gets(S.stduent_name);
    printf("enter student roll number : ");
    fflush(stdin);
    scanf("%d", &S.student_roll);
    printf("enter student's mohter's name : ");
    fflush(stdin);
    gets(S.student_mother_name);
    printf("enter student's father's name : ");
    fflush(stdin);
    gets(S.student_father_name);

    fflush(stdin);
    printf("Student's personal details has been entered.\n");
    printf("enter student marks (out of 100) of all subjects below : \n");

    while (1)
    {

        printf("student marks in science : ");
        scanf("%d", &S.science_marks);

        if (S.science_marks < 0 || S.science_marks > 100)
        {
            printf("invalid marks, marks must be between 0 to 100!! TRY AGIAN\n");
        }
        else if (S.science_marks > 80)
        {
            sciencegrade = 'A';
            break;
        }
        else if (S.science_marks > 70)
        {
            sciencegrade = 'B';
            break;
        }
        else if (S.science_marks > 60)
        {
            sciencegrade = 'C';
            break;
        }
        else if (S.science_marks > 50)
        {
            sciencegrade = 'D';
            break;
        }
        else if (S.science_marks > 40)
        {
            sciencegrade = 'E';
            break;
        }
        else
        {
            sciencegrade = 'F';
            break;
        }
    }

    while (1)
    {

        printf("student marks in maths : ");
        scanf("%d", &S.maths_marks);

        if (S.maths_marks < 0 || S.maths_marks > 100)
        {
            printf("invalid marks, marks must be between 0 to 100!! TRY AGIAN\n");
        }
        else if (S.maths_marks > 80)
        {
            mathsgrade = 'A';
            break;
        }
        else if (S.maths_marks > 70)
        {
            mathsgrade = 'B';
            break;
        }
        else if (S.maths_marks > 60)
        {
            mathsgrade = 'C';
            break;
        }
        else if (S.maths_marks > 50)
        {
            mathsgrade = 'D';
            break;
        }
        else if (S.maths_marks > 40)
        {
            mathsgrade = 'E';
            break;
        }
        else
        {
            mathsgrade = 'F';
            break;
        }
    }

    while (1)
    {

        printf("student marks in social studies : ");
        scanf("%d", &S.social_studies_marks);

        if (S.social_studies_marks < 0 || S.social_studies_marks > 100)
        {
            printf("invalid marks, marks must be between 0 to 100!! TRY AGIAN\n");
        }
        else if (S.social_studies_marks > 80)
        {
            socialstudiesgrade = 'A';
            break;
        }
        else if (S.social_studies_marks > 70)
        {
            socialstudiesgrade = 'B';
            break;
        }
        else if (S.social_studies_marks > 60)
        {
            socialstudiesgrade = 'C';
            break;
        }
        else if (S.social_studies_marks > 50)
        {
            socialstudiesgrade = 'D';
            break;
        }
        else if (S.social_studies_marks > 40)
        {
            socialstudiesgrade = 'E';
            break;
        }
        else
        {
            socialstudiesgrade = 'F';
            break;
        }
    }

    while (1)
    {

        printf("student marks in english : ");
        scanf("%d", &S.english_marks);

        if (S.english_marks < 0 || S.english_marks > 100)
        {
            printf("invalid marks, marks must be between 0 to 100!! TRY AGIAN\n");
        }
        else if (S.english_marks > 80)
        {
            englishgrade = 'A';
            break;
        }
        else if (S.english_marks > 70)
        {
            englishgrade = 'B';
            break;
        }
        else if (S.english_marks > 60)
        {
            englishgrade = 'C';
            break;
        }
        else if (S.english_marks > 50)
        {
            englishgrade = 'D';
            break;
        }
        else if (S.english_marks > 40)
        {
            englishgrade = 'E';
            break;
        }
        else
        {
            englishgrade = 'F';
            break;
        }
    }

    while (1)
    {

        printf("student marks in hindi : ");
        scanf("%d", &S.hindi_marks);

        if (S.hindi_marks < 0 || S.hindi_marks > 100)
        {
            printf("invalid marks, marks must be between 0 to 100!! TRY AGIAN\n");
        }
        else if (S.hindi_marks > 80)
        {
            hindigrade = 'A';
            break;
        }
        else if (S.hindi_marks > 70)
        {
            hindigrade = 'B';
            break;
        }
        else if (S.hindi_marks > 60)
        {
            hindigrade = 'C';
            break;
        }
        else if (S.hindi_marks > 50)
        {
            hindigrade = 'D';
            break;
        }
        else if (S.hindi_marks > 40)
        {
            hindigrade = 'E';
            break;
        }
        else
        {
            hindigrade = 'F';
            break;
        }
    }

    S.total = S.science_marks + S.maths_marks + S.social_studies_marks + S.english_marks + S.hindi_marks;
    S.percentage = ((S.total * 100) / 500);

    if (S.percentage > 80)
    {
        S.grade = 'A';
        strcpy(msg, "excellent work!");
    }
    else if (S.percentage > 70)
    {
        S.grade = 'B';
        strcpy(msg, "great job!");
    }
    else if (S.percentage > 60)
    {
        S.grade = 'C';
        strcpy(msg, "good but can be done better");
    }
    else if (S.percentage > 50)
    {
        S.grade = 'D';
        strcpy(msg, "need to work hard");
    }
    else if (S.percentage > 40)
    {
        S.grade = 'E';
        strcpy(msg, "work hard and try to do better");
    }
    else
    {
        S.grade = 'F';
        strcpy(msg, "Failed");
    }

    printf("all details and marks has been entered. the result is below : \n");
}