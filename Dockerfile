FROM ubuntu:bionic

RUN apt-get update -y
RUN apt-get install build-essential -y
RUN apt-get install qemu-system-arm -y
RUN apt-get install gcc-arm-none-eabi -y

WORKDIR /usr/src/code

COPY ./qemu-arm /usr/src/code/qemu-arm
COPY ./qemu-x86 /usr/src/code/qemu-x86
