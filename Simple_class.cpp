#include <iostream>
#include "Simple_class.hpp"

int Simple_class :: get()
{
    return a;//Methode um die Variable der Klasse zu erfragen
}
void Simple_class :: set(int b)
{
    a = b;//Methode um a/die Variable der Klasse zu veraendern
}
Simple_class::Simple_class(int z) : a(z){} //Konstruktor (mit Parameterannahme)
