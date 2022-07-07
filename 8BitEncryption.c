#include <stdio.h>
#include <stdlib.h>

int main()
{
    char bit[9];
    char c[2];
    for(int i=0;i<8;i++)
    {
        system("cls");
        printf("8 Bit Key Input: ");
        bit[i]=getch();
        if(bit[i]!='1'&&bit[i]!='0')
        {
            printf("That's no Bin!\n");
            i--;
            sleep(1);
            system("cls");
        }
    }
    printf("\nCharacter: ");

    c[0] = getch();
    char hxch[3];
    sprintf(hxch, "%2x", c[0]);
    char binch[9];
    char binch1[9];
    for(int i=0;i<1;i++)
    {
        if(hxch[i]=='0') sprintf(binch, "0000");
        else if(hxch[i]=='1') sprintf(binch, "0001");
        else if(hxch[i]=='2') sprintf(binch, "0010");
        else if(hxch[i]=='3') sprintf(binch, "0011");
        else if(hxch[i]=='4') sprintf(binch, "0100");
        else if(hxch[i]=='5') sprintf(binch, "0101");
        else if(hxch[i]=='6') sprintf(binch, "0110");
        else if(hxch[i]=='7') sprintf(binch, "0111");
        else if(hxch[i]=='8') sprintf(binch, "1000");
        else if(hxch[i]=='9') sprintf(binch, "1001");
        else if(hxch[i]=='A') sprintf(binch, "1010");
        else if(hxch[i]=='B') sprintf(binch, "1011");
        else if(hxch[i]=='C') sprintf(binch, "1100");
        else if(hxch[i]=='D') sprintf(binch, "1101");
        else if(hxch[i]=='E') sprintf(binch, "1110");
        else if(hxch[i]=='F') sprintf(binch, "1111");
    }
        for(int i=1;i<2;i++)
    {
        if(hxch[i]=='0') sprintf(binch1, "0000");
        else if(hxch[i]=='1') sprintf(binch1, "0001");
        else if(hxch[i]=='2') sprintf(binch1, "0010");
        else if(hxch[i]=='3') sprintf(binch1, "0011");
        else if(hxch[i]=='4') sprintf(binch1, "0100");
        else if(hxch[i]=='5') sprintf(binch1, "0101");
        else if(hxch[i]=='6') sprintf(binch1, "0110");
        else if(hxch[i]=='7') sprintf(binch1, "0111");
        else if(hxch[i]=='8') sprintf(binch1, "1000");
        else if(hxch[i]=='9') sprintf(binch1, "1001");
        else if(hxch[i]=='A') sprintf(binch1, "1010");
        else if(hxch[i]=='B') sprintf(binch1, "1011");
        else if(hxch[i]=='C') sprintf(binch1, "1100");
        else if(hxch[i]=='D') sprintf(binch1, "1101");
        else if(hxch[i]=='E') sprintf(binch1, "1110");
        else if(hxch[i]=='F') sprintf(binch1, "1111");
    }
    char bin[9];
    sprintf(bin, "%s%s", binch, binch1);
    char keys[9];
    for(int i=0;i<8;i++)
        {
            if(bit[i]==bin[i])
            {
                keys[i]='0';
            }
            else
            {
                keys[i]='1';
            }
        }
    char key1[5];
    char key2[5];
    for(int i=0;i<4;i++)
        {
            key1[i]=keys[i];
        }
    for(int i=0;i<4;i++)
        {
            key2[i]=keys[i+4];
        }
    int res=0;
    int resdiv=128;
    for(int i=0;i<8;i++)
    {
        if(keys[i]=='1')
        {
            res += resdiv;
        }
        else
        {
            res +=0;
        }
        resdiv/=2;
    }
    char newchar=(char)res;
    printf("\nNew Char: %c", newchar);

}
