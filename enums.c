#include <stdio.h>
enum deck
 {
    club = 0,
    diamonds = 5,
    hearts = 10,
    swords = 15,
    
    } card;

int main()
{

    enum deck card;
    card = swords;
    printf("size of %d",sizeof (card));
    return 0;
}
