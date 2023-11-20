#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>


//strstr
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(*p1 && *p2);
//	char* mov = p1;
//	while (*mov) {
//	    char* i = mov;
//	    char* j = p2;
//		while (*j == *i && *j != '\0' && *i != '\0') {
//			i++;
//			j++;
//		}
//		if (*j == '\0')    return mov;
//		mov++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[20] = { "abcdefghi" };
//	char arr2[20] = { "cde" };
//	printf("%s\n", my_strstr(arr1, arr2));
//	return 0;
//}



