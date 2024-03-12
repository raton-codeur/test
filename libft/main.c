// https://github.com/raton-codeur/tests/blob/main/README.md#libft

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>
#include <bsd/string.h>

// isalpha, isdigit, isalnum, isascii, isprint

// int main()
// {
// 	for (int c = -1; c <= 255; c++)
// 	{
// 		assert((isalpha(c) != 0) == (ft_isalpha(c) != 0));
// 		assert((isdigit(c) != 0) == (ft_isdigit(c) != 0));
// 		assert((isalnum(c) != 0) == (ft_isalnum(c) != 0));
// 		assert((isascii(c) != 0) == (ft_isascii(c) != 0));
// 		assert((isprint(c) != 0) == (ft_isprint(c) != 0));
// 	}
// }

// strlen

// int main()
// {
// 	char *s = "salut";
// 	assert(strlen(s) == ft_strlen(s));
// 	s = "";
// 	assert(strlen(s) == ft_strlen(s));

// 	// erreur :
// 	// strlen(NULL);
// 	// ft_strlen(NULL);
// }

// memset

// int main()
// {
// 	char s[10];
// 	char ss[10];
// 	int c;
// 	size_t n;

// 	c = 'a';
// 	n = 3;
// 	ft_memset(s, c, n);
// 	memset(ss, c, n);
// 	assert(!memcmp(s, ss, n));

// 	c = 0;
// 	n = 3;
// 	ft_memset(s, c, n);
// 	memset(ss, c, n);
// 	assert(!memcmp(s, ss, n));

// 	c = INT_MAX;
// 	n = 3;
// 	ft_memset(s, c, n);
// 	memset(ss, c, n);
// 	assert(!memcmp(s, ss, n));

// 	c = INT_MIN;
// 	n = 3;
// 	ft_memset(s, c, n);
// 	memset(ss, c, n);
// 	assert(!memcmp(s, ss, n));

// 	c = 243;
// 	n = 3;
// 	ft_memset(s, c, n);
// 	memset(ss, c, n);
// 	assert(!memcmp(s, ss, n));

// 	c = -1;
// 	n = 3;
// 	ft_memset(s, c, n);
// 	memset(ss, c, n);
// 	assert(!memcmp(s, ss, n));

// 	c = 'u';
// 	n = 0;
// 	ft_memset(s, c, n);
// 	memset(ss, c, n);
// 	assert(!memcmp(s, ss, 2));

// 	// erreur :
// 	c = 'u';
// 	n = 3;
// 	// memset(NULL, c, n);
// 	// ft_memset(NULL, c, n);
// }

// bzero

// int main()

// {
// 	char s[10] = "salut toi";
// 	char ss[10] = "salut toi";
// 	size_t n = 5;
// 	bzero(s, n);
// 	ft_bzero(ss, n);
// 	assert(!memcmp(s, ss, n + 3));
// }

// {
// 	char s[10] = "salut toi";
// 	char ss[10] = "salut toi";
// 	size_t n = 0;
// 	bzero(s, n);
// 	ft_bzero(ss, n);
// 	assert(!memcmp(s, ss, n + 3));
// }

// erreur :
// {
// 	// bzero(NULL, 6);
// 	ft_bzero(NULL, 6);
// }

// memcpy

// int main()

// {
// 	char dst[10] = "XXXXX";
// 	char ddst[10] = "XXXXX";
// 	char *src = "salut";
// 	size_t n = 3;
// 	printf("vrai : %.5s\n", (char *)memcpy(dst, src, n));
// 	printf("perso : %.5s\n", (char *)ft_memcpy(ddst, src, n));
// }

// erreur :
// {
// 	char *dst = NULL;
// 	char *src = "salut";
// 	size_t n = 3;
// 	// printf("vrai : %s\n", (char *)memcpy(dst, src, n));
// 	printf("perso : %s\n", (char *)ft_memcpy(dst, src, n));
// }

// erreur :
// {
// 	char dst[10] = "XXXXX";
// 	char *src = NULL;
// 	size_t n = 3;
// 	// printf("vrai : %s\n", (char *)memcpy(dst, src, n));
// 	printf("perso : %s\n", (char *)ft_memcpy(dst, src, n));
// }

// la francinette dit de renvoyer NULL mais la vraie fait SEGV :
// int main()
// {
// 	char *dst = NULL;
// 	char *src = NULL;
// 	size_t n = 3;
// 	// printf("vrai : %s\n", (char *)memcpy(dst, src, n));
// 	printf("perso : %s\n", (char *)ft_memcpy(dst, src, n));
// }

// memmove

// base :
// int main()
// {
// 	char dst[10] = "XXXXXXXXX";
// 	char ddst[10] = "XXXXXXXXX";
// 	char *src = "salut";
// 	size_t n = 3;
// 	printf("vrai : %.9s\n", (char *)memmove(dst, src, n));
// 	printf("perso : %.9s\n", (char *)ft_memmove(ddst, src, n));
// }

/*
copie de gauche a droite ie si dst < src :

dst 	x x a b c d
src		    a b c d

dst 	a b c d c d
src		    c d c d
*/
// int main()
// {
// 	char dst[10] = "xxabcd";
// 	void *src = dst + 2;
// 	size_t n = 4;
// 	printf("%.6s\n", (char *)ft_memmove(dst, src, n));
// }

/*
copie de droite a gauche ie si dst > src

dst		    c d x x
src		a b c d x x

dst		    a b c d
src		a b a b c d
*/
// int main()
// {
// 	char src[10] = "abcdxx";
// 	void *dst = src + 2;
// 	size_t n = 4;
// 	printf("dst : %.4s\n", (char *)ft_memmove(dst, src, n));
// 	printf("src : %.6s\n", src);
// }

// strlcpy

// int main()
// {
// 	char dst[5] = "salut";
// 	char ddst[5] = "salut";
// 	size_t dstsize = 5;
// 	char *src;

