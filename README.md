# PocketAVR-32u4

In this Repository you will find test software for hardware based on the Atmel ATMega32u4 USB Microcontroller.

##Directory Contents

* __/Bootloaders__ This contains the [LUFA] (http://www.fourwalledcubicle.com/LUFA.php) (Lightweight USB Framework for AVRs)
* __/Examples__ Contains example Code for use on the 32u4 board
 *  __/Input__ Shows basic input.
 *  __/Output__ Shows basic output.
 *  __/Library__ Contains a Makefile and other basic libraries and Header Files
* __/Hardware__ Contains Hardware files created in [CadSoft Eagle] (http://www.cadsoftusa.com/download-eagle/) 

##LUFA Bootloader

                   _   _ _ ___ _
                  | | | | | __/ \
                  | |_| U | _| o | - The Lightweight USB
                  |___|___|_||_n_|    Framework for AVRs
                =========================================
                          Written by Dean Camera
                  dean [at] fourwalledcubicle [dot] com

                         http://www.lufa-lib.org
                =========================================

               LUFA is donation supported. To support LUFA,
             please donate at http://www.lufa-lib.org/donate

               Released under a modified MIT license - see
                  LUFA/License.txt for license details.

                For Commercial Licensing information, see
                     http://www.lufa-lib.org/license


This package contains the complete LUFA library, demos, user-submitted
projects and bootloaders for use with compatible microcontroller models.
LUFA is a simple to use, lightweight framework which sits atop the hardware
USB controller in specific AVR microcontroller models, and allows for the
quick and easy creation of complex USB devices and hosts.

To get started, you will need to install the "Doxygen" documentation
generation tool. If you use Linux, this can be installed via the "doxygen"
package in your chosen package management tool - under Ubuntu, this can be
achieved by running the following command in the terminal:

   sudo apt-get install doxygen

Other package managers and distributions will have similar methods to
install Doxygen. In Windows, you can download a prebuilt installer for
Doxygen from its website, www.doxygen.org.

Once installed, you can then use the Doxygen tool to generate the library
documentation from the command line or terminal of your operating system. To
do this, open your terminal or command line to the root directory of the
LUFA package, and type the following command:

   make doxygen

Which will recursively generate documentation for all elements in the
library - the core, plus all demos, projects and bootloaders. Generated
documentation will then be available by opening the file "index.html" of the
created Documentation/html/ subdirectories inside each project folder.

The documentation for the library itself (but not the documentation for the
individual demos, projects or bootloaders) is also available as a separate
package from the project webpage for convenience if Doxygen cannot be
installed.


##Notes

__4-10-16__ Added Hardware schematic, board, and BOM to repository.
