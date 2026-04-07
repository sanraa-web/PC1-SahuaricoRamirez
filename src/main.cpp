#include <iostream>
#include <vector>
#include <string>
#include "solution.hpp"

int main() {
    // Ejemplos del mismo problema
    // Ejem1: ((2 + 1) * 3) = 9
    test({"2","1","+","3","*"}, 9);

    // Ejem2: (4 + (13 / 5)) = 6
    test({"4","13","5","/","+"}, 6);

    // Ejem3: ((10 * (6 / ((9 + 3) * -11))) + 17) + 5 = 22
    test({"10","6","9","3","+","-11","*","/","*","17","+","5","+"}, 22);

    // numero negativo
    test({"-3"}, -3);

    // Extra: division truncada hacia cero
    test({"7","2","/"}, 3);    
    test({"-7","2","/"}, -3);  

    return 0;
}