#include "../TestRunner/catch.hpp"
#include "../HippoMocks/hippomocks.h"

/**
-- Posting
Alice can publish messages to a personal timeline
> alice post hello this is a message

-- Reading
Bob can view Alice's timeline
> bob view alice

-- Following
Charlie can subscribe to Alice's and Bob's timelines, and view an aggretated list of all subscriptions
> charlie subscribe alice
> charlie subscribe bob

-- Mentions
Bob can link to Charlie in a message using "@"
> bob post hello @charlie this is a message

-- Links
Alice can link to a clickable web resource in a message
> alice post hello www.link.com is a nice web

-- Direct Messages
Mallory can send a private message to Alice
> mallory whisper(alice) hello this is a private message
*/


TEST_CASE("Posting should")
{
	
}