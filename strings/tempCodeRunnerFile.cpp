#include <iostream>
using namespace std;
class tollBooth
{
private:
    int cars, buses, heavyvehicles;
    float amount;

public:
   
    void car();
    void bus();
    void heavyvehicle();
    friend void display(tollBooth);
};
    void tollBooth :: bus()
    {
        buses++;
        amount = amount + 100;
        cout << "The charges of 1 bus is Rs:100 \n";
        cout << "Number of bus passed: " << buses << "\n";
    }
   void tollBooth :: car()
    {
        cars++;
        amount = amount + 50;
        cout << "The charges of 1 cars is Rs:50 \n";
        cout << "Number of cars passed: " << cars << "\n";
        
    }
   
   void tollBooth :: heavyvehicle()
    {
        
        heavyvehicles++;
        amount = amount + 200;
        cout << "The charges of 1 heavyvehicle is Rs:200 \n";
        cout << "Number of heavy Vehicle paseed: " << heavyvehicles << "\n";
    }
     void display(tollBooth t)
    {
        cout << "Total Amount: " << t.amount << "\n";
    }

   
    


int main()
{   
    tollBooth ob;
    
    int ch;
    cout << "Project made by A-26 Atharva Malode\n";
    cout << "Project Name: Toll booth plaza \n";
    cout << "\n \n";
    cout << "\t*********Nagpur Toll Booth Plaza*************";
    cout << "\t\n Welcome to Nagpur toll booth plaza.\n";
    cout << "\n";
    cout << " 1.Car\n";
    cout << " 2.bus \n";
    cout << " 3.heavy Vehicle\n";
    cout << " 4.Display \n";
    cout << " 5.Exit \n";
    cout << "\n";
    do
    {
        cout << "Enter the choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            ob.car();
            ob.display();
            break;
        case 2:
            ob.bus();
            ob.display();
            break;
        case 3:
            ob.heavyvehicle();
            ob.display();
            break;
        case 4:
            ob.display();
            break;
        case 5:
            printf("Exit \n");
            break;
        default:
            printf("Enter valid choice");
        }
        cout << "\n";
    } while (ch != 5);

}
