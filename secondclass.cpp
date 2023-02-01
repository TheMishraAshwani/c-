#include<iostream>
using namespace std;
class person
{
    private:
    int run;
    string msg;
    public:
    void play()
    {
        run=50;
        cout<<"today i scored"<<run<<"run"<<endl;
    }
    void walk()
    {
        msg="today i walked a lot";
        cout<<msg;
    }
};
int main()
{
   person obj;
   obj.play();
   obj.walk();
   return 0;                                                         
}