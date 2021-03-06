/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gurival- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/19 18:02:17 by gurival-     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/19 18:02:17 by gurival-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*cp1;
	char	*cp2;
	size_t	i;

	i = 0;
	cp1 = (char*)s1;
	cp2 = (char*)s2;
	while (i < n)
	{
		if (cp1[i] != cp2[i])
			return ((unsigned char)cp1[i] - (unsigned char)cp2[i]);
		i++;
	}
	return ((unsigned char)0);
}
