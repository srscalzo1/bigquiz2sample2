FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive
ENV ECE3574_REFERENCE_ENV="Y"

RUN apt-get update && apt-get upgrade
RUN apt-get -y install build-essential coreutils cmake
RUN apt-get -y install python3-pip python3-dev
RUN apt-get -y install valgrind lcov doxygen
RUN apt-get -y install clang clang-tidy
RUN apt-get -y install qt5-default

RUN pip3 install gcovr pexpect

# Usage: docker run -it --mount type=bind,src=$PWD,dst=/mnt heesanghan/ref-env
# Usage with x11-forwarding: docker run -it -e DISPLAY=docker.for.mac.host.internal:0 --mount 
#                            type=bind,src=$PWD,dst=/mnt heesanghan/ref-env