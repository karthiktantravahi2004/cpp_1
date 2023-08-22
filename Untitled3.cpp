#include<iostream>
using namespace std;
class Live
{
	private:
		int velocity;
	public:
       int getvelocity(int y)
    {
    	velocity=y;
	}
    
	int modi(int x);
		
		
};
 Live::modi(int x)
 {
 	this->velocity=x;
 	cout<<velocity;
 }
int main()
{
	Live yt;
	yt.getvelocity(5);
	yt.modi(8);


}
