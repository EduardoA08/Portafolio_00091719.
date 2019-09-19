//Esta basada en la Actividad 8.
#include <iostream>
#include <stack>

using namespace std;

int main(){
    bool empty();
    stack<int> s;
//Parte 1

    s.push(10);
    s.push(20);
    s.push(9);
    s.pop();
    s.pop();
    s.pop();

    if(s.empty() == true){
        cout<<"La pila esta vacia";
    }


//Parte 2

    s.push(10);
    s.push(20);
    s.push(9);
    s.pop();
    s.pop();

    cout<<"El ultimo valor de la pila es: "<<s.top();

    s.push(20);
    s.push(9);

    if(s.empty()== true){
        cout<<"La pila esta vacia";
    }
    else{
        cout<<"\n\nLa pila contiene elementos";
    }

    return 0;
}
