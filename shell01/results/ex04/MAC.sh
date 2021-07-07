#!/bin/sh
ifconfig | grep "ether " | rev | cut -d' ' -f2 | rev
