// Motor Vehicle.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Class Exercise III: Write a progrma that computes the profit made from selling a motor vehicle.
// By: Abdirahman Gedi
// Student number 137748

#include <iostream>
using namespace std;

int main()
{
	//initializing & declaring variables
	float buy_price{}, sell_price{}, profit = 0;

	//Collecting the user input
	cout << "............................................................................" << endl;
	cout << "This program calculates the profit you make from selling your motor vehicle." << endl;
	cout << "............................................................................" << endl;
	cout << endl;
	cout << "Input the buying price: "; cin >> buy_price; // collecting the user's figure and storing it as buying price in the buy_price variable 
	cout << endl;
	cout << "Input the selling price: "; cin >> sell_price; // collecting the user's figure and storing it as selling price in the sell_price vriable
	cout << endl;

	//computing the profit
	profit = sell_price - buy_price;

	cout << "The profit gained from selling the motor vehicle is: " << profit << endl; //calculating the profit
	cout << endl;
	cout << "..............................................................." << endl;

	return 0;
}