// 	src = "abc";
// 	assert(strlcpy(dst, src, dstsize) == ft_strlcpy(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, dstsize));

// 	src = "abcdefgh";
// 	assert(strlcpy(dst, src, dstsize) == ft_strlcpy(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, dstsize));

// 	dstsize = 3;
// 	src = "ab";
// 	assert(strlcpy(dst, src, dstsize) == ft_strlcpy(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, dstsize));

// 	src = "abcd";
// 	assert(strlcpy(dst, src, dstsize) == ft_strlcpy(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, dstsize));

// 	src = "abcdefg";
// 	assert(strlcpy(dst, src, dstsize) == ft_strlcpy(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, dstsize));

// 	dstsize = 0;
// 	src = "abc";
// 	assert(strlcpy(dst, src, dstsize) == ft_strlcpy(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, dstsize));

// 	dstsize = 7;
// 	assert(strlcpy(dst, src, dstsize) == ft_strlcpy(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, 5));

// 	src = "";
// 	dstsize = 5;
// 	assert(strlcpy(dst, src, dstsize) == ft_strlcpy(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, dstsize));

// 	// erreur :
// 	dstsize = 5;
// 	// strlcpy(dst, NULL, dstsize);
// 	// ft_strlcpy(dst, NULL, dstsize);

// 	// erreur :
// 	// strlcpy(NULL, NULL, 0);
// 	// ft_strlcpy(NULL, NULL, 0);

// 	dstsize = 0;
// 	src = "abc";
// 	assert(strlcpy(NULL, src, dstsize) == ft_strlcpy(NULL, src, dstsize));
// }

// strlcat

// int main()

// {
// 	char dst[10] = "ab";
// 	char ddst[10] = "ab";
// 	size_t dstsize = 6;
// 	char *src = "ab";

// 	assert(strlcat(dst, src, dstsize) == ft_strlcat(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, 10));
// }

// {
// 	char dst[10] = "ab";
// 	char ddst[10] = "ab";
// 	size_t dstsize = 5;
// 	char *src = "abcd";

// 	assert(strlcat(dst, src, dstsize) == ft_strlcat(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, 10));
// }

// {
// 	char dst[10] = "a";
// 	char ddst[10] = "a";
// 	size_t dstsize = 3;
// 	char *src = "abcd";

// 	assert(strlcat(dst, src, dstsize) == ft_strlcat(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, 10));
// }

// {
// 	char dst[4] = "abcd";
// 	char ddst[4] = "abcd";
// 	size_t dstsize = 4;
// 	char *src = "abc";
// 	assert(strlcat(dst, src, dstsize) == ft_strlcat(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, 4));
// }

// {
// 	char *dst = NULL;
// 	char *ddst = NULL;
// 	size_t dstsize = 0;
// 	char *src = "abc";
// 	assert(strlcat(dst, src, dstsize) == ft_strlcat(ddst, src, dstsize));
// }

// {
// 	char dst[8] = "abcd";
// 	char ddst[8] = "abcd";
// 	size_t dstsize = 8;
// 	char *src = "";
// 	assert(strlcat(dst, src, dstsize) == ft_strlcat(ddst, src, dstsize));
// 	assert(!memcmp(dst, ddst, dstsize));
// }

// erreur :
// {
// 	char dst[8] = "abcd";
// 	size_t dstsize = 8;

// 	strlcat(dst, NULL, dstsize);
// 	// ft_strlcat(dst, NULL, dstsize);
// }

// toupper et tolower

// int main()
// {
// 	for (int c = -1; c <= 255; c++)
// 	{
// 		assert(toupper(c) == ft_toupper(c));
// 		assert(tolower(c) == ft_tolower(c));
// 	}
// }

// strchr et strrchr

// int main()

// {
// 	char *s = "salut sully";
// 	int c = 's';
// 	assert(strchr(s, c) == ft_strchr(s, c));
// 	assert(strrchr(s, c) == ft_strrchr(s, c));
// 	c = 'l';
// 	assert(strchr(s, c) == ft_strchr(s, c));
// 	assert(strrchr(s, c) == ft_strrchr(s, c));
// }

// {
// 	char *s = "salut";
// 	int c = '\0';
// 	assert(strchr(s, c) == ft_strchr(s, c));
// 	assert(strrchr(s, c) == ft_strrchr(s, c));
// 	c = 'z';
// 	assert(strchr(s, c) == ft_strchr(s, c));
// 	assert(strrchr(s, c) == ft_strrchr(s, c));
// }

// {
// 	char *s = "";
// 	int c = 'a';
// 	assert(strchr(s, c) == ft_strchr(s, c));
// 	assert(strrchr(s, c) == ft_strrchr(s, c));
// 	c = '\0';
// 	assert(strchr(s, c) == ft_strchr(s, c));
// 	assert(strrchr(s, c) == ft_strrchr(s, c));
// }

// erreurs :
// {
// 	// (void)strchr(NULL, 'a');
// 	// (void)ft_strchr(NULL, 'a');
// 	// (void)strrchr(NULL, 'a');
// 	// (void)ft_strrchr(NULL, 'a');
// }

// strncmp

// int main()
// {
// 	// const char s1[10] = "salut";
// 	// const char s2[10] = "salut";
// 	// size_t n = 10;
// 	// assert((ft_strncmp(s1, s2, n) > 0) == (strncmp(s1, s2, n) > 0));
// 	// assert((ft_strncmp(s1, s2, n) == 0) == (strncmp(s1, s2, n) == 0));

// 	// const char s1[10] = "salut";
// 	// const char s2[10] = "s";
// 	// size_t n = 10;
// 	// assert((ft_strncmp(s1, s2, n) > 0) == (strncmp(s1, s2, n) > 0));
// 	// assert((ft_strncmp(s1, s2, n) == 0) == (strncmp(s1, s2, n) == 0));

