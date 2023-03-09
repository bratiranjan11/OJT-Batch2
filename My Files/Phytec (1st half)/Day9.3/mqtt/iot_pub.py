import time
import paho.mqtt.client as mqtt


mqttc = mqtt.Client()
mqttc.connect("broker.hivemq.com", 1883, 60)
mqttc.loop_start()

while True:
  reading = 36000
  millivolts = reading * 1800  # 1.8V reference = 1800 mV
  temp_c = (millivolts - 500) / 10
  print('mv=%.2f C=%.2f' % (millivolts, temp_c))
  mqttc.publish("phytec/iot/temp/mv","%.2f" % millivolts);
  mqttc.publish("phytec/iot/temp/c","%.2f" % temp_c);
  time.sleep(1)
