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
