import logging
import gzip
import os
import sys
import mkbootimg

# This Function Generate Boot Header Version 3 Android Boot Image.
def makeAndroidImage(outputbin_dir, output_dir, root_dir, device_name, dtb_name) :
    bootpayload_path = os.path.join(output_dir, 'bootpayload.bin')
    output_path = os.path.join(output_dir, device_name + '.img')
    fd_path = os.path.join(outputbin_dir, 'FV', 'SM8450_EFI.fd')
    bootshim_path = os.path.join(root_dir, 'BootShim', 'BootShim.bin')

    logging.info("Generating bootpayload.bin")

    '''
      Payload:
        | BootShim.bin | SM8450_EFI.fd |
    '''
    with open(bootpayload_path, 'wb') as f:
        logging.info("Writing UEFI...")
        data = bytes()

        with open(bootshim_path, 'rb') as bootshim_file:
            data += bootshim_file.read()

        with open(fd_path, 'rb') as fd:
            data += fd.read()
            data = gzip.compress(data, 9)
            f.write(data)

    logging.info("Writing " + device_name + '.img')

    mkbootimg.main([
        "--kernel", bootpayload_path,
        "-o", output_path,
        "--pagesize", "4096",
        "--header_version", "3",
        "--cmdline", "",
        "--base", "0x0",
        "--os_version", "13.0.0",
        "--os_patch_level", "2023-04-01"
    ])

#        "--ramdisk", "./ImageResources/emptyramdisk",
