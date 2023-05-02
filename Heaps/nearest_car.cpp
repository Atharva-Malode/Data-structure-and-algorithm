#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

class car
{
  public:
  string id;
  int x,y;
  car(string id, int x, int y):id(id),x(x),y(y){}
  int dist()const
  {
    return x*x + y*y;
  }

};
class CarCompare
{
    public:
    bool operator()(const car A,const car B)
    {
         return A.dist()<B.dist();
    }
};
void printNearestCars(vector <car> cars, int k)
{
    priority_queue <car, vector<car>,CarCompare>  max_heap(cars.begin(),cars.begin()+k);

    //remaing cars
    for (int i = k ; i < cars.size(); i++)
    {
        auto car = cars[i];

        if(car.dist() < max_heap.top().dist())
        {
            max_heap.pop();
            max_heap.push(car);
        }
    }

    //print all the cars inside the heap they will be smallest
    vector <car> output;
    while (!max_heap.empty())
    {
        //cout << max_heap.top().id<<endl;
        output.push_back(max_heap.top());
        max_heap.pop();
    }
    
    reverse(output.begin(),output.end());

    for (auto car : output)
    {
        cout<<car.id<<endl;
    }
}
int main()
{

    int N,K;
    cin>>N>>K;

    string id;
    int x,y;

    vector<car> cars;
    for(int i = 0 ; i < N; i++)
    {
        cin>>id>>x>>y;
        car car(id,x,y);
        cars.push_back(car);
    }
    printNearestCars(cars,K);

    return 0;
}