//HEADER FILES.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <stdio.h>

using namespace std;
//FUCTIONS PROTORYPES.
void menu();
void wrongpic();
void wrongpic_1();
void wrongpic_2();
void wrongpic_3();
void wrongpic_4();
void line();
int word_guess(char guess,string word,string &hideword);

//MAIN FUNCTION.
int main()
{
    //VARIABLES DECLERATIONS.
    string word;
    int plg_flag=0,ascii,choice,bk_flag,bk_ascii,g_bye_ascii;
    char guess_ch,play_again,bk_menu,g_bye;
    string words[]={"afghanistan","albania","algeria","america","argentina","armenia","australia",
                    "bahrain","belgium","bhutan","bolivia","bosnia",
                    "cambodia","canada","chad","chile","china","colombia","denmark",
                    "egypt","ethiopia","finland","pakistan",
                    "paraguay","philippines","poland","portugal","india",
                    "indonesia","iran","iraq","ireland","israel","italy","jamaica","japan","jordan","kazakhstan",
                    "kenya","korea","kuwait","lebanon",
                    "libya","liberia","madagascar","malawi","malaysia","maldives",
                    "namibia","nepal","netherland","nigeria","norway","nicaragua","oman","zambia",
                    "yemen","vietnam","uganda","ukraine","uzbekistan","taiwan","tajikistan","tanzania"};

    do{
            system("cls");
    menu();
    cout<<"\n\tEnter your choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:

    do
    {
        int max_tries=5,wrong_guess=0,pic_flag=0;
        //system("cls");
        //RANDOM FUNCTION WHICH RANDOMLY TAKE ANY NAME THAT ARE STORED IN "WORDS" VARIABLE.
        srand(time(NULL));
        int i=rand()%64;
        word=words[i];


        string hideword(word.length(),'*'); //THIS STATEMENT HIDES THE WORD WITH Stars " * ".
        system("cls");
        line();//LINE FUCNTION CALLING.
        cout<<"\n\t\t\t\t\t*** HANGMAN ***"<<endl;
        line();



        do
        {

            cout<<"\n\n\n"<<hideword;
            cout<<"\n\n\nPlease enter the character to guess the word : ";
            cin>>guess_ch;
            fflush(stdin);


            system("cls");

                if(word_guess(guess_ch,word,hideword)==0)
                {
                    wrong_guess++;
                    pic_flag++;
                    if(pic_flag==1)
                    {
                        wrongpic_1();
                    }
                    if(pic_flag==2)
                    {
                        wrongpic_2();
                    }
                    if(pic_flag==3)
                    {
                        wrongpic_3();
                    }
                    if(pic_flag==4)
                    {
                        wrongpic_4();
                    }
                    cout<<"\n\toops..! you have only "<<max_tries-wrong_guess<<" chances left"<<endl;
                }

                else
                {
                    cout<<"\nhurrah you guess the  character \n";
                }

                if(word==hideword)
                {
                    cout<<word<<endl;
                    cout<<"\n\n\n\t\tYEAH....! YOU WIN..!"<<endl;
                    cout<<"\n\t\tCongratulations....!\n\t\tLevel..Level..Level... :p:p:p"<<endl;
                    cout<<"\t\tCelebrations... Yalaah habibi Mabrook"<<endl;
                    break;
                }
        }while(max_tries>wrong_guess);

        if(max_tries==wrong_guess)
        {
            cout<<"\n\n\tTHE ACTUAL WORD IS  \" "<<word<<" \"";
            wrongpic();
             cout<<"\n\n\tSORRY..! YOU LOSE......you have been hanged"<<endl;

        }
        do{
            cout<<"\n\tDo you want to play again ( For YES Press -- 1 ) (For NO Press -- 0 ):";
            cin>>play_again;
            ascii=play_again;
        if(ascii==49)
        {
            plg_flag=1;
        }
        else if(ascii==48)
        {
            g_bye='0';
            plg_flag=2;
        }
        else if((ascii>=32||ascii<=47)||(ascii>=50||ascii<=255))
        {
            system("cls");
            cout<<"\n\t\aINVALID ENTRY.......";
        }
        else
        {
            break;
        }

        }while(plg_flag==0);
        cin.ignore();
        cin.get();
        }while(plg_flag==1);
        break;

        case 2:
            system("cls");
            g_bye='0';
        cout<<"\t_____________________________________________________________________________";
        cout<<"\n\t|                           *** HOW TO PLAY ***                              |";
        cout<<"\n\t|____________________________________________________________________________|";
        cout<<"\n\t|                                                                            |";
        cout<<"\n\t|                                                                            |";
        cout<<"\n\t|\t\tWelcome to hangman game .....!                               |";
        cout<<"\n\t|\t\tEach character is represented by a star ( * )                |";
        cout<<"\n\t|\t\tYou only have to enter a one character in one try            |";
        cout<<"\n\t|\t\tEnter the character in only lower case.                      |";
        cout<<"\n\t|\t\tYou have only 5 maximum tries                                |";
        cout<<"\n\t|                                                                            |";
        cout<<"\n\t|                                                                            |";
        cout<<"\n\t|                                                                            |";
        cout<<"\n\t|____________________________________________________________________________|";
        break;
        default:
            g_bye='1';
            cout<<"\n\t*** GOOD BYE ***";
            break;

    }
    g_bye_ascii=g_bye;
    if(g_bye_ascii==48)
{
        do
    {
    cout<<"\n\tPress 0 to back menu : ";
    cin>>bk_menu;
    bk_ascii=bk_menu;
    if(bk_ascii==48)
    {
        bk_flag=1;
    }
    else if((bk_ascii>=32||bk_ascii<=47)||(bk_ascii>=49||bk_ascii<=255))
    {
        bk_flag=0;
            system("cls");
        cout<<"\n\t\aINVALID ENTRY...."<<endl;
    }
    else
    {
        break;
    }
    }while(bk_flag==0);
        cin.ignore();
        cin.get();
    }

    else if((g_bye_ascii>=32||g_bye_ascii<=47)||(g_bye_ascii>=49||g_bye_ascii<=255))
    {
        bk_flag=9;
        cout<<"\n\tTHANK YOU FOR PLAYING THIS GAME";
    }
    else
    {
        break;
    }

    }while(bk_flag==1);

    getch();
    return 0;
        //END OF PROGRAM.
}


