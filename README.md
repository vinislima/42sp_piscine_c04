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
    /*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/09/02 18:03:52 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/09/05 08:12:43 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */
    
    int	ft_strlen(char *str);
    
    int	ft_strlen(char *str)
    {
    	int	i;
    
    	i = 0;
    	while (str[i] != '\0')
    	{
    		i++;
    	}
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
    /*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/09/02 18:04:30 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/09/05 08:22:50 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */
    
    #include <unistd.h>
    
    void	ft_putstr(char *str);
    
    void	ft_putstr(char *str)
    {
    	int	count;
    
    	count = 0;
    	while (str[count] != '\0')
    	{
    		write(1, &str[count], 1);
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
    /*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/09/02 18:48:14 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/09/05 18:07:58 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */
    
    #include <unistd.h>
    
    void	ft_putnbr(int nb);
    
    void	ft_putnbr(int nb)
    {
    	int		count;
    	char	list[10];
    
    	if (nb == 0)
    		write(1, "0", 1);
    	if (nb == -2147483648)
    	{
    		write(1, "-2147483648", 11);
    		return ;
    	}
    	if (nb < 0)
    	{
    		write(1, "-", 1);
    		nb = nb * -1;
    	}
    	count = 0;
    	while (nb > 0)
    	{
    		list[count++] = (nb % 10) + 48;
    		nb = nb / 10;
    	}
    	count--;
    	while (count >= 0)
    		write(1, &list[count--], 1);
    }
    ```
    </details>
