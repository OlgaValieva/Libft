/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:38:53 by carys             #+#    #+#             */
/*   Updated: 2021/11/08 16:17:50 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <fcntl.h>


void del(void *a)
{
	printf("removed: %s\n", (char *)a);
   	return ;
} 
void	mdel(void *cont)
{
	printf("map del: %s\n", cont);
} 
void fu(void *first_character)
{
	((char *)first_character)[0] = 'I';
}
void *fuu(void *first_character)
{
	((char *)first_character)[0] = 'M';
	return (first_character);
}


static char f(unsigned int i, char c)
{
	char mapi;

	i = 0;
	mapi = c + 1;
	return (mapi);
}
static void test(unsigned int i, char *w)
{
	i = 0;
	*w -= 1;
}

int main()
{
	int c;
	const char *s;
	const char *s2;
//	unsigned char *p;
	char src[] = "memset";
	unsigned char serc[]="12345";
   	unsigned char dest[]="678";

	c = 't';
	s = "astcii";
	s2 = "as";
//isalpha
	printf("isalpha: %d\n", isalpha(c));
	printf("ft_isalpha: %d\n", ft_isalpha(c));
//isdigit	
	printf("\nisdigit: %d\n", isdigit(c));
	printf("ft_isdigit: %d\n", ft_isdigit(c));
//isalnum
	printf("\nisalnum: %d\n", isalnum(c));	
	printf("ft_isalnum: %d\n", ft_isalnum(c));
//isascii
	printf("\nisascii: %d\n", isascii(c));	
	printf("ft_isascii: %d\n", ft_isascii(c));
//isprint	
	printf("\nisprint: %d\n", isprint(c));
	printf("ft_isprint: %d\n", ft_isprint(c));
//strlen	
	printf("\nstrlen: %zu\n", strlen(s));
	printf("ft_strlen: %zu\n", ft_strlen(s));
//memset	
	printf("\nmemset: %s\n", memset(src, 'a', 3));
	printf("ft_memset: %s\n", ft_memset(src, 'a', 3));
//bzero
	bzero (src, 3);
     	printf("\nbzero:   ");
	for (int i = 0; i < 7; i++)
            printf("%c", src[i]);
	ft_bzero (src, 3);
    	printf("\nft_bzero:      ");
    	for (int i = 0; i < 7; i++)
	    printf("%c", src[i]);
	printf("\n");	
//memcpy	
	printf ("\nmemcpy:	%s\n", memcpy(dest, serc, 2));
	printf ("ft_memcpy:	%s\n", ft_memcpy(dest, serc, 2));
//memmove
	printf ("\nmemmove:	%s\n", memmove(dest, serc, 4));
	printf ("ft_memmove:	%s\n", ft_memmove(dest, serc, 4));
//strlcpy
	char buf[9] = "dst12345";
      	char str[8] = "src6789";   
	printf("\ndst: ");
	for (int j = 0; j < 9; j++)
        	printf("%c", buf[j]);
 	printf("\nsrc: ");
	for (int k = 0; k < 8; k++)
		printf("%c", str[k]);
	strlcpy(buf, str, 3);
	printf("\nstrlcpy_after:	");
    	for (int l = 0; l < 9; l++)
        	printf("%c", buf[l]);
	char fbuf[9] = "dst12345";
        char fstr[8] = "src6789";
        ft_strlcpy(fbuf, fstr, 3);
        printf("\nft_strlcpy_after:        ");
        for (int m = 0; m < 9; m++)
                printf("%c", fbuf[m]);
	printf("\nstrlcpy:		%zu\n", strlcpy(fbuf, fstr, 1));
	printf("ft_strlcpy:		%zu\n", ft_strlcpy(fbuf, fstr, 1));
 //strlcat
 	char bf[9] = "dst12345";
        char sr[8] = "src6789";
        strlcat(bf, sr, 3);
        printf("\nstrlcat_after:        ");
        for (int j = 0; j < 16; j++)
                printf("%c", bf[j]);
	char fbf[9] = "dst12345";
        char fsr[8] = "src6789";
        ft_strlcat(fbuf, fstr, 3);
        printf("\nft_strlcat_after:        ");
        for (int j = 0; j < 16; j++)
                printf("%c", fbf[j]);
        printf("\nstrlcat:              %zu\n", strlcat(fbf, fsr, 5));
        printf("ft_strlcat:             %zu\n", ft_strlcat(fbf, fsr, 5));
//toupper
	printf("\ntoupper: %c\n", toupper(c));
        printf("ft_toupper: %c\n", ft_toupper(c));
//tolower
	printf("\ntolower: %c\n", tolower(c));
    printf("ft_tolower: %c\n", ft_tolower(c));	
//strchr
	printf("\nstrchr: %s\n", strchr(s, c));
    printf("ft_strchr: %s\n", ft_strchr(s, c));	
//strrchr
	printf("\nstrrchr: %s\n", strrchr(s, c));
    printf("ft_strrchr: %s\n", ft_strrchr(s, c));	
//strncmp	
	printf("\nstrncmp: %d\n", strncmp(s, s2, 3));
    printf("ft_strncmp: %d\n", ft_strncmp(s, s2, 3));
//memchr
	printf("\nmemchr: %s\n", memchr(s, c, 6));
    printf("ft_memchr: %s\n", ft_memchr(s, c, 6));	
//memcmp
	printf("\nmemcmp: %d\n", memcmp(s, s2, 3));
    printf("ft_memcmp: %d\n", ft_memcmp(s, s2, 3));	
//strnstr
 	char str1[] = "superchervychok";
	char str2[] = "chervychok";
	printf("\nstrnstr: %s\n", strnstr(str1, str2, 30));
	printf("ft_strnstr: %s\n", ft_strnstr(str1, str2, 30));
//atoi
	printf("\natoi(): %d\n", atoi("+994a51:1990"));
	printf("ft_atoi(+994a51:1990): %d\n", ft_atoi("+994a51:1990"));
	printf("atoi(-987654321): %d\n", atoi("-987654321"));
	printf("ft_atoi(-987654321): %d\n", ft_atoi("-987654321"));
//calloc
	char	*mem1 = calloc(3, 2);
	char	*mem2 = ft_calloc(3, 2);
	memset(mem1, 'v', 6);
	memset(mem2, 'v', 6);
	printf("\ncalloc(3, 2) %s\n", mem1);
	printf("ft_calloc(3, 2) %s\n", mem2);
//strdup
	char str3[15] = "ne terya vremy";
	printf("\nstrdup: %s\n", strdup(str3));
	printf("ft_strdup: %s\n", ft_strdup(str3));
//ft_substr
 	printf("\nft_substr(hello,1,3): %s\n", ft_substr("hello", 1, 3));
    printf("ft_substr("",2,3): %s\n", ft_substr("", 2, 3));
//ft_strjoin
	char const *s3 = "micro";
	char const *s4 = "mir";
	printf("\nft_strjoin(micro mir): %s\n", ft_strjoin(s3, s4));
//ft_strtrim
	printf("\nft_strtrim(vremechcovre, vre): %s\n", ft_strtrim("vremechkovre", "vre"));
// ft_split
	char **ssplit;
	int q;

	q = 0; 
	ssplit  = ft_split("  edinstvennyi pyt naslazdatcy zyzniy - byt bestrashnym u ne boyatica neudash u problem ", ' ');
//	ssplit = ft_split("\0aa\0bbb", '\0');	
	while (ssplit[q])
	{
	printf("\nft_split %s", ssplit[q]);
	q++;
	}
//ft_itoa
	printf("\n\nft_itoa(0):  %s\n", ft_itoa(0));
 	printf("ft_itoa(-2147483647):  %s\n", ft_itoa(-2147483647));
 	printf("ft_itoa(2147483647):  %s\n", ft_itoa(2147483647));
//ft_strmapi
	char strm[] = "abc";
	printf("\nft_strmapi(abc,+1): %s\n", ft_strmapi(strm, *f));

//ft_striteri
	char www[] = "bcd";

	ft_striteri(www, &test);
	printf("\nft_striteri(bcd,-1): %s\n", www);
   

//ft_putchar_fd
	int fd;
	fd = open("txt.txt", O_WRONLY);
	ft_putchar_fd('O', fd);
//ft_putstr_fd
	ft_putstr_fd("ly", fd);
//ft_putendl_fd
	ft_putendl_fd("ayrat", fd);
//ft_putnbr_fd 
	printf("%d\n", fd);
	ft_putnbr_fd(555555, fd);
	close(fd);	

// ft_lstnew
	t_list	*b;
	b = ft_lstnew("chelovechkin");
	printf("\nlstnew(content): %s\n", b -> content);
	printf("lstnew(next): %p\n", b -> next);
//ft_lstadd_front
	ft_lstadd_front(&b, ft_lstnew("gruffalo"));
	printf("\nlstadd_front(content): %s\n", b -> content);
	printf("lstadd_front(next): %p\n", b -> next);
//ft_lstsize
	int	size;
	size = ft_lstsize(ft_lstnew("dochurka"));
	printf("\nlstsize(1): %d\n", size);
//ft_lstlast
	ft_lstlast(b);
	printf("\nlstlast(content): %s\n", b -> content);
	printf("lstlast(next): %p\n", b -> next);
//ft_lstadd_back
	ft_lstadd_back(&b, ft_lstnew("zog"));
	printf("\nlstadd_back(content): %s\n", b -> content);
	printf("lstadd_back(next): %p\n\n", b -> next);
//ft_lstdelone
	t_list *elem;
	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (0);
	else
		elem -> content = elem;
	elem -> next = NULL;
	ft_lstdelone(elem, del);
	printf("\nft_lstdelone(): \n\n");
	write(1, elem -> content, ft_strlen(elem -> content));
//	ft_lstclear
	
	t_list *lst;
	t_list *clear;

	lst = ft_lstnew("nif");
	lst -> next = ft_lstnew("naf");
	lst -> next -> next = ft_lstnew("nuf");
	lst -> next -> next -> next = ft_lstnew("nef");
	ft_lstclear(&(lst -> next), del);
	clear = lst;
	while (lst)
	{
		printf("ft_lstclear %s\n", lst -> content);
		lst = lst -> next;
	}
	ft_lstdelone(clear, del);
//ft_lstiter
	t_list *list;
	t_list *iter;
	char	*word;
	int	size_of_list = 0;

	word = malloc(sizeof(char) * 6);
	ft_strlcpy(word, "rodos", 6);
	list = ft_lstnew(word);
	
	iter = list;

	while (size_of_list <= 5)
	{
	word = malloc(sizeof(char) * 6);
	ft_strlcpy(word, "rodos", 6);
	word[4] = (size_of_list + 1) + '0';
	list -> next = ft_lstnew(word);
	list = list -> next;
	size_of_list++;
	}
	ft_lstiter(iter, &fu);
	while(iter)
	{
		printf("ft_lstiter  %s\n", iter -> content);
		iter = iter ->next;
	}
//ft_lstmap
	t_list *lis;
	t_list *map;
	t_list *nmap;
	char	*wrd;
	int size_of_lis = 2;

	wrd = malloc(sizeof(char) * 6);
	ft_strlcpy(wrd, "mdms1", 6);
	lis = ft_lstnew(wrd);
	
	map = lis;

	while (size_of_lis <= 5)
	{
	wrd = malloc(sizeof(char) * 6);
	ft_strlcpy(wrd, "mdms1", 6);
	wrd[4] = (size_of_lis % 10) + '0';
	lis -> next = ft_lstnew(wrd);
	lis = lis -> next;
	size_of_lis++;
	}
	
	nmap = ft_lstmap(map, fuu, mdel);
	while(nmap)
	{
		printf("ft_lstmap  %s\n", nmap -> content);
		nmap = nmap ->next;
	}
	return(0);
}
