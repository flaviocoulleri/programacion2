#include<stdio.h>
int mitolower(int pc)
{
    if(pc>=65&&pc<=90)
    {
        pc+=32;
    }
    return pc;
}
int mitoupper(int pc)
{
    if(pc>=97&&pc<=122)
    {
        pc-=32;
    }
    return pc;
}

