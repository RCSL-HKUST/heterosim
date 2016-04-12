/* +++Date last modified: 05-Jul-1997 */

/*
**        A Pratt-Boyer-Moore string search, written by Jerry Coffin
**  sometime or other in 1991.  Removed from original program, and
**  (incorrectly) rewritten for separate, generic use in early 1992.
**  Corrected with help from Thad Smith, late March and early
**  April 1992...hopefully it's correct this time. Revised by Bob Stout.
**
**  This is hereby placed in the Public Domain by its author.
**
**  10/21/93 rdg  Fixed bug found by Jeff Dunlop
*/

//#include <stddef.h>
#include <string.h>
//#include <limits.h>
#define UCHAR_MAX 127*2

static size_t table[UCHAR_MAX + 1];
//static size_t len;
static char *findme;

/*
**  Call this with the string to locate to initialize the table
*/

void init_search(const char string[20], size_t len)
{
      size_t i;
      init_search_label0:for (i = 0; i <= UCHAR_MAX; i++)                      /* rdg 10/93 */
            table[i] = len;
      init_search_label1:for (i = 0; i < len; i++)
            table[(unsigned char)string[i]] = len - i - 1;
      findme = (char *)string;
}

/*
**  Call this with a buffer to search
*/

int stcmp ( char * s1, char * s2, size_t n)
{
  if ( !n )//n为无符号整形变量;如果n为0,则返回0
   return(0);
  //在接下来的while函数中
  //第一个循环条件：--n,如果比较到前n个字符则退出循环
  //第二个循环条件：*s1,如果s1指向的字符串末尾退出循环
  //第二个循环条件：*s1 == *s2,如果两字符比较不等则退出循环
  stcmp_label2:while (--n && *s1 && *s1 == *s2)
  {
     s1++;//S1指针自加1,指向下一个字符
     s2++;//S2指针自加1,指向下一个字符
  }
  return( *s1 - *s2 );//返回比较结果
}




char *strsearch(const char string[50],size_t limit,size_t len)
{
      register size_t shift;
      register size_t pos = len - 1;
      char *here;


      strsearch_label3:while (pos < limit)
      {
            strsearch_label4:while( pos < limit &&
                  (shift = table[(unsigned char)string[pos]]) > 0)
            {
                  pos += shift;
            }
            if (0 == shift)
            {
                  if (0 == stcmp(findme,
                        here = (char *)&string[pos-len+1], len))
                  {
                        return(here);
                  }
                  else  pos++;
            }
      }
      return NULL;
}

//int find(const char find_str[15], const char search_str[50],size_t limit,size_t len)
int find (char string[73], int m, int *ret, int n )
{      

      char *find_str = &string[0];
      char *search_str = &string[15];
      size_t *limit = &string[65];
      size_t *len = &string[69];
      char *here;
      init_search(find_str,*len);
      here = strsearch(search_str,*limit,*len);
      *ret = here?1:0;
      return m+n;
}

#include <stdio.h>



 char *find_strings[] = {"abb",  "you", "not", "it", "dad", "yoo", "hoo",
                              "oo", "oh", "xx", "xx", "x", "x", "field", "new", "row",
			      "regime", "boom", "that", "impact", "and", "zoom", "texture",
			      "magnet", "doom", "loom", "freq", "current", "phase",
			      "images", 
			      "appears", "phase", "conductor", "wavez", 
			      "normal", "free", "termed",
			      "provide", "for", "and", "struct", "about", "have",
			      "proper",
			      "involve",
			      "describedly",
			      "thats",
			      "spaces",
			      "circumstance",
			      "the",
			      "member",
			      "such",
			      "guide",
			      "regard",
			      "officers",
			      "implement",
			      "principalities",			      
			      NULL};
      char *search_strings[] = {"cabbie", "your", "It isn't here",
                                "But it is here", "hodad", "yoohoo", "yoohoo",
                                "yoohoo", "yoohoo", "yoohoo", "xx", "x", ".", 
				"In recent years, the field of photonic ",
				"crystals has found new",
				"applications in the RF and microwave",
				"regime. A new type of metallic",
				"electromagnetic crystal has been", 
				"developed that is having a",
				"significant impact on the field of", 
				"antennas. It consists of a",
				"conductive surface, covered with a",
				"special texture which alters its",
				"electromagnetic properties. Made of solid",
				"metal, the structure",
				"conducts DC currents, but over a",
				"particular frequency range it does",
				"not conduct AC currents. It does not",
				"reverse the phase of reflected",
				"waves, and the effective image currents",

				"appear in-phase, rather than",
				"out-of-phase as they are on normal",
				"conductors. Furthermore, surface",
				"waves do not propagate, and instead",
				"radiate efficiently into free",
				"space. This new material, termed a",
				"high-impedance surface, provides",
				"a useful new ground plane for novel",
				"low-profile antennas and other",
				"electromagnetic structures.",
				"The recent protests about the Michigamua",
				"student organization have raised an",
				"important question as to the proper nature",
				"and scope of University involvement",
				"with student organizations. Accordingly",
				"the panel described in my Statement of",
				"February 25, 2000 that is considering the",
				"question of privileged space also will",
				"consider under what circumstances and in", 
				"what ways the University, its",
				"administrators and faculty members should",
				"be associated with such organizations",
				"and it will recommend guiding principles",
				"in this regard. The University's",
				"Executive Officers and I will then decide",
				"whether and how to implement such",
				"principles."			       
};

      
char string[57][76];
main()
{

      char *here;

      int i,j;
      int a;
      int m[57];
      int mm,nn;
      mm = 76; nn =4;
      //*((volatile unsigned int *)0xf000f000) = (unsigned int)(&string[0]);
      //*((volatile unsigned int *)0xf000f004) = (unsigned int)(&string[76]);    
 
      //printf("%x",(unsigned int)(&string[0]) );
      //printf("%x",(unsigned int)(&string[76]));
      size_t *limit = (size_t *)&string[65];
      size_t *len = (size_t *)&string[69]; 

      for (i = 0; find_strings[i]; i++)
      {     *((size_t *)(&string[i][69])) = strlen(find_strings[i]);
            *((size_t *)(&string[i][65])) = strlen(search_strings[i]);
            strcpy(&string[i][0], find_strings[i]);
            strcpy(&string[i][15], search_strings[i]);
            *((volatile unsigned int *)0xf000f008) = (unsigned int)(string[i]);
            *((volatile unsigned int *)0xf000f00C) = 76;  
      }

            //m=find(&string[0],&string[15], *limit, *len);
            //*((volatile unsigned int *)0xf000f008) = (unsigned int)(&string[0]);
            //*((volatile unsigned int *)0xf000f00C) = 76;  
      for (i=0;i<57;i++) 
            a = find(string[i], mm, &m[i], nn);
      for (i=0;i<57;i++) 
       {     printf("\"%s\" is%s in \"%s\"", find_strings[i],
                  m[i] ? "" : " not", search_strings[i]);
            //if (here)
              //    printf(" [\"%s\"]", here);
            putchar('\n');
      }

      return 0;
}

