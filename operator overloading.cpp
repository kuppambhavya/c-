#include <iostream>
using namespace std;
class Count 
{
    int value;
   public:
    Count() : value(5) {}
    void operator ++ () 
	{
        ++value;
    }
    void display() 
	{
        cout <<value;
    }
};
int main() 
{
    Count count1;
    ++count1;
    count1.display();
    return 0;
}