// 	// const char s1[10] = "s";
// 	// const char s2[10] = "salut";
// 	// size_t n = 10;
// 	// assert((ft_strncmp(s1, s2, n) > 0) == (strncmp(s1, s2, n) > 0));
// 	// assert((ft_strncmp(s1, s2, n) == 0) == (strncmp(s1, s2, n) == 0));

// 	// const char s1[10] = "abc";
// 	// const char s2[10] = "fgh";
// 	// size_t n = 0;
// 	// assert((ft_strncmp(s1, s2, n) > 0) == (strncmp(s1, s2, n) > 0));
// 	// assert((ft_strncmp(s1, s2, n) == 0) == (strncmp(s1, s2, n) == 0));

// 	// const char s1[10] = "";
// 	// const char s2[10] = "";
// 	// size_t n = 10;
// 	// assert((ft_strncmp(s1, s2, n) > 0) == (strncmp(s1, s2, n) > 0));
// 	// assert((ft_strncmp(s1, s2, n) == 0) == (strncmp(s1, s2, n) == 0));

// 	// const char s1[10] = "abc";
// 	// const char s2[10] = "";
// 	// size_t n = 10;
// 	// assert((ft_strncmp(s1, s2, n) > 0) == (strncmp(s1, s2, n) > 0));
// 	// assert((ft_strncmp(s1, s2, n) == 0) == (strncmp(s1, s2, n) == 0));

// 	// const char s1[10] = "";
// 	// const char s2[10] = "abc";
// 	// size_t n = 10;
// 	// assert((ft_strncmp(s1, s2, n) > 0) == (strncmp(s1, s2, n) > 0));
// 	// assert((ft_strncmp(s1, s2, n) == 0) == (strncmp(s1, s2, n) == 0));

// 	// const char *s1 = NULL;
// 	// const char s2[10] = "abc";
// 	// size_t n = 0;
// 	// assert((ft_strncmp(s1, s2, n) > 0) == (strncmp(s1, s2, n) > 0));
// 	// assert((ft_strncmp(s1, s2, n) == 0) == (strncmp(s1, s2, n) == 0));

// 	// const char s1[10] = "salut";
// 	// const char s2[10] = "salxx";
// 	// for (size_t n = 0; n < 8; n++)
// 	// {
// 	// 	assert((ft_strncmp(s1, s2, n) > 0) == (strncmp(s1, s2, n) > 0));
// 	// 	assert((ft_strncmp(s1, s2, n) == 0) == (strncmp(s1, s2, n) == 0));
// 	// }

// 	// erreur :
// 	// const char *s1 = NULL;
// 	// const char s2[10] = "abc";
// 	// size_t n = 2;
// 	// printf("%d\n", ft_strncmp(s1, s2, n));
// 	// printf("%d\n", strncmp(s1, s2, n));
// }

// memchr

// int main()
// {
// 	const char *s = "salut";
// 	int c;
// 	size_t n;

// 	// c = 's';
// 	// n = 6;
// 	// assert(ft_memchr(s, c, n) == memchr(s, c, n));

// 	// c = 'l';
// 	// n = 6;
// 	// assert(ft_memchr(s, c, n) == memchr(s, c, n));

// 	// c = 's';
// 	// n = 0;
// 	// assert(ft_memchr(s, c, n) == memchr(s, c, n));

// 	// c = 's';
// 	// n = 1;
// 	// assert(ft_memchr(s, c, n) == memchr(s, c, n));

// 	// c = 'z';
// 	// n = 3;
// 	// assert(ft_memchr(s, c, n) == memchr(s, c, n));

// 	// c = 'u';
// 	// n = 3;
// 	// assert(ft_memchr(s, c, n) == memchr(s, c, n));

// 	// c = 'u';
// 	// n = 4;
// 	// assert(ft_memchr(s, c, n) == memchr(s, c, n));
// }

// memcmp

// int main()
// {
// 	// const char *s1 = "salut";
// 	// const char *s2 = "salut";
// 	// size_t n = 4;
// 	// assert ((memcmp(s1, s2, n) > 0) == (ft_memcmp(s1, s2, n) > 0));
// 	// assert ((memcmp(s1, s2, n) == 0) == (ft_memcmp(s1, s2, n) == 0));

// 	// const char *s1 = "salut";
// 	// const char *s2 = "sxxxx";
// 	// size_t n = 3;
// 	// assert ((memcmp(s1, s2, n) > 0) == (ft_memcmp(s1, s2, n) > 0));
// 	// assert ((memcmp(s1, s2, n) == 0) == (ft_memcmp(s1, s2, n) == 0));

// 	// const char *s1 = "sxxxx";
// 	// const char *s2 = "salut";
// 	// size_t n = 3;
// 	// assert ((memcmp(s1, s2, n) > 0) == (ft_memcmp(s1, s2, n) > 0));
// 	// assert ((memcmp(s1, s2, n) == 0) == (ft_memcmp(s1, s2, n) == 0));

// 	// const char *s1 = "abc";
// 	// const char *s2 = "fgh";
// 	// size_t n = 0;
// 	// assert ((memcmp(s1, s2, n) > 0) == (ft_memcmp(s1, s2, n) > 0));
// 	// assert ((memcmp(s1, s2, n) == 0) == (ft_memcmp(s1, s2, n) == 0));

// 	// const char *s1 = "abc";
// 	// const char *s2 = "fgh";
// 	// size_t n = 1;
// 	// assert ((memcmp(s1, s2, n) > 0) == (ft_memcmp(s1, s2, n) > 0));
// 	// assert ((memcmp(s1, s2, n) == 0) == (ft_memcmp(s1, s2, n) == 0));

// 	// const char *s1 = "salut";
// 	// const char *s2 = "salxx";
// 	// size_t n = 3;
// 	// assert ((memcmp(s1, s2, n) > 0) == (ft_memcmp(s1, s2, n) > 0));
// 	// assert ((memcmp(s1, s2, n) == 0) == (ft_memcmp(s1, s2, n) == 0));

