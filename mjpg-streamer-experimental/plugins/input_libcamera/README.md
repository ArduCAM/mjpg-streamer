mjpg-streamer input plugin: input_libcamera
============================================

This plugin provides JPEG data from libcamera.

Usage
=====

```
./mjpg_streamer -i "input_libcamera.so -h"

 ---------------------------------------------------------------
 Help for input plugin..: Libcamera Input plugin
 ---------------------------------------------------------------
 The following parameters can be passed to this plugin:

 [-r | --resolution ]...: the resolution of the video device,
                          can be one of the following strings:
                          QQVGA QCIF CGA QVGA CIF PAL 
                          VGA SVGA XGA HD SXGA UXGA 
                          FHD 
                          or a custom value like the following
                          example: 640x480
 [-c | --camera ].......: Chooses the camera to use.
 [-f | --fps ]..........: frames per second
 [-b | --buffercount ]...: Set the number of request buffers.
 [-q | --quality ] .....: set quality of JPEG encoding
 [-rot | --rotation]....: Request an image rotation, 0 or 180
 [-s | --snapshot ] .....: Set the snapshot resolution, if not set will default to the maximum resolution.
 ---------------------------------------------------------------
 Optional parameters (may not be supported by all cameras):

 [-br ].................: Set image brightness (integer)
 [-co ].................: Set image contrast (integer)
 [-sa ].................: Set image saturation (integer)
 [-ex ].................: Set exposure (integer)
 [-gain ]...............: Set gain (integer)
 [-afmode]..............: Control to set the mode of the AF (autofocus) algorithm.(manual, auto, continuous)
 [-afrange].............: Set the range of focus distances that is scanned.(normal, macro, full)
 [-lensposition]........: Set the lens to a particular focus position, expressed as a reciprocal distance (0 moves the lens to infinity), or "default" for the hyperfocal distance ---------------------------------------------------------------
```

Example
=========

```
./mjpg_streamer -i "input_libcamera.so -r 1920x1080 -f 30 -b 4 -s 4656x3496" -o "output_http.so -w ./www"
```
