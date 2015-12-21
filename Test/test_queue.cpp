#include <gtest.h>
#include <Tqueue.h>

TEST(Tqueue, can_create_queue)
{
	ASSERT_NO_THROW(Tqueue <int> queue(5));
}