// 	// const char *s1 = "salut";
// 	// const char *s2 = "salxx";
// 	// size_t n = 4;
// 	// assert ((memcmp(s1, s2, n) > 0) == (ft_memcmp(s1, s2, n) > 0));
// 	// assert ((memcmp(s1, s2, n) == 0) == (ft_memcmp(s1, s2, n) == 0));
// }

// strnstr

// int main()
// {
// 	const char *big1 = "salut tout le monde";
// 	const char *little1 = "lut";
// 	size_t len1 = 10;
// 	assert(strnstr(big1, little1, len1) == ft_strnstr(big1, little1, len1));

// 	const char *big2 = "salut tout le monde";
// 	const char *little2 = "bonjour";
// 	size_t len2 = 10;
// 	assert(strnstr(big2, little2, len2) == ft_strnstr(big2, little2, len2));

// 	const char *big3 = "salut";
// 	const char *little3 = "";
// 	size_t len3 = 10;
// 	assert(strnstr(big3, little3, len3) == ft_strnstr(big3, little3, len3));

// 	const char *big4 = "salut";
// 	const char *little4 = "";
// 	size_t len4 = 0;
// 	assert(strnstr(big4, little4, len4) == ft_strnstr(big4, little4, len4));

// 	const char *big5 = "salut";
// 	const char *little5 = "";
// 	size_t len5 = 3;
// 	assert(strnstr(big5, little5, len5) == ft_strnstr(big5, little5, len5));

// 	const char *big6 = "salut";
// 	const char *little6 = "al";
// 	size_t len6 = 0;
// 	assert(strnstr(big6, little6, len6) == ft_strnstr(big6, little6, len6));

// 	const char *big7 = "salut";
// 	const char *little7 = "al";
// 	size_t len7 = 1;
// 	assert(strnstr(big7, little7, len7) == ft_strnstr(big7, little7, len7));

// 	const char *big8 = "salut";
// 	const char *little8 = "al";
// 	size_t len8 = 2;
// 	assert(strnstr(big8, little8, len8) == ft_strnstr(big8, little8, len8));

// 	const char *big9 = "salut";
// 	const char *little9 = "al";
// 	size_t len9 = 3;
// 	assert(strnstr(big9, little9, len9) == ft_strnstr(big9, little9, len9));

// 	const char *big10 = "salut";
// 	const char *little10 = "al";
// 	size_t len10 = 10;
// 	assert(strnstr(big10, little10, len10) == ft_strnstr(big10, little10, len10));

// 	const char *big11 = "salut";
// 	const char *little11 = "ut";
// 	size_t len11 = 10;
// 	assert(strnstr(big11, little11, len11) == ft_strnstr(big11, little11, len11));

// 	const char *big12 = "salut";
// 	const char *little12 = "ut";
// 	size_t len12 = 4;
// 	assert(strnstr(big12, little12, len12) == ft_strnstr(big12, little12, len12));

// 	const char *big13 = "salut";
// 	const char *little13 = "ut";
// 	size_t len13 = 5;
// 	assert(strnstr(big13, little13, len13) == ft_strnstr(big13, little13, len13));

// 	const char *big14 = "salut";
// 	const char *little14 = "ut";
// 	size_t len14 = 6;
// 	assert(strnstr(big14, little14, len14) == ft_strnstr(big14, little14, len14));

// 	const char *big15 = "salut";
// 	const char *little15 = "lut tout le monde";
// 	size_t len15 = 10;
// 	assert(strnstr(big15, little15, len15) == ft_strnstr(big15, little15, len15));
// }

// atoi

// int main()
// {
// 	char *str;
// 	str = "salut";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = "352";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = "-352";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = "0";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = " 0";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = " \t453";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = "34sdflkj";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = "+34sdflkj";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = "   +34sdflkj   ";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = " a-34";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = "\v\f\t\n\r -34erz";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = " - 34 ";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = " ++34 ";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = "a34";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = " -2147483648 ";
// 	assert(ft_atoi(str) == atoi(str));
// 	str = " 2147483647 ";
// 	assert(ft_atoi(str) == atoi(str));
// }

// calloc

// int main()
// {
// 	size_t count;
// 	size_t size;

// 	count = 5;
// 	size = 5;
// 	void *result1 = ft_calloc(count, size);
// 	void *rresult1 = calloc(count, size);
// 	if (result1 == NULL)
// 	printf("result1 null\n");
// 	if (rresult1 == NULL)
// 		printf("rresult1 null\n");
// 	assert(!memcmp(result1, rresult1, count));
// 	free(result1);
// 	free(rresult1);

// 	count = 0;
// 	size = 5;
// 	void *result2 = ft_calloc(count, size);
// 	void *rresult2 = calloc(count, size);
// 	if (result2 == NULL)
// 	printf("result2 null\n");
// 	if (rresult2 == NULL)
// 		printf("rresult2 null\n");
// 	free(result2);
// 	free(rresult2);

// 	count = 5;
// 	size = 0;
// 	void *result3 = ft_calloc(count, size);
// 	void *rresult3 = calloc(count, size);
// 	if (result3 == NULL)
// 	printf("result3 null\n");
// 	if (rresult3 == NULL)
// 		printf("rresult3 null\n");
// 	free(result3);
// 	free(rresult3);

// 	count = 0;
// 	size = 0;
// 	void *result4 = ft_calloc(count, size);
// 	void *rresult4 = calloc(count, size);
// 	if (result4 == NULL)
// 	printf("result4 null\n");
// 	if (rresult4 == NULL)
// 		printf("rresult4 null\n");
// 	free(result4);
// 	free(rresult4);

// 	// erreur :
// 	count = 4555666777;
// 	size = 4555666777;
// 	void *result5 = ft_calloc(count, size);
// 	// void *rresult5 = calloc(count, size);
// 	if (result5 == NULL)
// 		printf("result5 null\n");
// 	// if (rresult5 == NULL)
// 	// 	printf("rresult5 null\n");
// }

