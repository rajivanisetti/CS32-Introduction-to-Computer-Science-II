#include "Arena.h"
#include "History.h"
#include "globals.h"
int main()
{
    Arena a(1, 4);
    a.addPlayer(1, 4);
    for (int t = 1; t <= 2; t++)
    {
        a.addRat(1, 1);
        a.setCellStatus(1, 2, HAS_POISON);
        a.setCellStatus(1, 3, HAS_POISON);
        while (a.ratCount() > 0)
            a.moveRats();
    }
    a.history().display();
}
