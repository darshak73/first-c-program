#include <iostream>

using namespace std;

class complex
{
    int real, imag; 
public:
    void getComplex();  
    void putComplex(); 
    void add(complex c2); 
};

void complex::getComplex()
{ 
    cout << "Enter real and imaginary value of complex number:\n"; 
    cin >> real >> imag; 
}

void complex::putComplex() 
{ 
    cout << real << " + " << imag << "i"; 
}

void complex::add(complex c2) 
{
    real += c2.real;
    imag += c2.imag;
}

int main() 
{
    complex c1, c2;
    c1.getComplex();
    c2.getComplex();
    c1.add(c2);
    cout << "Sum of the complex numbers: ";
    c1.putComplex();
    return 0;
}
    