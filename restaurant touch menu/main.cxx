#include"graphics.h"
#include<iostream>
#include <Windows.h>
using namespace std;


int main()
{
	
	
	initwindow(1350, 700, "MiniProject4");		//generating the graphic window.

	//the software loading funtion.
	readimagefile("whiteback.jpg", 0, 0, 1350, 700);
	delay(2000);
	//readimagefile("anim1.jpg", 450, 350, 900, 500);
	delay(200);
	readimagefile("anim3.jpg", 450, 360, 910,500);
	delay(200);
	readimagefile("r1.jpg", 470, 235, 560, 320);
	delay(400);
	readimagefile("r2.jpg", 525, 160, 625, 225);
	delay(300);
	readimagefile("r3.jpg", 660, 100, 710, 25);
	delay(300);
	readimagefile("r4.jpg", 750, 160, 840, 230);
	delay(300);
	readimagefile("r5.jpg", 802, 245, 888, 319);
	delay(300);
	readimagefile("r6.jpg", 823, 361, 904, 408);
	delay(400);
	readimagefile("umtlogo.jpg",587,227,777,390);
		
	delay(2000);
	//system("pause");

	//placing all the pictures at the screen for creating the manu design.
	readimagefile("whiteback.jpg", 0, 0, 1350, 700);
	readimagefile("umtname.jpg", 240, 5, 1159, 140);
	readimagefile("umtlogo.jpg", 130, 5, 280, 150);
	readimagefile("T.jpg", 0, 150, 1350, 700);
	readimagefile("menu3.jpg", 50, 160, 600, 270);
	readimagefile("shawarmacoke.jpg", 400, 260, 500, 360);
	readimagefile("deal1button.jpg",100,280,300,220);
	readimagefile("nuggets.jpg", 400, 350, 280, 200);
	readimagefile("fishfillets.jpg",100,380,300,315);
	readimagefile("salad.jpg",350,495,220,600);
	readimagefile("hommos.jpg", 450, 500, 300, 400);
	readimagefile("breakfastbutt.jpg",100,500,300,440);
	readimagefile("chickenfilletgurger.jpg", 430, 593, 330, 490);
	readimagefile("burgerButton.jpg", 100, 605, 300, 550);
	
	//diplaying the prices of the food deals.
	outtextxy(560, 300, " ( $4.25 ) ");
	outtextxy(560, 400, " ( $10.00 ) ");
	outtextxy(590, 530, " ( $7.25 ) ");
	outtextxy(560, 640, " ( $3.00 ) ");
	
	//diplaying the bill picctures and buttons icons.
	readimagefile("bill.jpg", 750, 180, 260, 670);
	readimagefile("billname.jpg", 940, 190, 720, 230);
	readimagefile("orderbutton.jpg", 1210, 550, 1110, 600);
	readimagefile("exitbutton.jpg", 1225, 610, 1155, 535);
	readimagefile("neworderbutton.jpg", 1190, 485, 1050, 535);
	
	// decleration and intialization of the variable used in calculting the prices and its total.
	int x, y, i = 0, j = 0, k = 0, q = 0;
	char iteration[] = { '\0', '\0','\0','\0','\0' };
	float a, b, c, d;
	float total = 0.00;
	a = b = c = d = 0.00;
	bool b1, b2, b3, b4;
	char arr[] = { '\0', '\0', '\0', '\0' };
	char char_total = '\0';
	b1 = b2 = b3 = b4 = false;

	//start of the do-while loop.
	do
	{
		//The while for clicking on the screen to perform operations.
		while (!ismouseclick(WM_LBUTTONDOWN))

		{
			cout << "mouse clicked!" << endl;
			delay(500);
		}
		getmouseclick(WM_LBUTTONDOWN, x, y);
	
		cout << "mouse clicked! at "<<x<<","<<y << endl;
		// this is the if cindion for pressing the ( new order ) button.
		if ((x >= 1190 && x <= 1330) && (y >= 485 && y <= 532))
		{
			readimagefile("bill.jpg", 750, 180, 260, 670);
			readimagefile("billname.jpg", 940, 190, 720, 230);
			readimagefile("orderbutton.jpg", 1210, 550, 1110, 600);
			readimagefile("exitbutton.jpg", 1225, 610, 1155, 535);
			readimagefile("neworderbutton.jpg", 1190, 485, 1050, 535);
			i = j = k = q = 0;
			a = b = c = d = 0.00;
			total = 0.00;
		}

		// this condition is for printing the bill lines and headings.
			if ((x >= 100 && x <= 300) && (y >= 282 && y <= 333) || (x >= 100 && x <= 296) && (y >= 380 && y <= 439) || (x >= 100 && x <= 296) && (y >= 500 && y <= 555) || (x >= 100 && x <= 297) && (y >= 607 && y <= 656))
			{
				outtextxy(840, 280, "Qnt ............ Item ..................................... Price");
				outtextxy(840, 295, "_______________________________________");
				outtextxy(840, 540, "_______________________________________");
				outtextxy(1060, 535, "Total Amount");
			}

			//this if contion is used to perform operation on ( deal1 ) button.
			if ((x >= 100 && x <= 300) && (y >= 282 && y <= 333))
			{
				i++;
				sprintf(&iteration[0], "%d", i);
				a += 4.25;
				sprintf(&arr[0], "%.2f", a);
				outtextxy(840, 330, &iteration[0]);
				outtextxy(890, 330, "Shawarma + Coke ..................... $");
				outtextxy(1115, 330, &arr[0]);
				//iteration[0] = '\0';
				b1 = true;

			}

			//this IF CONDITION is used to perform operation on seacond meal.
			if ((x >= 100 && x <= 296) && (y >= 380 && y <= 439))
			{
				j++;
				sprintf(&iteration[1], "%d", j);
				b += 10.00;
				sprintf(&arr[1], "%.2f", b);
				outtextxy(840, 380, &iteration[1]);
				outtextxy(890, 380, "Fish Fillets ................................ $");
				outtextxy(1115, 380, &arr[1]);
				//iteration[1] = '\0';
				b2 = true;
			}

			//this IF CONDITION is used to perform operation on third meal.
			if ((x >= 100 && x <= 296) && (y >= 500 && y <= 555))
			{
				k++;
				sprintf(&iteration[2], "%d", k);
				c += 7.25;
				sprintf(&arr[2], "%.2f", c);
				outtextxy(840, 430, &iteration[2]);
				outtextxy(890, 430, "Breakfast ................................... $");
				outtextxy(1115, 430, &arr[2]);
				//iteration[2] = '\0';
				b3 = true;
			}

			//this IF CONDITION is used to perform operation on fourth meal.
			if ((x >= 100 && x <= 297) && (y >= 607 && y <= 656))
			{
				q++;
				sprintf(&iteration[3], "%d", q);
				d += 3.00;
				sprintf(&arr[3], "%.2f", d);
				outtextxy(840, 480, &iteration[3]);
				outtextxy(890, 480, "Chicken Burger ......................... $");
				outtextxy(1115, 480, &arr[3]);
				//iteration[3] = '\0';
				b4 = true;
			}

			//this if condition is used on ( oedrer ) button to calculate the total.
			if ((x >= 1200 && x <= 1300) && (y >= 550 && y <= 600) && ((b1 || b2 || b3 || b4) == true))
			{
				total = a + b + c + d;
				sprintf(&char_total, "$ %.2f", total);
				outtextxy(1080, 565, &char_total);
				outtextxy(860, 600, "                     *** Thank You ***");
				outtextxy(860, 620, "     *** For Visiting UMT Restourant ***");
				b1 = b2 = b3 = b4 = false;
			}

			//this if condition is used for ( exit ) button to exit the program.
		if ((x >= 1230 && x <= 1290) && (y >= 620 && y <= 680))
		{
			exit(0);
		}
	} while (exit!=0);		// end of while loop.
	
	getch();
	return 0;
}