#include <iostream>
#include "TwitterLite/Tweet.h"

int main(int argc, char *argv[])
{
    (void) argc;
    (void) argv;
    
    std ::cout << "TODO: EVERYTHING" << std::endl;
    TwitterLite::User user1;
    TwitterLite::Tweet tweet(&user1, "TONGS");

    std ::cout << tweet.getBody() << std::endl;

    return 0;
}