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
