#include <iostream>

using namespace std;

//variable declarations

double a;
double b;
double x;

double addition(){
    x = a + b;
    cout << x;
    return x;
}

double subtraction (){
    x = a - b;
    cout << x;
    return x;
}

double multiplication(){
    x = a*b;
    cout << x;
    return x;
}

double division(){
    x = a/b;
    cout << x;
    return x;
}

void op(){
    string p;
    string q = "+";
    string r = "-";
    string s = "*";
    string t = "/";
    cout << "Enter + for addition, - for subtraction, * for multiplication and / for division."
         << "\n";
    cin >> p;
    cout << "Enter the numbers:"
         << "\n";
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;

    if (p == q)
    {
        addition();
    }
    else if (p == r)
    {
        subtraction();
    }
    else if (p == s)
    {
        multiplication();
    }
    else if (p == t)
    {
        division();
    }
    else
    {
        cout << "Operation not recognized. Try again.";
        op();
    }
}
void hi(){
    cout << "Hello, Welcome to the calculator."
         << "\n";
    op();
}

int main(){

    hi();
    char yn;

    while (1 > 0)
    {
        cout << "\n"
             << "Do you want to use the application again? [Y/N]";
        cin >> yn;
        if (yn == 'Y' || yn == 'y')
        {
            op();
        }
        else if (yn == 'n' || yn == 'N')
        {
            abort();
        }
    }
}