// strdup

// int main()
// {
// 	char *str;

// 	str = "test";
// 	char *result1 = ft_strdup(str);
// 	char *rresult1 = strdup(str);
// 	assert(!strcmp(result1, rresult1));
// 	free(result1);
// 	free(rresult1);

// 	str = "";
// 	char *result2 = ft_strdup(str);
// 	char *rresult2 = strdup(str);
// 	assert(!strcmp(result2, rresult2));
// 	free(result2);
// 	free(rresult2);

// 	// erreur :
// 	str = NULL;
// 	// char *result3 = ft_strdup(str);
// 	// free(result3);
// 	// char *rresult3 = strdup(str);
// 	// free(rresult3);
// }

// substr

// int main()
// {
// 	const char *s1 = "salut";
// 	unsigned int start;
// 	size_t len;
// 	char *result;

// 	start = 0;
// 	len = 10;
// 	result = ft_substr(s1, start, len);
// 	assert(!memcmp(result, "salut", 6));
// 	free(result);

// 	start = 0;
// 	len = 3;
// 	result = ft_substr(s1, start, len);
// 	assert(!memcmp(result, "sal", 4));
// 	free(result);

// 	start = 2;
// 	len = 10;
// 	result = ft_substr(s1, start, len);
// 	assert(!memcmp(result, "lut", 4));
// 	free(result);

// 	start = 2;
// 	len = 2;
// 	result = ft_substr(s1, start, len);
// 	assert(!memcmp(result, "lu", 3));
// 	free(result);

// 	start = 1;
// 	len = 1;
// 	result = ft_substr(s1, start, len);
// 	assert(!memcmp(result, "a", 2));
// 	free(result);

// 	start = 1;
// 	len = 0;
// 	result = ft_substr(s1, start, len);
// 	assert(!memcmp(result, "", 1));
// 	free(result);

// 	start = 5;
// 	len = 5;
// 	result = ft_substr(s1, start, len);
// 	assert(!memcmp(result, "", 1));
// 	free(result);

// 	start = 6;
// 	len = 5;
// 	result = ft_substr(s1, start, len);
// 	assert(!memcmp(result, "", 1));
// 	free(result);

// 	start = 6;
// 	len = 0;
// 	result = ft_substr(s1, start, len);
// 	assert(!memcmp(result, "", 1));
// 	free(result);

// 	const char *s2 = "";

// 	start = 0;
// 	len = 4;
// 	result = ft_substr(s2, start, len);
// 	assert(!memcmp(result, "", 1));
// 	free(result);

// 	start = 1;
// 	len = 4;
// 	result = ft_substr(s2, start, len);
// 	assert(!memcmp(result, "", 1));
// 	free(result);

// 	start = 0;
// 	len = 0;
// 	result = ft_substr(s2, start, len);
// 	assert(!memcmp(result, "", 1));
// 	free(result);

// 	const char *s3 = NULL;

// 	start = 0;
// 	len = 4;
// 	result = ft_substr(s3, start, len);
// 	assert(result == NULL);

// 	start = 1;
// 	len = 1;
// 	result = ft_substr(s3, start, len);
// 	assert(result == NULL);

// 	start = 0;
// 	len = 0;
// 	result = ft_substr(s3, start, len);
// 	assert(result == NULL);
// }

// strjoin

// int main()
// {
// 	const char *s11 = "a";
// 	const char *s21 = "b";
// 	char *result1 = ft_strjoin(s11, s21);
// 	assert(!memcmp(result1, "ab", 3));
// 	free(result1);

// 	const char *s12 = "ab";
// 	const char *s22 = "b";
// 	char *result2 = ft_strjoin(s12, s22);
// 	assert(!memcmp(result2, "abb", 4));
// 	free(result2);

// 	const char *s13 = "a";
// 	const char *s23 = "bb";
// 	char *result3 = ft_strjoin(s13, s23);
// 	assert(!memcmp(result3, "abb", 4));
// 	free(result3);

// 	const char *s14 = "ab";
// 	const char *s24 = "";
// 	char *result4 = ft_strjoin(s14, s24);
// 	assert(!memcmp(result4, "ab", 3));
// 	free(result4);

// 	const char *s15 = "";
// 	const char *s25 = "ab";
// 	char *result5 = ft_strjoin(s15, s25);
// 	assert(!memcmp(result5, "ab", 3));
// 	free(result5);

// 	const char *s16 = "";
// 	const char *s26 = "";
// 	char *result6 = ft_strjoin(s16, s26);
// 	assert(!memcmp(result6, "", 1));
// 	free(result6);

// 	const char *s17 = NULL;
// 	const char *s27 = NULL;
// 	char *result7 = ft_strjoin(s17, s27);
// 	assert(result7 == NULL);

// 	const char *s18 = NULL;
// 	const char *s28 = "a";
// 	char *result8 = ft_strjoin(s18, s28);
// 	assert(result8 == NULL);

// 	const char *s19 = "a";
// 	const char *s29 = NULL;
// 	char *result9 = ft_strjoin(s19, s29);
// 	assert(result9 == NULL);
// }

// strtrim

// int main()
// {
// 	char const *s11 = "salut";
// 	char const *set1 = " ";
// 	char *result1 = ft_strtrim(s11, set1);
// 	assert(!memcmp(result1, "salut", 6));
// 	free(result1);

// 	char const *s12 = "salut";
// 	char const *set2 = "";
// 	char *result2 = ft_strtrim(s12, set2);
// 	assert(!memcmp(result2, "salut", 6));
// 	free(result2);

// 	char const *s13 = "salut";
// 	char const *set3 = NULL;
// 	char *result3 = ft_strtrim(s13, set3);
// 	assert(!memcmp(result3, "salut", 6));
// 	free(result3);

