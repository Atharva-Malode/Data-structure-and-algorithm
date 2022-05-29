#include<iostream>

using namespace std;
class Time 
{
    private:
        int hours;
        int minutes;
        int seconds;
        int a,b;
    public:
        void gettime();
        void puttime();
        void addtime(Time T1,Time T2);
      
};

void Time ::gettime()
{
    cout << " Enter hour : ";
    cin>> hours;
    cout << " Enter Minutes :";
    cin>> minutes;
    cout <<" Enter seconds :";
    cin >> seconds;
}
 void Time :: addtime(Time T1,Time T2)
{    
    int hours;
        int minutes;
        int seconds;
        int a,b;
    seconds = T1.seconds + T2.seconds;
    if (seconds>=60)
        a = seconds/60;
    else
        a=0;
    
    minutes = T1.minutes + T2.minutes + a;
    if (minutes>= 60 )
        b = minutes/60;
    else
        b=0;
    minutes = minutes % 60;
    seconds = seconds % 60;
    hours = T1.hours + T2.hours + b;
}
void Time::puttime(void)
{
    cout << endl;
    cout << "Time after add: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
   

int main()
{
    Time T1,T2,T3;
    T1.gettime();
    cout << "Enter time to add "<<endl;
    T2.gettime();
    T3.addtime(T1,T2);
    T3.puttime();
    return 0;
}