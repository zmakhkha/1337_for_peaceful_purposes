/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:21:20 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/21 09:36:26 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
size_t  ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	int				len;
	char			*tmp;


	if(s == NULL || (*f) == NULL)
		return (NULL);
	tmp	=	(char*)s;
	i=0;
	len =	ft_strlen(tmp);
	res	=	(char*)	malloc((len	+1)*	sizeof(char));
	while(tmp[i])
		{
			res[i] = (*f)(i, tmp[i]);
			i++;
		}
		res[i] = '\0';
	return (res);
}
char
     ft_tolower(unsigned int i, char c){
        c = (unsigned char)c;
		//(void)i;
        if(('A' <= c) && (c<= 'Z'))
        {
            c =c +('a' - 'A');
        }
        return (c);
     }
#include<string.h>
int main()
{
	printf("%s", ft_strmapi("Abc",ft_tolower));
}