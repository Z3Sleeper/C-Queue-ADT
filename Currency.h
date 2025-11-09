#ifndef CURRENCY_H_
#define CURRENCY_H_
#include <string>

class Currency
{
protected:

	std::string currencyNote; 
	std::string currencyCoin; 
	int wholeParts;	
	int fractionalParts;
	double total;			  //total is whole parts and fractional parts put together in a double

public:

	Currency();
	~Currency();


	/*************************************************************************
	This function sets the Note of the currency to the variable currencyCoin.

	Pre: note - The "note"/name of the currency
	Post: set the currencyNote to the name of the note
	*************************************************************************/
	void setNote(std::string note)
	{
		currencyNote = note;
	}

	/*************************************************************************
	This function sets the Coin name of the currency to the variable currencyCoin.

	Pre: note - The coin name of the currency 
	Post: sets the currencyCoin to the name of the coin
	*************************************************************************/
	void setCoin(std::string coin)
	{
		currencyCoin = coin;
	}

	
	/*************************************************************************
	This  function takes a value and splits the value into whole parts and 
	fractional parts. Then it sets values to variables such as total, wholeParts,
	and fractionalParts. 

	Pre: t - A "total" value inputed by the user
	Post: set values by a total input (ex. 1.25)
	*************************************************************************/
	void setByTotal(double t)
	{
		total = t;
		wholeParts = static_cast<int>(t);
		fractionalParts = static_cast<int>(t * 100) % 100;
	}

	
	/*************************************************************************
	This function also sets the total value however, it uses whole parts and 
	factional parts to do so.

	Pre: wP - whole parts that was given by the user (should be whole numbers)
		 fP - faction parts that was given by the user (should be whole numbers)
	Post: set values by part inputs (ex. 1, 25)
	*************************************************************************/
	void setByParts(int wP, int fP)
	{
		wholeParts = wP;
		fractionalParts = fP;
		total = static_cast<double>(wP) + (static_cast<double>(fP) / 100);
	}

	/*************************************************************************
	This function returns the name of the Note of the currency 

	Pre: 
	Post: Return: currencyNote
	*************************************************************************/
	std::string getNote() { return currencyNote; }
	/*************************************************************************
	This function returns the name of the Coin of the currency

	Pre:
	Post: Return: currencyCoin
	*************************************************************************/
	std::string getCoin() { return currencyCoin; }

	/*************************************************************************
	This function returns the value of whole parts

	Pre:
	Post: Return: wholeParts
	*************************************************************************/
	int getWP() { return wholeParts; }

	/*************************************************************************
	This function returns the value of fractional parts

	Pre:
	Post: Return: fractionalParts
	*************************************************************************/
	int getFP() { return fractionalParts; }

	/*************************************************************************
	This function returns the total value

	Pre:
	Post: Return: total
	*************************************************************************/
	double getTotal() { return total; }

	/*************************************************************************
	This function prints Currency object in the form (currencyNote, wholeParts,
	fractionalParts, currencyCoin)

	Pre: &output - the output form in the osteam such as cout
		 &cCurrency - the object of the class Currency
	Post: Return: output
	*************************************************************************/
	friend std::ostream& operator<< (std::ostream &output, Currency &cCurrency);


	/*************************************************************************
	This function takes user inputed total then uses setByTotal to set parts

	Pre: &input - the input form in the isteam such as cin
		 &cCurrency - the object of the class Currency
	Post: Return: input
	*************************************************************************/
	friend std::istream& operator>> (std::istream &input, Currency &cCurrency);


	/*************************************************************************
	This function add new value to the current total value of the currency

	Pre: &cCurrency - the object of the class Currency
		 x - the new value that will be added to the total
	Post: Return: The Currency class object
	*************************************************************************/
	friend Currency operator+ (Currency &cCurrency, double x);


	/*************************************************************************
	This function subtract new value to the current total value of the currency

	Pre: &cCurrency - the object of the class Currency
		 x - the new value that will be subtracted from the total
	Post: Return: The Currency class object
	*************************************************************************/
	friend Currency operator- (Currency &cCurrency, double x);


	/*************************************************************************
	The following four functions compare an amount to the value in the wallet.

	Pre: &cCurrency - the object of the class Currency
		 compare - the value that the user wants to subtract with
	Post: Return: true or false
	*************************************************************************/
	friend bool operator> (Currency &cCurrency, double compare);
	friend bool operator>= (Currency &cCurrency, double compare);
	friend bool operator< (Currency &cCurrency, double compare);
	friend bool operator<= (Currency &cCurrency, double compare);
};

class Dollar : public Currency
{
	public:

		Dollar();
		~Dollar();
};

class Euro : public Currency
{
	public:

		Euro();
		~Euro();
};

class Yen : public Currency
{
	public:

		Yen();
		~Yen();
};

class Rupee : public Currency
{
	public:

		Rupee();
		~Rupee();
};

class Yuan : public Currency
{
	public:

		Yuan();
		~Yuan();
};

#endif