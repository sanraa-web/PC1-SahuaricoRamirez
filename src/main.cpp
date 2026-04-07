#include <iostream>
#include <vector>
#include <string>
#include "solution.hpp"

int evalRPN(std::vector<std::string>& tokens);

void test(std::vector<std::string> tokens, int expected) {
    int result = evalRPN(tokens);
    std::cout << "Tokens: [";
    for (size_t i = 0; i < tokens.size(); ++i)
        std::cout << tokens[i] << (i + 1 < tokens.size() ? ", " : "");
    std::cout << "]\n";
    std::cout << "Resultado: " << result
              << " | Esperado: " << expected
              << " | " << (result == expected ? "Paso" : "Fallo")
              << "\n\n";
}

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