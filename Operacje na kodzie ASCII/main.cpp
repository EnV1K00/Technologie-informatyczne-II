#include <iostream>
#include <stdio.h>

void male_litery(char *ciag)
{
    while (*ciag)
    {
        if ('A' <= *ciag && *ciag <= 'Z')
        {
            *ciag += ('a' - 'A');
        }
        ciag++;
    }
}

void wielkie_litery(char *ciag)
{
    while (*ciag)
    {
        if ('a' <= *ciag && *ciag <= 'z')
        {
            *ciag -= ('a' - 'A');
        }
        ciag++;
    }
}

int dlugosc_tekstu(const char *ciag)
{
    int dlugosc = 0;
    while (*ciag)
    {
        dlugosc++;
        ciag++;
    }
    return dlugosc;
}

int ilosc_liter(const char *ciag)
{
    int litery = 0;
    while (*ciag)
    {
        if (('A' <= *ciag && *ciag <= 'Z') || ('a' <= *ciag && *ciag <= 'z'))
        {
            litery++;
        }
        ciag++;
    }
    return litery;
}


void combineStrings(char *source1, char *source2, char *destination)
{
    while (*source1)
    {
        *destination = *source1;
        destination++;
        source1++;
    }
    while (*source2)
    {
        *destination = *source2;
        destination++;
        source2++;
    }

    *destination = '\0';
}

int main(int argc, char *argv[]) {
    char tekst[] = "TeCHnolOGie_InFormATYCzne-2";
    printf("%s\n", tekst);

    male_litery(tekst);
    printf("%s\n", tekst);

    wielkie_litery(tekst);
    printf("%s\n", tekst);

    int dlugosc = dlugosc_tekstu(tekst);
    printf("\nDlugosc tekstu: %d\n", dlugosc);
    int litery = ilosc_liter(tekst);
    printf("Ilosc liter: %d\n", litery);

    char str1[] = "Ala ";
    char str2[] = "ma kota";
    char str3[80] = "";

    combineStrings(str1, str2, str3);

    printf("\nPolaczony tekst: %s\n", str3);

    return 0;
}
