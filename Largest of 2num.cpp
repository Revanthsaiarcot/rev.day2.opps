#include <iostream>
using namespace std;
int main() {    
    float n1, n2;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 ;
    if(n1 >= n2)
        cout << "Largest number: " << n1;
    if(n2 >= n1)
        cout << "Largest number: " << n2;
		return 0;
}
