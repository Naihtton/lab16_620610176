#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int r[] = {a,b,c,d};
	for(int i=0;i<4;i++){
		swap(r[i],r[rand()%4]);
	}
	a = r[0];
	b = r[1];
	c = r[2];
	d = r[3];
}