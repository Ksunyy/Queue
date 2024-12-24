#include "Queue.h"
#include <gtest.h>

// --------------- Positive tests ------------- //

TEST(Queue, can_create_default_queue) {
	ASSERT_NO_THROW(Queue<int> arr());
}

TEST(Stack, can_create_stack_positive_length) {
	ASSERT_NO_THROW(Queue<int> arr(9));
}

TEST(Queue, can_get_size) {
	Queue<int> arr(4);
	arr.push(8);
	EXPECT_EQ(1, arr.get_size());

}


TEST(Queue, can_push_val) {
	Queue<int> arr(2);
	arr.push(3);
	EXPECT_EQ(3, arr.top());
}

TEST(Queue, change_size_push) {
	Queue<int> arr(2);
	arr.push(3);
	EXPECT_EQ(1, arr.get_size());
}

TEST(Queue, can_pop_value) {
	Queue<int> arr(3);
	arr.push(4);
	arr.pop();
	EXPECT_EQ(0, arr.get_size());
}


TEST(Queue, chek_empty) {
	Queue<int> arr(0);
	EXPECT_EQ(1, arr.empty());
}

// --------------- Negative tests ------------- //

TEST(Queue, throw_create_negative_len) {
	ASSERT_ANY_THROW(Queue<int> arr1(-2));
}

TEST(Queue, throw_pop_val_empty) {
	Queue<int> arr(0);
	ASSERT_ANY_THROW(arr.pop());

}

TEST(Queue, throw_top_val_empty) {
	Queue<int> arr(0);
	ASSERT_ANY_THROW(arr.top());
}