using System;

namespace Congettura_di_Collatz
{
 /*
  * La Congettura di Collatz è una congettura matematica tuttora irrisolta.
  * Essa riguarda il seguente algoritmo:
  * 1. Si prenda un intero positivo n.
  * 2. Se n = 1, l'algoritmo termina.
  * 3. Se n è pari, si divida per due; altrimenti si moltiplichi per 3 e si aggiunga 1.
  */
    class Program {
        static void Main(string[] args) {
            while (true) {
                Console.ForegroundColor = ConsoleColor.Green;
                Console.WriteLine("Congettura di Collatz");
                Console.ResetColor();
                Console.WriteLine("Inserisci Un Numero Intero, seguiranno il numero di passaggi eseguiti.");
                string input = Console.ReadLine();
                long num = long.Parse(input);
                int cont = 0;
                //Rimani nel ciclo finquando num non è 1
                while (num != 1) {
                    //Se num è inferiore a 1
                    if (num < 1) {
                        Console.ForegroundColor = ConsoleColor.Red;
                        Console.WriteLine("Devi inserire un numero superiore a 1!!");
                        Console.ResetColor();
                    }
                    //Se num è pari allora lo divido per 2
                    else if (num % 2 == 0) {
                        num = (num / 2);
                        //Se il num è dispari lo moltiplico per 3 e aggiungo 1
                    } else {
                        num = (num * 3) + 1;
                    }
                    //Contatore passaggi eseguiti
                    cont = (cont + 1);
                }
                Console.WriteLine("Sono stati eseguiti " + cont + " Passaggi.");
                Console.WriteLine("Vuoi continuare? [Y, N]");
                string answer = Console.ReadLine().ToUpper();
                if (answer == "Y") {
                    continue;
                }
                else if (answer == "N") {
                    return;
                } else {
                    return;
                }
            }
        }
    }
}