// 	char const *s14 = "";
// 	char const *set4 = "";
// 	char *result4 = ft_strtrim(s14, set4);
// 	assert(!memcmp(result4, "", 1));
// 	free(result4);

// 	char const *s15 = "salut";
// 	char const *set5 = "a";
// 	char *result5 = ft_strtrim(s15, set5);
// 	assert(!memcmp(result5, "salut", 6));
// 	free(result5);

// 	char const *s16 = "salut";
// 	char const *set6 = "s";
// 	char *result6 = ft_strtrim(s16, set6);
// 	assert(!memcmp(result6, "alut", 5));
// 	free(result6);

// 	char const *s17 = "saluaat";
// 	char const *set7 = "saut";
// 	char *result7 = ft_strtrim(s17, set7);
// 	assert(!memcmp(result7, "l", 2));
// 	free(result7);

// 	char const *s18 = "salut";
// 	char const *set8 = "sluta";
// 	char *result8 = ft_strtrim(s18, set8);
// 	assert(!memcmp(result8, "", 1));
// 	free(result8);

// 	char const *s19 = "saluts";
// 	char const *set9 = "st";
// 	char *result9 = ft_strtrim(s19, set9);
// 	assert(!memcmp(result9, "alu", 4));
// 	free(result9);

// 	char const *s110 = "   salut salut  ";
// 	char const *set10 = " ";
// 	char *result10 = ft_strtrim(s110, set10);
// 	assert(!memcmp(result10, "salut salut", 12));
// 	free(result10);

// 	char const *s111 = "   salut  salut  ";
// 	char const *set11 = "a ";
// 	char *result11 = ft_strtrim(s111, set11);
// 	assert(!memcmp(result11, "salut  salut", 13));
// 	free(result11);

// 	char const *s112 = "\t  salut\t salut  \t ";
// 	char const *set12 = " \t";
// 	char *result12 = ft_strtrim(s112, set12);
// 	assert(!memcmp(result12, "salut\t salut", 13));
// 	free(result12);

// 	char const *s113 = "\t  salut le monde  \t ";
// 	char const *set13 = " \t";
// 	char *result13 = ft_strtrim(s113, set13);
// 	assert(!memcmp(result13, "salut le monde", 15));
// 	free(result13);

// 	char const *s114 = NULL;
// 	char const *set14 = "";
// 	char *result14 = ft_strtrim(s114, set14);
// 	assert(result14 == NULL);

// 	char const *s115 = NULL;
// 	char const *set15 = "a";
// 	char *result15 = ft_strtrim(s115, set15);
// 	assert(result15 == NULL);

// 	char const *s116 = NULL;
// 	char const *set16 = NULL;
// 	char *result16 = ft_strtrim(s116, set16);
// 	assert(result16 == NULL);
// }

// split

// int main()
// {
// 	// // ["bonjour", "tout", "le", "monde", NULL]
// 	// char const *s = "bonjour tout le monde";
// 	// char c = ' ';
// 	// char **result = ft_split(s, c);
// 	// int i = 0;
// 	// while (result[i])
// 	// 	printf("<%s>\n", result[i++]);
// 	// printf("<%s>\n", result[i++]);

// 	// // ["salut", NULL]
// 	// char const *s = "salut";
// 	// char c = ' ';
// 	// char **result = ft_split(s, c);
// 	// int i = 0;
// 	// while (result[i])
// 	// 	printf("<%s>\n", result[i++]);
// 	// printf("<%s>\n", result[i++]);

// 	// // ["salut", NULL]
// 	// char const *s = "  salut  ";
// 	// char c = ' ';
// 	// char **result = ft_split(s, c);
// 	// int i = 0;
// 	// while (result[i])
// 	// 	printf("<%s>\n", result[i++]);
// 	// printf("<%s>\n", result[i++]);

// 	// // ["et", "salut", NULL]
// 	// char const *s = " et  salut ";
// 	// char c = ' ';
// 	// char **result = ft_split(s, c);
// 	// int i = 0;
// 	// while (result[i])
// 	// 	printf("<%s>\n", result[i++]);
// 	// printf("<%s>\n", result[i++]);

// 	// // ["salut toi", NULL]
// 	// char const *s = "salut toi";
// 	// char c = '\0';
// 	// char **result = ft_split(s, c);
// 	// int i = 0;
// 	// while (result[i])
// 	// 	printf("<%s>\n", result[i++]);
// 	// printf("<%s>\n", result[i++]);

// 	// // [NULL]
// 	// char const *s = "";
// 	// char c = '\0';
// 	// char **result = ft_split(s, c);
// 	// int i = 0;
// 	// while (result[i])
// 	// 	printf("<%s>\n", result[i++]);
// 	// printf("<%s>\n", result[i++]);

// 	// // [NULL]
// 	// char const *s = "";
// 	// char c = ' ';
// 	// char **result = ft_split(s, c);
// 	// int i = 0;
// 	// while (result[i])
// 	// 	printf("<%s>\n", result[i++]);
// 	// printf("<%s>\n", result[i++]);

// 	// // [NULL]
// 	// char const *s = "      ";
// 	// char c = ' ';
// 	// char **result = ft_split(s, c);
// 	// int i = 0;
// 	// while (result[i])
// 	// 	printf("<%s>\n", result[i++]);
// 	// printf("<%s>\n", result[i++]);

// 	// // NULL
// 	// char const *s = NULL;
// 	// char c = ' ';
// 	// char **result = ft_split(s, c);
// 	// printf("<%s>\n", (char *)result);
// }

// itoa

// int main()
// {
// 	char *result;
// 	int n;
// 	char *expected;

// 	n = 5;
// 	expected = "5";
// 	result = ft_itoa(n);
// 	assert(!strcmp(result, expected));
// 	free(result);

// 	n = 6543;
// 	expected = "6543";
// 	result = ft_itoa(n);
// 	assert(!strcmp(result, expected));
// 	free(result);

