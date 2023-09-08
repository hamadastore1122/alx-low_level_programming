#!/bin/bash
#include<stdio.h>
/**
 * main - Entry point
 *
 * return:always0(success)
 */
int main(void)
{
        print("size of a char:%d:byte(s)\n",sizeof(char));
        print("size of a int:%d:byte(s)\n",sizeof(int));
        print("size of a int:%d:byte(s)\n",sizeof(long int));
        print("size of a long:%d:byte(s)\n",sizeof(long long int));
        print("size of a float:%dbyte(s)\n",sizeof(float));
        return(0);
}
