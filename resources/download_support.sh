#!/bin/bash
echo "This file will download good versions of encTitleKeys.bin, decTitleKeys.bin, and seeddb.bin and place them in the /gm9/support folder. INTERNET IS REQUIRED, and you will need to type in your sudo password."
sleep "1s"
echo "NOTE: This script requires wget to be installed. It comes preinstalled on most Linux distros as well as WSL, if you do not have it installed, assuming you are using apt, run:"
echo "sudo apt install wget"
echo "On macOS, assuming you have homebrew installed, run"
echo "brew install wget"
sleep "3s"
echo "Working..."
sleep "1s"
mkdir dwnload
cd dwnload
wget http://3ds.titlekeys.gq/downloadenc
wget http://3ds.titlekeys.gq/download
wget http://3ds.titlekeys.gq/seeddb
cd ..
rm em9/support/*
mv dwnload/downloadenc em9/support/encTitleKeys.bin
mv dwnload/download em9/support/decTitleKeys.bin
mv dwnload/seeddb em9/support/seeddb.bin
rmdir dwnload
echo "Done!"
echo "Copy the em9 folder (and all of it's contents) to the root of your SD card."
sleep "7s"
