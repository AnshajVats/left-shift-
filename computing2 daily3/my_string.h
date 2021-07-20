#ifndef MY_STRING_H
#define MY_STRING_H


enum status {SUCESS,FAILURE};
typedef enum status Status;
typedef void* MY_STRING;
Status my_string_extraction(MY_STRING hMy_string, FILE* fp);
Status my_string_insertion(MY_STRING hMy_string, FILE* fp);






#endif