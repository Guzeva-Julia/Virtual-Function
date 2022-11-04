/*Copyright (C) 2022 Huzieva Iyliia*/
#include <iostream>
#include <fstream>
using namespace std;

class Base //Базовий клас.
{
public:
    virtual void myname() { cout << "This is class Base" << endl; }
};

class DerA : public Base //Похідний класс DerA від класу Base.
{
public:
    void myname() { cout << "This is class DerA" << endl; }
};

class DerB : public Base //Похідний класс DerB від класу Base.
{
public:
    void myname() { cout << "This is class DerB" << endl; }
};

class DerAB : public DerA, public DerB //Шляхом множинного успадкування отримали класс DerAB.
{
public:
    void myname() { cout << "This is class DerAB" << endl; }
};

int main() {
    Base base, * c, * d, * e, * f; //Створили масив із 4 покажчиків на базовий клас ієрархії.
    base.myname(); //Виклик base.
    DerA a;
    a.myname();    //Виклик a.
    DerB b;
    b.myname();    //Виклик c.
    DerAB ab;
    ab.myname();   //Виклик ab.
    c = &base;     //Посилання на Base.
    c->myname();   //Виклик значення покажчика c.
    d = &a;        //Посилання на похідний клас DerA.
    d->myname();   //Виклик значення покажчика d.
    e = &b;        //Посилання на похідний клас DerB.
    e->myname();   //Виклик значення покажчика e.
    f = (DerA*)&ab;//Посилання на DerAB.
    f->myname();   //Виклик значення покажчика f.
    system("pause");
    return 0;
}
