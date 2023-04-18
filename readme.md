Inversor de Números Inteiros com Ponteiros em C
Este pequeno programa é um exercício de inversão de números inteiros utilizando ponteiros na linguagem C.

Funcionamento
O programa solicita ao usuário que insira dois valores inteiros, que são armazenados nas variáveis a e b. Os valores originais de a e b são armazenados nas variáveis c e d.

O programa então chama a função inverter, passando os endereços das variáveis a e b como argumentos. A função inverter calcula o inverso de cada valor inteiro usando um loop while e armazena os valores invertidos de volta nas variáveis a e b usando ponteiros.

Por fim, o programa imprime os valores originais de a e b junto com seus valores invertidos.

Como Usar

Para utilizar este programa, é necessário ter um compilador C instalado no sistema. Você pode compilar o programa executando o seguinte comando no terminal:

Copy code

(```bash
gcc -o inversor.exe inversor.c```)


Depois de compilado, você pode executar o programa digitando o seguinte comando no terminal:

(```bash
./inversor.exe```)

O programa então solicitará que você insira dois valores inteiros. Após inserir os valores, o programa calculará seus valores inversos e exibirá a saída na tela.

Contribuindo
Contribuições para este projeto são bem-vindas. Se você encontrar um bug ou tiver uma solicitação de recurso, abra uma issue no repositório do GitHub. Se você deseja contribuir com o código, faça um fork do repositório e envie um pull request.

=====English Version

Reverse Integers with Pointers in C

This small program is an exercise in reversing integer numbers using pointers in the C programming language.

How it works
The program prompts the user to enter two integer values, which are stored in variables a and b. The original values of a and b are stored in variables c and d.

The program then calls the inverter function, passing the addresses of variables a and b as arguments. The inverter function calculates the reverse of each integer value using a while loop, and stores the reversed values back into variables a and b using pointers.

Finally, the program prints the original values of a and b along with their reversed values.

Usage
To use this program, you need to have a C compiler installed on your system. You can compile the program by running the following command in your terminal:

Copy code
gcc -o reverse_integers.exe reverse_integers.c

Once the program is compiled, you can run it by typing the following command in your terminal:

./reverse_integers.exe

The program will then prompt you to enter two integer values. After entering the values, the program will calculate their reverse values and display the output on the screen.

Contributing
Contributions to this project are welcome. If you find a bug or have a feature request, please open an issue on the GitHub repository. If you would like to contribute code, please fork the repository and submit a pull request.
