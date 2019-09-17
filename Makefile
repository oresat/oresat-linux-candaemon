# Makefile for CANdaemon based off of CANopend


#0 default
#1 gps
#2 star tracker
VERSION ?= 1#

#0 Not a master node
#1 Is a master node
MASTER ?= 0#

#0 debug off
#1 debug on
DEBUG ?= 1#


##############################################################################


CC ?= gcc
CFLAGS_DBUS= $(shell pkg-config --cflags --libs libsystemd)
CFLAGS = $(INCLUDE_DIRS)
LDFLAGS = -lrt -pthread


STACKDRV_SRC =		./CANopenNode/stack/socketCAN
STACK_SRC =     	./CANopenNode/stack
CANOPENNODE_SRC = 	./CANopenNode
INTERFACE_SRC = 	./src
DEFAULT_SRC =		./src/default
GPS_SRC =		./src/gps
STARTACKER_SRC =	./src/starTracker


INCLUDE_DIRS =	-I$(STACKDRV_SRC)	\
		-I$(STACK_SRC)		\
		-I$(CANOPENNODE_SRC)	\
		-I$(INTERFACE_SRC)


CD_SOURCES =	$(STACKDRV_SRC)/CO_driver.c         \
		$(STACKDRV_SRC)/CO_OD_storage.c     \
		$(STACKDRV_SRC)/CO_Linux_tasks.c    \
		$(STACK_SRC)/crc16-ccitt.c          \
		$(STACK_SRC)/CO_SDO.c               \
		$(STACK_SRC)/CO_Emergency.c         \
		$(STACK_SRC)/CO_NMT_Heartbeat.c     \
		$(STACK_SRC)/CO_SYNC.c              \
		$(STACK_SRC)/CO_PDO.c               \
		$(STACK_SRC)/CO_HBconsumer.c        \
		$(STACK_SRC)/CO_SDOmaster.c         \
		$(STACK_SRC)/CO_LSSmaster.c         \
		$(STACK_SRC)/CO_LSSslave.c          \
		$(STACK_SRC)/CO_trace.c             \
		$(CANOPENNODE_SRC)/CANopen.c        \
		$(INTERFACE_SRC)/CO_master.c        \
		$(INTERFACE_SRC)/CO_time.c          \

DBUS_SOURCES = 	$(INTERFACE_SRC)/dbus_helpers.c


COMM_SOURCES =	$(INTERFACE_SRC)/CO_command.c       \
		$(INTERFACE_SRC)/CO_comm_helpers.c

DEFAULT_SOURCES = $(DEFAULT_SRC)/CO_OD.c

GPS_SOURCES = 	$(GPS_SRC)/CO_OD.c                  \
		$(GPS_SRC)/dbus.c

STARTACKER_SOURCES = $(STARTACKER_SRC)/CO_OD.c      \
		$(STARTACKER_SRC)/dbus.c

##############################################################################


ifeq ($(VERSION), 1)
INCLUDE_DIRS += -I$(GPS_SRC)
SOURCES = $(GPS_SOURCES) $(DBUS_SOURCES) $(CD_SOURCES)
CFLAGS += $(CFLAGS_DBUS)
else ifeq ($(VERSION), 2)
INCLUDE_DIRS +=	-I$(STARTACKER_SRC)
SOURCES = $(STARTACKER_SOURCES) $(DBUS_SOURCES) $(CD_SOURCES)
CFLAGS += $(CFLAGS_DBUS)
else
$(info VERSION number failed)
endif


ifeq ($(MASTER), 1)
    CFLAGS += -DMASTER_NODE
    SOURCES += $(COMM_SOURCES)
endif


ifeq ($(DEBUG), 1)
    DEBUG_FLAGS += -Wall -g #-Werror -DDEBUG
endif


##############################################################################


OBJS =	$(SOURCES:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) $(INCLUDE_DIRS) -c $< -o $@

linux-interface: $(OBJS)
	$(CC) $(CFLAGS) $ $(DEBUG_FLAGS) $(LDFLAGS) $^ src/main.c -o $@

canopencomm:
	$(CC) $(DEBUG_FLAGS) ./CANopenComm/CANopenCommand.c -o $@

clean:
	rm -rf $(OBJS)  linux-interface canopencomm

help:
	$(info Make Options:)
	$(info - linux-interface: )
	$(info - canopencomm: default canopencomm)
	$(info - clean: remove all .o files and binaries)
