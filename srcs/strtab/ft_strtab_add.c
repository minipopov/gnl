#include "ft_strtab.h"

int		ft_strtab_add(char ***tab, char *new)
{
	int		len;
	char	**newtab;

	len = ft_strtab_len(*tab);
	if (!new)
		return (0);
	if (!(newtab = ft_strtab_realloc(tab, len + 1)))
		return (0);
	*tab = newtab;
	newtab[len] = new;
	return (1);
}