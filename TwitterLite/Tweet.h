#ifndef TWITTERLITE_TWEET_H
#define TWITTERLITE_TWEET_H

#include <string>
#include <vector>

#include "User.h"

namespace TwitterLite
{
    class Tweet
    {
    public:
        Tweet(User* owner, std::string_view body);
        std::string         getBody();
        u_int32_t           getLikes();
        const std::vector<User*>&  getRetweets();
        const std::vector<Tweet*>& getReplies();

    private:
        User*               owner;
        const std::string   BODY;
        uint32_t            likes;
        std::vector<User*>  retweets;
        std::vector<Tweet*> replies;

    };

    inline std::string Tweet::getBody()
    {
        return BODY;
    }

    inline u_int32_t Tweet::getLikes()
    {
        return likes;
    }

    inline const std::vector<User*>& Tweet::getRetweets()
    {
        return retweets;
    }

    inline const std::vector<Tweet*>& Tweet::getReplies()
    {
        return replies;
    }

} // namespace TwitterLite

#endif