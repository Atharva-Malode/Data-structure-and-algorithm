#include<iostream>
using namespace std;
class library
{
private:
    int bok=0, membershi=0, encyclopedi=0;
    float amount;

public:
    void book();
    void membership();
    void encyclopedia();
    friend void display(library);
};

void library :: book()
{
    bok++;
    amount = amount + 100;
    cout << "The charges of 1 book is Rs:100 \n";
    
}
void library :: membership()
{
    membershi++;
    amount = amount + 50;
    cout << "The charge of membership is Rs: 1000";
    
   
}

void library :: encyclopedia()
{
   
    encyclopedi++;
    amount = amount + 200;
    cout << "The charge of 1 encyclopedia is Rs: 200 \n";
    
}

void display(library t)
{
    cout << "Total Amount: " << t.amount << "\n";
}


int main()
{  
    library bk;
   
    int ch;
    cout << "Project made by 23-Arjun Tiwari\n";
    cout << "Project Name: Library management \n";
    cout << "\n \n";
    cout << "\t****Library****";
    
    cout << "\n";
    cout << " 1.book\n";
    cout << " 2.membership\n";
    cout << " 3.encyclopedia\n";
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
            bk.book();
            display(bk);
            break;
        case 2:
            bk.membership();
            display(bk);
            break;
        case 3:
            bk.encyclopedia();
            display(bk);
            break;
        case 4:
            display(bk);
            break;
        case 5:
            cout<<"Exit \n";
            break;
        default:
            cout<<"Enter valid choice";
        }
        cout << "\n";
    } while (ch != 5);

}