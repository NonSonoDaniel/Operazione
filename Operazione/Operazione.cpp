#include <iostream>

int main()
{
    int operazione;
    float numero1, numero2, calcolo;
        
    std::cout << "Inserire il primo numero: ";
    std::cin >> numero1;
    
    std::cout << "Inserire il secondo numero: ";
    std::cin >> numero2;

    do {
        
        std::cout << "Digitare l'operazione da effettuare (1 = Addizione - 2 = Sottrazione - 3 = Moltiplicazione - 4 = Divisione) ";
        std::cin >> operazione;

    } while (operazione != 1 && operazione != 2 && operazione != 3 && operazione != 4);

    if (operazione == 1) calcolo = numero1 + numero2;
    if (operazione == 2) calcolo = numero1 - numero2;
    if (operazione == 3) calcolo = numero1 * numero2;
    if (operazione == 4) calcolo = numero1 / numero2;

    std::cout << "Il risultato e': " << calcolo;

}