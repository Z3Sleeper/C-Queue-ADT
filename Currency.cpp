#include "Currency.h"
#include <string>


/**************************************************
note and coin = ""
whole parts, factional parts, and total = 0
***************************************************/
Currency::Currency()
{
	currencyNote = "";
	currencyCoin = "";
	wholeParts = 0;
	fractionalParts = 0;
	total = 0;
}

Currency::~Currency() {}

/**************************************************
Note, whole part, fractional part, coin name
***************************************************/
std::ostream& operator<< (std::ostream &output, Currency &cCurrency)
{
	output << cCurrency.getNote() << ", " << cCurrency.getWP() << ", " << cCurrency.getFP() << ", " << cCurrency.getCoin() << std::endl;
	return output;
}

/**************************************************
get total of a currency object
set new total for the currency object
***************************************************/
std::istream& operator>> (std::istream &input, Currency &cCurrency)
{
	input >> cCurrency.total;
	cCurrency.setByTotal(cCurrency.total);
	return input;
}

/**************************************************
split the amount into whole parts and factional parts
add to currency object variables

while fractional part is more than 100
	convert to whole parts with the conversion
	100 fraction part = 1 whole part
set the new total for the object
***************************************************/
Currency operator+ (Currency &cCurrency, double x)
{
	cCurrency.wholeParts += static_cast<int>(x);
	cCurrency.fractionalParts += static_cast<int>(x * 100) % 100;;
	while (cCurrency.fractionalParts >= 100)
	{
		cCurrency.fractionalParts -= 100;
		cCurrency.wholeParts += 1;
	}
	cCurrency.total += x;

	return Currency(cCurrency);
}

/**************************************************
split the amount into whole parts and factional parts
subtract from currency object variables

while fractional part is negative
	change it to postive by using a whole part
	100 fraction part = 1 whole part
set the new total for the object
***************************************************/
Currency operator- (Currency &cCurrency, double x)
{
	cCurrency.wholeParts -= static_cast<int>(x);
	cCurrency.fractionalParts -= static_cast<int>(x * 100) % 100;
	while (cCurrency.fractionalParts < 0)
	{
		cCurrency.fractionalParts += 100;
		cCurrency.wholeParts -= 1;
	}
	;
	cCurrency.total -= x;

	return Currency(cCurrency);
}

/**************************************************
true if total is more than the amount
***************************************************/
bool operator> (Currency &cCurrency, double compare)
{
	return cCurrency.total > compare;
}
/**************************************************
true if total is more than or equal to the amount
***************************************************/
bool operator>= (Currency &cCurrency, double compare)
{
	return cCurrency.total >= compare;
}
/**************************************************
true if total is less than the amount
***************************************************/
bool operator< (Currency &cCurrency, double compare)
{
	return cCurrency.total < compare;
}
/**************************************************
true if total is less than or equal to the amount
***************************************************/
bool operator<= (Currency &cCurrency, double compare)
{
	return cCurrency.total <= compare;
}

/**************************************************
note = Dollar
coin = cent
***************************************************/
Dollar::Dollar()
{
	currencyNote = "Dollar";
	currencyCoin = "cent";
}

Dollar::~Dollar() {}

/**************************************************
note = Euro
coin = cent
***************************************************/
Euro::Euro()
{
	currencyNote = "Euro";
	currencyCoin = "cent";
}

Euro::~Euro() {}

/**************************************************
note = Yen
coin = sen
***************************************************/
Yen::Yen()
{
	currencyNote = "Yen";
	currencyCoin = "sen";
}

Yen::~Yen() {}

/**************************************************
note = Rupee
coin = paise
***************************************************/
Rupee::Rupee()
{
	currencyNote = "Rupee";
	currencyCoin = "paise";
}

Rupee::~Rupee() {}

/**************************************************
note = Yuan
coin = fen
***************************************************/
Yuan::Yuan()
{
	currencyNote = "Yuan";
	currencyCoin = "fen";
}

Yuan::~Yuan() {}