// 	n = 0;
// 	expected = "0";
// 	result = ft_itoa(n);
// 	assert(!strcmp(result, expected));
// 	free(result);

// 	n = -8;
// 	expected = "-8";
// 	result = ft_itoa(n);
// 	assert(!strcmp(result, expected));
// 	free(result);

// 	n = -6873;
// 	expected = "-6873";
// 	result = ft_itoa(n);
// 	assert(!strcmp(result, expected));
// 	free(result);

// 	n = INT_MAX;
// 	expected = "2147483647";
// 	result = ft_itoa(n);
// 	assert(!strcmp(result, expected));
// 	free(result);

// 	n = INT_MIN;
// 	expected = "-2147483648";
// 	result = ft_itoa(n);
// 	assert(!strcmp(result, expected));
// 	free(result);
// }

// strmapi

// augmente c de i (en restant imprimable)
// aide :
// (32 -> 126) - 32 = (0 -> 94)
// (126 - 32) % 95 = 94 % 95 = 94
// (127 - 32) % 95 = 95 % 95 = 0
// char f(unsigned int i, char c)
// {
// 	unsigned int j;

// 	j = c + i;
// 	j -= 32;
// 	j %= 95;
// 	j += 32;
// 	return j;
// }

// int main()
// {
// 	char *result;

// 	const char *s = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
// 	result = ft_strmapi(s, f);
// 	printf("<%s>\n", result);
// 	free(result);
// }

// striteri

// remplace c par c augmenté de i (en restant imprimable)
// aide :
// (32 -> 126) - 32 = (0 -> 94)
// (126 - 32) % 95 = 94 % 95 = 94
// (127 - 32) % 95 = 95 % 95 = 0
// void f(unsigned int i, char *c)
// {
// 	unsigned int j;

// 	j = *c + i;
// 	j -= 32;
// 	j %= 95;
// 	j += 32;
// 	*c = j;
// }

// int main()
// {
// 	char s[] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
// 	ft_striteri(s, f);
// 	printf("<%s>\n", s);
// }

// putchar_fd

// int main()
// {
// 	ft_putchar_fd('a', 1);
// }

// putstr_fd

// int main()
// {
// 	ft_putstr_fd("salut", 1);
// }

// putendl_fd

// int main()
// {
// 	ft_putendl_fd("salut", 1);
// }

// putnbr_fd

// int main()
// {
// 	int n;
// 	char *s;

// 	n = INT_MAX;
// 	s = "int max : ";
// 	write(1, s, ft_strlen(s));
// 	ft_putnbr_fd(n, 1);
// 	write(1, "\n", 1);

// 	n = INT_MIN;
// 	s = "int min : ";
// 	write(1, s, ft_strlen(s));
// 	ft_putnbr_fd(n, 1);
// 	write(1, "\n", 1);

// 	n = 0;
// 	s = "0 : ";
// 	write(1, s, ft_strlen(s));
// 	ft_putnbr_fd(n, 1);
// 	write(1, "\n", 1);

// 	n = -5;
// 	s = "-5 : ";
// 	write(1, s, ft_strlen(s));
// 	ft_putnbr_fd(n, 1);
// 	write(1, "\n", 1);

// 	n = 8;
// 	s = "8 : ";
// 	write(1, s, ft_strlen(s));
// 	ft_putnbr_fd(n, 1);
// 	write(1, "\n", 1);

// 	n = 345;
// 	s = "345 : ";
// 	write(1, s, ft_strlen(s));
// 	ft_putnbr_fd(n, 1);
// 	write(1, "\n", 1);

// 	n = -345;
// 	s = "-345 : ";
// 	write(1, s, ft_strlen(s));
// 	ft_putnbr_fd(n, 1);
// 	write(1, "\n", 1);
// }

// lstnew

// int main()
// {
// 	char *s = "salut";

// 	t_list *elem = ft_lstnew(s);
// 	printf("<%s>\n", (char *)elem->content);
// 	t_list *elem2 = elem->next;
// 	printf("<%s>\n", (char *)elem2);
// 	free(elem);
// }

// elem null
// int main()
// {
// 	t_list *elem = ft_lstnew(NULL);
// 	printf("<%s>\n", (char *)elem->content);
// 	t_list *elem2 = elem->next;
// 	printf("<%s>\n", (char *)elem2);
// 	free(elem);
// }

// lstadd_front

// base
// int main()
// {
// 	char *s1 = "salut";
// 	char *s2 = "toi";

// 	t_list *list = ft_lstnew(s1);
// 	t_list *elem2 = ft_lstnew(s2);

// 	ft_lstadd_front(&list, elem2);

// 	t_list *elem = list;
// 	while (elem)
// 	{
// 		printf("<%s>\n", (char *)elem->content);
// 		elem = elem->next;
// 	}
// 	printf("<%s>\n", (char *)elem);

// 	free(list->next);
// 	free(list);
// }

// sur une liste vide
// int main()
// {
// 	char *s = "salut";

// 	t_list *list = NULL;
// 	t_list *elem1 = ft_lstnew(s);

// 	ft_lstadd_front(&list, elem1);

// 	t_list *elem = list;
// 	while (elem)
// 	{
// 		printf("<%s>\n", (char *)elem->content);
// 		elem = elem->next;
// 	}
// 	printf("<%s>\n", (char *)elem);

// 	free(list);
// }

// paramètre null
// int main()
// {
// 	t_list *elem = ft_lstnew("salut");

// 	ft_lstadd_front(NULL, elem);
// 	free(elem);
// }

// element null
// int main()
// {
// 	t_list *list = ft_lstnew("salut");
// 	ft_lstadd_front(&list, NULL);
//  	free(list);
// }

// parametre et element null
// int main()
// {
// 	ft_lstadd_front(NULL, NULL);
// }

// lstsize

// expected : 2
// int main()
// {
// 	t_list *list = ft_lstnew("salut");
// 	ft_lstadd_front(&list, ft_lstnew("toi"));
// 	printf("size : %d\n", ft_lstsize(list));
// 	free(list->next);
// 	free(list);
// }

