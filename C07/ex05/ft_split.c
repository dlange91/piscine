/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:38:53 by ldavid            #+#    #+#             */
/*   Updated: 2019/09/06 16:30:29 by ldavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	tortuegeniale(int debut, int fin, ***tab, *str)
{

}

char **ftsplit(char *str, char *charset)
{
	int i;
	int j;
	int nb_mots;
	char **tab;
	int in_progress;

	i = 0;
	j = 0;
	in_progress = 0;

	if (str[0] = '\0')
		//		rien :D
	{}
	while(str[i++] != '\0')
	{
		while(charset[j++] != '\0')
		{
			if (str[i] = charset[j])
			{
				nb_mots = nb_mots + 1;
				j = -1;
				tortuegeniale(in_progress, i, &(**tab), str, nb_mots);
				in_progress = i++;
				break ;
			}
		}
		j = 0;
	}
	return (tab);
}

