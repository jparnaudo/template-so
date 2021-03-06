/*
 * Defaults.h
 *
 *  Created on: Apr 25, 2014
 *      Author: jp
 */

#ifndef DEFAULTS_H_
#define DEFAULTS_H_

#define PATH "/home/"
#define NETWORK_FILE "network.conf"

#define PRODUCTION_ORDERS_QUEUE_ID 301

#define PRODUCER_TYPE 5
#define CONSUMER_TYPE_PROCESSORS PROCESSOR
#define CONSUMER_TYPE_MOTHERBOARDS MOTHERBOARD
#define CONSUMER_TYPE_DISKS DISK

#define FIRST_PRODUCER_PROCESS_ID 1
#define PRODUCER_PROCESS "PRODUCER PROCESS"
#define PRODUCER_PROCESS_TYPE PRODUCER
#define AMMOUNT_OF_PRODUCERS 5
#define IPRODUCER "i_Producer"

#define FIRST_CONSUMER_PROCESS_ID AMMOUNT_OF_PRODUCERS+1
#define CONSUMER_PROCESS_TYPE CONSUMER
#define CONSUMER_PROCESS "CONSUMER PROCESS"
#define AMMOUNT_OF_CONSUMERS FIRST_CONSUMER_PROCESS_ID+5
#define ICONSUMER "i_Consumer"

#define SENDER_PROCESS "SENDER PROCESS"
#define SENDER_QUEUE_ID 302
#define SENDER_TYPE 6

#define RECEIVER_PROCESS "RECEIVER PROCESS"
#define RECEIVER_QUEUE_ID 303
#define RECEIVER_TYPE 7
#define RECEIVER_LISTENING_PORT 5001

#define CONFIGURATION_FILE ""
#define ORDERS_AMOUNT "orders_amount"
#define PRODUCERS_AMOUNT "producers_amount"
#define ID_CONTROLLER_ADDRESS "id_controller_address"


#define PRODUCER_LAUNCHER_NAME "PRODUCER LAUNCHER"
#define PRODUCER_LAUNCHER_ID "111"
#define CONSUMER_LAUNCHER_NAME "CONSUMER LAUNCHER"
#define CONSUMER_LAUNCHER_ID "112"

#define PRODUCER_PROCESS_NAME "ProducerProcess"

#define SLEEP_TIME_MAX 6
#define SLEEP_TIME_MIN 4
#endif /* DEFAULTS_H_ */
