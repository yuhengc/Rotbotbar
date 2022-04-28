//include <ros.h>
//include <std_msgs/Uint8.h>

ros::NodeHandle  nh;
ros::Subscriber<std_msgs::Uint8> sub("light", callback);

void setup() {
  pinMode(12, OUTPUT);
  nh.initNode();
  nh.subscribe(sub)
}

void loop() {
  digitalWrite(12, HIGH);
  delay(10000);
  digitalWrite(12, LOW);    
  delay(10000);
}