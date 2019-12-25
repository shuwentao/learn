#include <iostream>
#ifndef ACCTABC_H_
#define ACCTABC_H_
#include <iostream>
#include <string>
class AccABC
{
private:
	std::string fullName;
	long accNum;
	double balance;
protected:
	struct Formatting
	{
		std::ios_base::fmtflags flag;
		std::streamsize pr;
	};
	const std::string & FullName() const {return fullName;}
	long AcctNum() const {return acctNum;}
	Formatting SetFormat() const;
	void Restore(Formatting & f) const;
public:
	AcctABC(const std::string & s = "Nullbody",long an = -1,double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt) = 0;
	double Balance() const {return balance;};
	virtual void ViewAcct() const = 0;
	virtual ~AccABC();
};

class Brass : public AccABC
{
public:
	Brass(const std::string & s = "Nullbody",long an = -1,double bal = 0.0) : AccABC(s,an,bal){}
	virtual void Withdraw(double amt);
	virtual void ViewAcct() const;
	virtual ~Brass(){}	
};

class BrassPlus : public AccABC
{
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus();
};
#endif