//FUNCTION DEFINITIONS.

void menu()
{
    cout<<"\t_________________________________________________________";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|               PLAY GAME        PRESS -- 1             |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|              HOW TO PLAY       PRESS -- 2             |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|                 EXIT           Enter any key          |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|                                                       |";
    cout<<"\n\t|_______________________________________________________|\n";
}
void wrongpic()
{

    cout<<"\n\n ___________________"<<endl;
    cout<<"    |"<<endl;
    cout<<"    |"<<endl;
    cout<<"    |"<<endl;
    cout<<"    |      ."<<endl;
    cout<<"    |   .     ."<<endl;
    cout<<"    |   .     ."<<endl;
    cout<<"    |______@"<<endl;
    cout<<"          /|\\"<<endl;
    cout<<"         / | \\"<<endl;
    cout<<"   ________|__________"<<endl;
    cout<<"  /       / \\        /"<<endl;
    cout<<" /__________________/\n\n\n"<<endl;
    cout<<"\t--Inah-Lilah-E-Wainah-Alaihe-Rajiun-- :("<<endl;
}
void wrongpic_1()
{

    cout<<"\n\n"<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"          "<<endl;
    cout<<"            "<<endl;
    cout<<"            "<<endl;
    cout<<"    "<<endl;
    cout<<"          "<<endl;
    cout<<"         "<<endl;
    cout<<"   ___________________"<<endl;
    cout<<"  /       / \\        /"<<endl;
    cout<<" /__________________/\n\n\n"<<endl;
}
void wrongpic_2()
{

    cout<<"\n\n"<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"          "<<endl;
    cout<<"            "<<endl;
    cout<<"            "<<endl;
    cout<<"    "<<endl;
    cout<<"           |"<<endl;
    cout<<"           | "<<endl;
    cout<<"   ________|__________"<<endl;
    cout<<"  /       / \\        /"<<endl;
    cout<<" /__________________/\n\n\n"<<endl;
}
void wrongpic_3()
{

    cout<<"\n\n"<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"          "<<endl;
    cout<<"            "<<endl;
    cout<<"            "<<endl;
    cout<<"    "<<endl;
    cout<<"          /|\\"<<endl;
    cout<<"         / | \\"<<endl;
    cout<<"   ________|__________"<<endl;
    cout<<"  /       / \\        /"<<endl;
    cout<<" /__________________/\n\n\n"<<endl;
}
void wrongpic_4()
{

    cout<<"\n\n "<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"           ."<<endl;
    cout<<"        .     ."<<endl;
    cout<<"        .     ."<<endl;
    cout<<"           @"<<endl;
    cout<<"          /|\\"<<endl;
    cout<<"         / | \\"<<endl;
    cout<<"   ________|__________"<<endl;
    cout<<"  /       / \\        /"<<endl;
    cout<<" /__________________/\n\n\n"<<endl;
}
int word_guess(char guess,string word,string &hideword)
{
    int ch_matches=0;
    int loop_limit=word.length();
    for(int i=0;i<loop_limit;i++)
    {
        if(guess==hideword[i])
        {
            return 0;
        }
        if(guess==word[i])
        {
            hideword[i]=guess;
            ch_matches++;
        }
    }
    return ch_matches;
}
void line()
{
    for(int i=0;i<=90;i++)
    {
        cout<<"_";
    }
}
