/*size_t fread(void * buffer, size_t size, size_t count, FILE * stream);*/

/*How fread() function works when either count or size is zero*/
#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    FILE *fp;
    char buffer[100];
    int retVal;
    
    fp = fopen("data.txt","rb");
    
    /*  when count is zero */
    retVal = fread(buffer,sizeof(buffer),0,fp);
    cout << "When count = 0, return value = " << retVal << endl;
    
    /*  when size is zero */
    retVal = fread(buffer,0,1,fp);
    cout << "When size = 0, return value = " << retVal << endl;
    
    return 0;
}

