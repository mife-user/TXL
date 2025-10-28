#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include <regex>
using namespace std;

enum Sex
{
    woman,
    man
};

struct Person
{
    string name;
    Sex m_Sex;
    int m_Age = 0;
    string m_Phone;
    string m_Addr;
};

struct Addressbooks
{
    Person personArray[100];
    int m_Size = 0;
};
void showMenu();
void add_Person(Addressbooks* add);
void print_Person(Addressbooks* add);
void delete_Person(Addressbooks* add);
void remix_Person(Addressbooks* add);
void clear_Person(Addressbooks* add);
void sort_book(Addressbooks* add);
int chooseMenu(Addressbooks* book);
void read_txl(Addressbooks* add);
void save_txl(Addressbooks* add);
