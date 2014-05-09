#include <gtest/gtest.h>

#include "dev_exercices/exercice.h"
#include "dev_exercices/MyQueue.h"

#include <cstddef>

namespace dev_exercices {

TEST(MyQueue, enqueueAllAndThendequeueAll) {

  MyQueue aQueue;


  aQueue.enqueue(1);
  aQueue.enqueue(2);
  aQueue.enqueue(3);
  aQueue.enqueue(4);
  aQueue.enqueue(5);

  EXPECT_EQ(aQueue.dequeue(), 1);
  EXPECT_EQ(aQueue.dequeue(), 2);
  EXPECT_EQ(aQueue.dequeue(), 3);
  EXPECT_EQ(aQueue.dequeue(), 4);
  EXPECT_EQ(aQueue.dequeue(), 5);
}


TEST(MyQueue, enqueueSomeThenDequeueAndEnqueueAgain) {

  MyQueue aQueue;


  aQueue.enqueue(1);
  aQueue.enqueue(2);
  aQueue.enqueue(3);


  EXPECT_EQ(aQueue.dequeue(), 1);
  EXPECT_EQ(aQueue.dequeue(), 2);

  aQueue.enqueue(4);
  aQueue.enqueue(5);
  
  EXPECT_EQ(aQueue.dequeue(), 3);
  EXPECT_EQ(aQueue.dequeue(), 4);
  EXPECT_EQ(aQueue.dequeue(), 5);
}



}  // namespace dev_exercices
