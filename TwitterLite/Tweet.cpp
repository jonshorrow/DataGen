#include "Tweet.h"

#include <string>
#include <vector>

#include "User.h"

namespace TwitterLite
{
    Tweet::Tweet(User* owner, std::string_view body)
    : owner(owner), BODY(body), likes(0), replies()
    {
        // Nothing
    }
    
} // namespace TwitterLite