// expected : 1
// int main()
// {
// 	t_list *list = ft_lstnew("salut");
// 	printf("size : %d\n", ft_lstsize(list));
// 	free(list);
// }

// expected : 0
// int main()
// {
// 	printf("size : %d\n", ft_lstsize(NULL));
// }

// lstlast

// 2 éléments
// int main()
// {
// 	t_list *list = ft_lstnew("salut");
// 	ft_lstadd_front(&list, ft_lstnew("toi"));
// 	printf("dernier : %s\n", (char *)ft_lstlast(list)->content);
// 	free(list->next);
// 	free(list);
// }

// 1 element
// int main()
// {
// 	t_list *list = ft_lstnew("salut");
// 	printf("dernier : %s\n", (char *)ft_lstlast(list)->content);
// 	free(list);
// }

// liste vide
// int main()
// {
// 	printf("result : %s\n", (char *)ft_lstlast(NULL));
// }

// lstadd_back

// int main()
// {
// 	t_list *list = ft_lstnew("salut");
// 	ft_lstadd_back(&list, ft_lstnew("toi"));

// 	t_list *elem = list;
// 	while (elem)
// 	{
// 		printf("<%s>\n", (char *)elem->content);
// 		elem = elem->next;
// 	}
// 	printf("<%s>\n", (char *)elem);

// 	free(list->next);
// 	free(list);
// }

// sur une liste vide
// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew("salut"));

// 	printf("<%s>\n", (char *)list->content);
// 	printf("<%s>\n", (char *)list->next);

// 	free(list);
// }

// NULL sur une liste vide
// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, NULL);

// 	printf("<%s>\n", (char *)list);
// }

// premier param null
// int main()
// {
// 	t_list *elem = ft_lstnew("salut");
// 	ft_lstadd_back(NULL, elem);
// 	free(elem);
// }

// deuxième param null
// int main()
// {
// 	t_list *list = ft_lstnew("salut");
// 	ft_lstadd_back(&list, NULL);
// 	printf("<%s>\n", (char *)list->content);
// 	printf("<%s>\n", (char *)list->next);
// 	free(list);
// }

// params nulls
// int main()
// {
// 	ft_lstadd_back(NULL, NULL);
// }

// lstdelone

void del(void *p)
{
	free(p);
}

// int main()
// {
// 	t_list *elem = ft_lstnew(strdup("salut"));
// 	ft_lstdelone(elem, del);
// }

// premier param null
// int main()
// {
// 	ft_lstdelone(NULL, del);
// }

// deuxieme param null
// int main()
// {
// 	t_list *elem = ft_lstnew(strdup("salut"));
// 	ft_lstdelone(elem, NULL);
// 	ft_lstdelone(elem, del);
// }

// params null
// int main()
// {
// 	ft_lstdelone(NULL, NULL);
// }

// lstclear

// deux elements
// int main()
// {
// 	t_list *list = ft_lstnew(strdup("salut"));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("toi")));
// 	ft_lstclear(&list, del);
// 	assert(list == NULL);
// }

// un element
// int main()
// {
// 	t_list *elem = ft_lstnew(strdup("salut"));
// 	ft_lstclear(&elem, del);
// 	assert(elem == NULL);
// }

// liste vide
// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstclear(&list, del);
// 	assert(list == NULL);
// }

// premier param null
// int main()
// {
// 	ft_lstclear(NULL, del);
// }

// deuxieme param null
// int main()
// {
// 	t_list *list = ft_lstnew(strdup("salut"));
// 	ft_lstclear(NULL, del);
// 	ft_lstclear(&list, del);
// }

// params null
// int main()
// {
// 	ft_lstclear(NULL, NULL);
// }

// clear a partir du milieu dune liste
// int main()
// {
// 	t_list *list = ft_lstnew(strdup("a"));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("b")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("c")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("d")));

// 	ft_lstclear(&(list->next->next), del);

// 	t_list *elem = list;
// 	while (elem)
// 	{
// 		printf("<%s>\n", (char *)elem->content);
// 		elem = elem->next;
// 	}
// 	printf("<%s>\n", (char *)elem);

// 	ft_lstclear(&list, del);
// }

// lstiter

void ft_print(void *p)
{
	printf("<%s>\n", (char *)p);
}

// int main()
// {
// 	t_list *list = ft_lstnew(strdup("salut"));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("toi")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("bonjour")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("hello")));
// 	ft_lstiter(list, ft_print);
// 	ft_lstclear(&list, del);
// }

// liste vide
// int main()
// {
// 	ft_lstiter(NULL, ft_print);
// }

// deuxieme param null
// int main()
// {
// 	t_list *list = ft_lstnew(strdup("salut"));
// 	ft_lstiter(list, NULL);
// 	ft_lstclear(&list, del);
// }

// params nulls
// int main()
// {
// 	ft_lstiter(NULL, NULL);
// }

// lst_map

// renvoie une copie de p en majuscules
void *f(void *p)
{
	char *s = p;

	char *result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	int i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			result[i] = s[i] - 32;
		else
			result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew(strdup("SaLut !!")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("toi")));

// 	t_list *result = ft_lstmap(list, f, del);

// 	ft_lstiter(result, ft_print);
// 	ft_lstclear(&list, del);
// 	ft_lstclear(&result, del);
// }

// liste vide
// int main()
// {
// 	ft_lstmap(NULL, f, del);
// }

// fonction null
// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew(strdup("SaLut !!")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("toi")));

// 	t_list *result = ft_lstmap(list, NULL, del);
// 	assert(result == NULL);

// 	ft_lstclear(&list, del);
// }

// fonction de del null
// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew(strdup("SaLut !!")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("toi")));

// 	t_list *result = ft_lstmap(list, f, NULL);
// 	assert(result == NULL);

// 	ft_lstclear(&list, del);
// }
