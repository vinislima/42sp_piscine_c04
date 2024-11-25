# [C 04](https://github.com/vinislima/42sp_piscine_c04)

This module in the 42 Piscine introduces functions focusing on character and number manipulation, string processing, and conversions between numeric representations. The exercises aim to develop understanding of basic C operations related to strings and integers, progressing from simple counting to more complex operations like base conversions.

- **`ft_strlen`** - Counts and returns the number of characters in a string.
- **`ft_putstr`** - Displays a string to standard output.
- **`ft_putnbr`** - Outputs an integer to standard output, handling all possible `int` values.
- **`ft_atoi`** - Converts a numeric string (with optional whitespaces and signs) to an integer. The behaviour for overflows or underflows is undefined.
- **`ft_putnbr_base`** - Displays an integer in a specified base using the provided symbols. Handles errors such as invalid or duplicate base characters.
- **`ft_atoi_base`** - Converts a numeric string in a specified base to an integer. Returns 0 for invalid bases or errors like duplicate characters or prohibited symbols.

Module C 04 focuses on string and numeric operations in C, blending fundamental skills like counting characters and outputting strings with intermediate tasks such as converting numbers between bases. The exercises build progressively, emphasising input validation and error handling, particularly in base conversions. This approach ensures a strong foundation for practical applications, such as handling user inputs and custom numeric systems, while strict norms and compiler constraints reinforce good coding practices for real-world development.

Module C 04 provides a robust introduction to critical programming techniques in C, blending fundamental and intermediate concepts. By completing these exercises, students gain a deeper understanding of string and number manipulation, preparing them for more advanced challenges in subsequent modules.

## Usage

Uncomment the main and use the command below.

```c
cc -Wall -Wextra -Werror {file}

```

---
<details>
    <summary>Exercises:</summary>

- [ex00:](https://github.com/vinislima/42sp_piscine_c04/blob/main/ex00/ft_strlen.c)
    
    ```c
    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   ft_strlen.c                                        :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/09/02 18:03:52 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/11/24 11:47:03 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */

    // a função ft_strlen conta o número de caracteres em uma string.
    int	ft_strlen(char *str);

    int	ft_strlen(char *str)
    {
	    // declaramos um inteiro que será o contador.
	    int	i;
	    // iniciamos o contador com 0.
	    i = 0;
	    // enquanto o caractere da string for diferente de nulo,
	    // o laço continuará incrementando o contador.
	    while (str[i] != '\0')
	    {
		    // incrementa o contador.
		    i++;
    	}
	    // ao final, a função retorna o contador
	    // que é o número de caracteres da string.
	    return (i);
    }
    ```
    
- [ex01:](https://github.com/vinislima/42sp_piscine_c04/blob/main/ex01/ft_putstr.c)
    
    ```c
    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   ft_putstr.c                                        :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/09/02 18:04:30 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/11/24 11:50:06 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */

    // incluímos a biblioteca unistd.h para usar a função write.
    #include <unistd.h>
    // declaramos a função ft_putstr que recebe uma string como parâmetro.
    // não retorna nada, pois a função é void e usa a função write para imprimir a string.
    void	ft_putstr(char *str);

    void	ft_putstr(char *str)
    {
	    // declaramos a variável count para ser o índice da string.
	    int	count;
	    // inicializamos a variável count com 0.
	    count = 0;
	    // enquanto o caractere na posição count da string for diferente
	    // de '\0' (fim da string), escrevemos o caractere na posição count
	    while (str[count] != '\0')
	    {
		    // escrevemos o caractere na posição count da string.
		    write(1, &str[count], 1);
		    // incrementamos a variável count para passar para o próximo caractere.
		    count++;
	    }
    }
    ```
    
- [ex02:](https://github.com/vinislima/42sp_piscine_c04/blob/main/ex02/ft_putnbr.c)
    
    ```c
    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   ft_putnbr.c                                        :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/09/02 18:48:14 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/11/24 11:54:32 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */

    // incluímos a biblioteca unistd.h para usar a função write.
    #include <unistd.h>
    // declaramos a função ft_putnbr que recebe um inteiro como parâmetro.
    // não retorna nada, pois a função é void e usa a função write para imprimir o inteiro.
    void	ft_putnbr(int nb);

    void	ft_putnbr(int nb)
    {
	    // declaramos a variável count para ser o índice da string,
	    // e a variável list para armazenar os caracteres do número.
	    int		count;
	    char	list[10];
	    // se o número for 0, escrevemos o caractere '0'.
	    if (nb == 0)
		    write(1, "0", 1);
	    // se o número for o menor inteiro possível, escrevemos a string "-2147483648".
	    if (nb == -2147483648)
	    {
		    write(1, "-2147483648", 11);
		    return ;
	    }
	    // se o número for negativo, escrevemos o caractere '-' e multiplicamos o número por -1
	    // para torná-lo positivo e facilitar a conversão.
	    if (nb < 0)
	    {
		    write(1, "-", 1);
		    nb = nb * -1;
	    }
	    // inicializamos a variável count com 0.
	    count = 0;
	    // enquanto o número for maior que 0, seguiremos dentro do loop.
	    while (nb > 0)
	    {
		    // armazenamos o resto da divisão do número por 10 na lista
		    // e manipulando o número para transformá-lo em caractere.
		    list[count++] = (nb % 10) + 48;
		    // dividimos o número por 10 para passar para o próximo dígito.
		    nb = nb / 10;
	    }
	    // realizamos o decremento da variável count para acessar o último caractere.
	    count--;
	    // enquanto count for maior ou igual a 0, escrevemos o caractere na posição count da lista.
	    while (count >= 0)
		    write(1, &list[count--], 1);
    }
    ```
    </details>
