/******************************************************************

CIS 22C

Lab 2b: This program demonstrates the abilities of Queue ADT with
the help of lab 1's and 2's files. Types such as double, string,
and class objects were shown.

Authors: Alexandria Liu
Stuart James Granville

Date: 5/04/19

*******************************************************************/

#include "Currency.h"
#include "QueueADT.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char choice;
	char action;
	int valueInt;
	double valueDouble;
	string valueString;
	Dollar valueDollar;
	DynQueue<double> queueDouble;
	DynQueue<string> queueString;
	DynQueue<Dollar> queueDollar;

	do {
		cout << "Hello user! Enter:\na: Double Queue\nb: String Queue\nc: Dollar Queue\nq: Quit\n\nChoose an option: ";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case'a': //double queue
			do {
				cout << "a: Enqueue\nb: Dequeue one\nc: Dequeue all\nd: Print front value\ne: Print rear value\nf: Get the size of the queue\ng: Clear the queue\nq: Quit\n\nChoose an option: ";
				cin >> action;
				cout << endl;
				switch (action) {
				case 'a': //enqueue
					cout << "Enter what you wish to add to the queue: ";
					cin >> valueDouble;
					queueDouble.enqueue(valueDouble);
					cout << endl;
					break;
				case 'b': //dequeue one
					if (queueDouble.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						queueDouble.dequeue(valueDouble);
						cout << "Dequeued: " << valueDouble << endl;
					}
					cout << endl;
					break;
				case 'c': //dequeue all
					if (queueDouble.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						int size = queueDouble.size();
						for (valueInt = 0; valueInt < size; valueInt++)
						{
							queueDouble.dequeue(valueDouble);
							cout << "Dequeued: " << valueDouble << endl;
						}
					}
					cout << endl;
					break;
				case 'd': //front value
					if (queueDouble.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						cout << "The front value of the queue is ";
						queueDouble.frontValue();
					}
					cout << endl;
					break;
				case 'e': //rear value
					if (queueDouble.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						cout << "The rear value of the queue is ";
						queueDouble.rearValue();
					}
					cout << endl;
					break;
				case 'f': //size
					if (queueDouble.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else
						cout << "The size of the queue: " << queueDouble.size() << endl;
					cout << endl;
					break;
				case 'g': //clear
					if (queueDouble.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						queueDouble.clear();
						cout << "Queue emptied" << endl;
					}
					cout << endl;
					break;
				case 'q':
					break;
				default:
					cout << "You didn't select one of the options." << endl << endl;
					break;
				}
			} while (action != 'q');
			break;
		case'b': //string queue
			do {
				cout << "a: Enqueue\nb: Dequeue one\nc: Dequeue all\nd: Print front value\ne: Print rear value\nf: Get the size of the queue\ng: Clear the queue\nq: Quit\n\nChoose an option: ";
				cin >> action;
				cout << endl;
				switch (action) {
				case 'a': //enqueue
					cout << "Enter what you wish to add to the queue: ";
					cin.ignore(256, '\n');
					getline(cin, valueString);
					queueString.enqueue(valueString);
					cout << endl;
					break;
				case 'b': //dequeue one
					if (queueString.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						queueString.dequeue(valueString);
						cout << "Dequeued: " << valueString << endl;
					}
					cout << endl;
					break;
				case 'c': //dequeue all
					if (queueString.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						int size = queueString.size();
						for (valueInt = 0; valueInt < size; valueInt++)
						{
							queueString.dequeue(valueString);
							cout << "Dequeued: " << valueString << endl;
						}
					}
					cout << endl;
					break;
				case 'd': //front value
					if (queueString.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						cout << "The front value of the queue is ";
						queueString.frontValue();
					}
					cout << endl;
					break;
				case 'e': //rear value
					if (queueString.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						cout << "The rear value of the queue is ";
						queueString.rearValue();
					}
					cout << endl;
					break;
				case 'f': //size
					if (queueString.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else
						cout << "The size of the queue: " << queueString.size() << endl;
					cout << endl;
					break;
				case 'g': //clear
					if (queueString.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						queueString.clear();
						cout << "Queue emptied" << endl;
					}
					cout << endl;
					break;
				case 'q':
					break;
				default:
					cout << "You didn't select one of the options." << endl << endl;
					break;
				}
			} while (action != 'q');
			break;
		case'c': //Dollar queue
			do {
				cout << "a: Enqueue\nb: Dequeue one\nc: Dequeue all\nd: Print front value\ne: Print rear value\nf: Get the size of the queue\ng: Clear the queue\nq: Quit\n\nChoose an option: ";
				cin >> action;
				cout << endl;
				switch (action) {
				case 'a': //enqueue
					cout << "Enter what you wish to add to the queue: ";
					cin >> valueDollar;
					queueDollar.enqueue(valueDollar);
					cout << endl;
					break;
				case 'b': //dequeue one
					if (queueDollar.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						queueDollar.dequeue(valueDollar);
						cout << "Dequeued: " << valueDollar << endl;
					}
					cout << endl;
					break;
				case 'c': //dequeue all
					if (queueDollar.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						int size = queueDollar.size();
						for (valueInt = 0; valueInt < size; valueInt++)
						{
							queueDollar.dequeue(valueDollar);
							cout << "Dequeued: " << valueDollar << endl;
						}
					}
					cout << endl;
					break;
				case 'd': //front value
					if (queueDollar.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						cout << "The front value of the queue is ";
						queueDollar.frontValue();
					}
					cout << endl;
					break;
				case 'e': //rear value
					if (queueDollar.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						cout << "The rear value of the queue is ";
						queueDollar.rearValue();
					}
					cout << endl;
					break;
				case 'f': //size
					if (queueDollar.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else
						cout << "The size of the queue: " << queueDollar.size() << endl;
					cout << endl;
					break;
				case 'g': //clear
					if (queueDollar.isEmpty()) {
						cout << "The queue is empty." << endl;
					}
					else {
						queueDollar.clear();
						cout << "Queue emptied" << endl;
					}
					cout << endl;
					break;
				case 'q':
					break;
				default:
					cout << "You didn't select one of the options." << endl << endl;
					break;
				}
			} while (action != 'q');
			break;
		case'q':
			break;
		default:
			cout << "You didn't select one of the options." << endl << endl;
		}
	} while (choice != 'q');

	system("pause");

	return 0;
}