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
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}
void shuffle(int &a, int &b, int &c, int &d) {
    int random1 = rand() % 4;
    int random2 = rand() % 4;
    
    while (random1 == random2) {
        random2 = rand() % 4;
    }

    if (random1 == 0 && random2 == 1) swap(a, b);
    else if (random1 == 0 && random2 == 2) swap(a, c);
    else if (random1 == 0 && random2 == 3) swap(a, d);
    else if (random1 == 1 && random2 == 2) swap(b, c);
    else if (random1 == 1 && random2 == 3) swap(b, d);
    else if (random1 == 2 && random2 == 3) swap(c, d);
    else if (random1 == 1 && random2 == 0) swap(b, a);
    else if (random1 == 2 && random2 == 0) swap(c, a);
    else if (random1 == 3 && random2 == 0) swap(d, a);
    else if (random1 == 2 && random2 == 1) swap(c, b);
    else if (random1 == 3 && random2 == 1) swap(d, b);
    else if (random1 == 3 && random2 == 2) swap(d, c);
}

//Do not modify source code above this line