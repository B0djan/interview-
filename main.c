#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  find index of the maximum element

int _findmax(const int *arr, size_t size) {
    size_t idx = 0;
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > arr[idx])
            idx = i;
    }
    return idx;
}

//  return the second by size element

int _getmax2(const int* arr, size_t size) {
    int prev_max = arr[0];
    int curr_max = arr[1];
    if (arr[1] < arr[0]) {
        int tmp = prev_max;
        prev_max = curr_max;
        curr_max = tmp;
    }
    for (size_t i = 2; i < size; ++i) {
        if (arr[i] >= curr_max) {
            prev_max = curr_max;
            curr_max = arr[i];
        }
    }
    return prev_max;
}
char* _strcat(const char *str1, const char *str2) {

    int count = 0;
    const char* cp = str1;

    while(*cp){
        count++;
        cp++;
    }
    cp = str2;
    while(*cp) {
        count++;
        cp++;
    }
    char* answer = malloc(count + 1); char* tmp = answer;
    cp = str1;
    while (*tmp++ = *cp++); // go to '\0'
    cp = str2;
    tmp--;
    while (*tmp++ = *cp++);  // until '\0' add str2 to str1
    return answer;
}

int _strlen(const char *str) {
    const char *eos = str;
    while(*eos++);
    return (int) (eos - str - 1);
}

int _strcmp(const char *str1, const char *str2) {
    while(*str1 == *str2 && *str1) {
        str1++; str2++;
    }
    return *str1 - *str2;
}

char* _strcpy(char *str1, const char *str2) {
    char *d = str1;
    while(*d++ = *str2++);
    return str1;
}

char* _substr(char *str, char *sub) {
    int i, j;
    for (i=j=0; str[i] != '\0'; i++) {
        while((str[i+j] != '\0') && (str[i+j] == sub[j]))
            j++;
        if (sub[j] == '\0')
            return &str[i];
        j = 0;
    }
    return NULL;
}

char* _strchr(const char *str, char ch) {
    while(*str && *str != ch)
        str++;
    if(*str == ch)
        return (char*) str;
    return NULL;
}

int main(int argc, char *argv[]) {
    int a[] = {1, 3, 8, -1, 0, 14, -17, 22, 8, 3, 5};
    size_t arr_size = sizeof(a) / sizeof(a[0]);

    char str2[] = "ll";
    char str1[] = "Hello";

    // printf("%d\n",_getmax2(a, arr_size));
    char* str3 = _strcat(str1, str2);
    printf("%s\n", str3);
    free(str3);
    return 0;
}