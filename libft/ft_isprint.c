/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:37:24 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/10/13 16:39:35 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}