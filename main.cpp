#include <iostream>
#include "socialnetwork.h"

int main(char* ar[], int count)
{
    SocialNetwork sn;

    sn.addnewMan("Mirana");
    sn.addnewMan("Slark");
    sn.addnewMan("Sven");
    sn.addnewMan("Lina");
    sn.addnewMan("Leshrak");

    sn.delMan("Lina");
    sn.addnewMan("Muerta");

    sn.addFriendship("Mirana", "Slark");
    sn.addFriendship("Slark", "Sven");
    sn.addFriendship("Sven", "Muerta");
    sn.addFriendship("Muerta", "Leshrak");

    sn.showThreeHandshakes();

    return 0;
}
