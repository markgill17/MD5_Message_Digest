# TOA-project
# MD5 Message digest
## Introduction
This project is part of my fourth year of Software Development. It is part of the Theory of Algorithms module. The aim of this project is to develop a program that hashes an input using the MD5 algorithm which is explained in the [RFC 1321](https://tools.ietf.org/html/rfc1321) document.

## Run
This section will outline how to clone, compile and run the program for yourself. I developed this program using Linux but i will outline my experience running my program on Windows.
### Running on Linux
Linux has a native/pre-installed C compiler so there is no need to install one.
* open up a terminal
* navigate to where you want the project in the file directory using ```cd/{{directory name}}``` and ```cd .. ``` to go back a directory.
* Run ```git clone https://github.com/markgill17/TOA-project.git```
* Search for name of new directory using ```ls```
* Navigate to the directory you just cloned using ```cd /TOA-project```
* Run ```gcc TOA-project/md5.c -o md5``` to generate the md5 from my code.
* Run ```./md5 "YOUR TEST STRING"``` to get the MD5 hash of the string you inputted

### Running on Windows
My way of running a C compiler on Windows was to install a Linux subsystem.
I followed the steps found [here](https://ubuntu.com/tutorials/tutorial-ubuntu-on-windows#1-overview). Once those are complete, I did this:
* open up the ubuntu terminal
* navigate to where you want the project in the file directory using ```cd/{{directory name}}``` and ```cd .. ``` to go back a directory.
* Run ```git clone https://github.com/markgill17/TOA-project.git```
* Search for name of new directory using ```ls```
* Navigate to the directory you just cloned using ```cd /TOA-project```
* Run ```gcc TOA-project/md5.c -o md5``` to generate the md5 from my code.
* Run ```./md5 "YOUR TEST STRING"``` to get the MD5 hash of the string you inputted

## Research
All of my documentation research can be found [here](https://tools.ietf.org/html/rfc1321). I found this link to be very useful and really helped me in understanding the code.
All of my video research was done by following videos by Dr Ian McLoughlin.

## References
* https://tools.ietf.org/html/rfc1321
* https://learnonline.gmit.ie/course/view.php?id=557
* https://gist.github.com/creationix/4710780
* http://practicalcryptography.com/hashes/md5-hash/
* https://rosettacode.org/wiki/MD5#C
* https://dox.ipxe.org/md5_8c_source.html
* https://nvlpubs.nist.gov/nistpubs/FIPS/NIST.FIPS.180-4.pdf
