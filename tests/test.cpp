#include <gtest/gtest.h>
#include "ConcreteElementC.h"
#include "ConcreteVisitor.h"

TEST(ConcreteElementCTest, Accept)
{
    ConcreteElementC element;
    ConcreteVisitor visitor;

    EXPECT_NO_THROW(element.accept(visitor));
}

TEST(ConcreteElementCTest, SomeInformationC)
{
    ConcreteElementC element;
    EXPECT_NO_THROW(element.someInformationC());
}
