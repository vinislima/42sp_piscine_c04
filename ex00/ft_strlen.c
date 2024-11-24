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
