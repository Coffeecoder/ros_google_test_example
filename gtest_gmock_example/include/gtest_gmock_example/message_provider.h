// Copyright 2021 Eugen Kaltenegger

#ifndef MESSAGE_PROVIDER_H
#define MESSAGE_PROVIDER_H

#include <std_msgs/String.h>

class message_provider
{
private:
  int messageCount = 0;

public:
  std_msgs::String getStringMessage();
};

#endif  // MESSAGE_PROVIDER_H
