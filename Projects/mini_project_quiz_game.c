#include <stdio.h>
#include <stdlib.h>

#define Qlength 300
#define Olength 150

//datatype to store questions
typedef struct Questions_from_file
{

    char ques[Qlength];
    char optA[Olength];
    char optB[Olength];
    char optC[Olength];
    char optD[Olength];
    char correct;
    int time;
    int reward;

} questions;

//functions prototypes
void rules();
void play();

int main()
{
    int user_input;
    printf("welcome to SASTA KAUN BANEGA CROREPATI\n"); //welcoming user

    //getting user input
    do
    {
        printf("1 - to play\n2-rules\n0-exit\n");
        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
            play();
            break;
        case 2:
            rules();
            break;
        case 0:
            printf("exiting program\n");
            break;
        default:
            printf("invalid input!! Try Again\n");
            break;
        }
    } while (user_input != 0);

    return 0;
}

void play() //function to read and ask question from user
{

    //opening file and creating variables to store questions
    questions q[12];

    FILE *questionsfile;
    questionsfile = fopen("questions_for_quiz_game.txt", "r");

    if (questionsfile == NULL) //reading all question from the file
    {
        printf("\nERROR!!\nlooks like something went wrong with the questions bank\n");
    }
    else
    {

        for (int i = 0; i < 12; i++)
        {
            fgets(q[i].ques, sizeof(q[i].ques), questionsfile);
            fgets(q[i].optA, sizeof(q[i].optA), questionsfile);
            fgets(q[i].optB, sizeof(q[i].optB), questionsfile);
            fgets(q[i].optC, sizeof(q[i].optC), questionsfile);
            fgets(q[i].optD, sizeof(q[i].optD), questionsfile);
            fscanf(questionsfile, " %c\n", &q[i].correct);
            fscanf(questionsfile, "%d\n", &q[i].reward);
            fscanf(questionsfile, "%d\n", &q[i].time);
        }
    }

    fclose(questionsfile);

    char answer[10];
    int winnings = 0;
    int lifeline;
    int skip = 1;
    int fiftyfifty = 1;

    //function to ask questions form user
    for (int i = 0; i < 12; i++)
    {

        printf("\n---------------------QUESTION : %d---------------------------\n", i + 1);
        printf("Q%d> %s", i + 1, q[i].ques);
        printf("A: %s", q[i].optA);
        printf("B: %s", q[i].optB);
        printf("C: %s", q[i].optC);
        printf("D: %s", q[i].optD);
        printf("\nyou have %d seconds!   REWARD : %d rs\n", q[i].time, q[i].reward);

        while (1)//to check user answer and also lifelines
        {
            printf("\n\nEnter (A,B,C,D) to lock you answer\n");
            printf("enter '1' to use lifeline\n");
            printf("enter '0' to exit with your current winnings\n");
            printf("input : ");

            scanf(" %c", &answer[0]);
            fflush(stdin);

            if (answer[0] != 'A' && answer[0] != 'B' && answer[0] != 'C' && answer[0] != 'D' && answer[0] != '1' && answer[0] != '0'){  //input validation
                printf("invalid input, chose one from the given options\n");
            }
            else if (answer[0] == '0') //exit logic
            {
                printf("thanks for playing, you total winnings are %drs\n", winnings);
                exit(0);
            }
            else if (answer[0] == '1') //lifelines logic
            {
                printf("you have following lifelines\n");
                printf("1-50/50\n2-skip this question\n");
                printf("input : ");
                scanf("%d", &lifeline);

                if (lifeline == 1 && fiftyfifty == 1) //fifty fifty
                {
                    printf("you have chossen fifty-fifty lifeline\n");
                    printf("two false options will be removed from the screen\n");
                    fiftyfifty = 0;
                    printf("your new options are : \n\n");

                    switch (q[i].correct)
                    {
                    case 'A':
                        printf("A : %s", q[i].optA);
                        printf("C : %s", q[i].optC);
                        break;
                    case 'B':
                        printf("B : %s", q[i].optB);
                        printf("D : %s", q[i].optD);
                        break;
                    case 'C':
                        printf("B : %s", q[i].optB);
                        printf("C : %s", q[i].optC);
                        break;
                    case 'D':
                        printf("A : %s", q[i].optA);
                        printf("D : %s", q[i].optD);
                        break;
                    }
                }
                else if (lifeline == 2 && skip == 1) //skip the question
                {
                    printf("you have chossed to skip these question\n");
                    printf("we will proceed to next question\n");
                    skip = 0;
                    break;
                }
                else if (lifeline == 2 && skip == 0) //if skip is used
                {
                    printf("you have used this lifeline once and cannot use again\n");
                    printf("chose another lifeline or play the game without lifeline or quit the game\n");
                }
                else if (lifeline == 1 && fiftyfifty == 0) //if fifity fifty is used
                {
                    printf("you have used this lifeline once and cannot use again\n");
                    printf("chose another lifeline or play the game without lifeline or quit the game\n");
                }
                else
                {
                    printf("invalid input!!  chosse from given options\n"); //if non of the input matches
                }
            }

            else if (answer[0] == q[i].correct) //correct answer
            {
                winnings += q[i].reward;
                printf("you have choosed the correct option\n");
                printf("you have won %d rs. your total winning is %d\n", q[i].reward, winnings);
                break;
            }

            else if (answer[0] != q[i].correct) //wrong answer
            {
                winnings = 0;
                printf("you have choosed the wrong annwer!!! DISQUALIFIED\n");
                printf("you have won %d rs , thanks for playing\n", winnings);
                exit(0);
            }
        }
    }
    
}

//functions to tell rules to user
void rules()
{
    int user_input;
    printf("rules : \n");
    printf("1> You have to answer the questin within given time. \n");
    printf("2> the mentioned reward for each question you answer will get add up and given to at the end of the game. \n");
    printf("3> You have options to take lifeline if you are struggling\n");
    printf("4> 50-50 lifeline will remove two wrong options\n");
    printf("5> skip the questions will skip that question and take you to the next question\n");
    printf("6> each lifeline can only be used once throughout the game.\n");
    printf("7> there are 12 questions and 4 options for each question, and only one of the options are correct\n");
    printf("&> if you give wrong answer for any of the question, you will lose all your previous winning and disqualified\n");
    printf("best of luck\npress any 1 to go back to main menu\n");
    while (1)
    {
        scanf("%d", &user_input);

        if (user_input == 1)
        {
            break;
        }
        else
        {
            printf("invlaid input\n try again\n");
            continue;
        }
    }
}