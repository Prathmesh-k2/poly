#include<iostream>
using namespace std;
class s{
	public:
		void area(int r	){
			cout<<"area :"<<3.14*r*r<<endl;
		}
			void area(int l,int b	){
			cout<<"area :"<<b*l<<endl;
		}
};
int main(){
	s a;
	a.area(10);
		a.area(5,6);
	
}
