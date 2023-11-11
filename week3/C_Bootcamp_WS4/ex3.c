// #include <stdio.h>
 
// int str_len(char* str) 
// {
//     int length=0;
//     for (int i = 0; *str!='\0'; i++)
//     {
//         length++;
//     }
//     return length;
// }

// int main(){
//     char a[100] ;
//     int len;
//     printf("Enter a string: ");
//     scanf("%s",a);
//     len=str_len(a);
//     printf("%d\n",len);
//     printf("%s has a length of %d\n",a,len);
//     return 0;
// }
// #include <stdio.h> 
// int length_of_string(char* p) {
//     int count = 0;

//     while (*p != '\0') {
//         count++;
//         p++;
//     }

//     return count;
// }
// int main() {
//     char str[100];
//     int length;

//     printf("Enter any string : ");
//     scanf("%s",str);
//     length = length_of_string(str);

//     printf("The length of the given string : %d \n", length);

//     return 0;
// }