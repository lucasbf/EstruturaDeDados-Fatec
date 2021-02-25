#include <iostream>

using namespace std;

void conta(int i) {
    cout << "Entrando: " << i << endl;
    if(i < 100)
        conta(i+1);
    cout << "Saindo: " << i << endl;
}

int fat(int n) {
    return n == 0 ? 1 : n*fat(n-1);
}

int main(int argc, char *argv[])
{
    conta(0);  

    cout << "Fat: " << fat(10) << endl; 
    return 0;
}
