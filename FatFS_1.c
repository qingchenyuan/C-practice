#include <stdio.h>
#include <stdlib.h>
#include "platform.h"
#include "xil_printf.h"
// FatFS addition part
#include "xsdps.h"
#include "ff.h"
#include "xil_cache.h"

int main()
{
    init_platform();
    /*int i;
    xil_printf("write a number :\n");
    scanf("%d",&i);
    i = i + 1;
    xil_printf("result is :%d",i);*/
    //FatFS addition part
    FIL file1;
    FRESULT result;
    TCHAR *path = "0:/";
    FATFS *fs;
    char wtext[50]="yuanqingchen";
    uint32_t byteswritten;
    xil_printf("the size of wtext is %d\n ",sizeof(wtext));
    fs = malloc(sizeof(FATFS));
    result = f_mount(fs,path,0);
    if (result !=0)
    {
    	xil_printf("ERROR: f_mount return %d \n",result);
    }
    result = f_open(&file1,"first.txt",FA_CREATE_ALWAYS|FA_WRITE);
    if(result != 0)
    {
      	xil_printf("error: f_open return %d\n",result);
    }
    result = f_write(&file1, wtext, 50, (void *)&byteswritten);
    xil_printf("f_write return %d\n",result);
    xil_printf("write %d byte\n",byteswritten);
    result = f_close(&file1);
    xil_printf("f_close return %d\n",result);
    cleanup_platform();
