#pragma once
#include <string>
using namespace std;
class Seller
{
	int sID;
	string sname;
	string mail;
public:
	Seller(int sID, string sname, string mail)//Constructor
	{
		this->sID = sID;
		this->sname = sname;
		this->mail = mail;
	}
};
class Product
{
	int pid;
	string pname;
	int price;
	string cat;
	int sellID;
public:
	Product(int pid, string pname, int price, string cat, int sellID)//Product Constructor
	{
		this->pid = pid;
		this->pname = pname;
		this->price = price;
		this->cat = cat;
		this->sellID = sellID;
	}
};
class Customer
{
	int cID;
	string cname;
	string cAddress;
	string cmail;
	string cmail;
	Cart cart;

};
class Cart
{

};