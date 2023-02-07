/*
  This object was designed for a 1024x768px image.
  As POV-Ray's coordinate system (for some FUCKING reason)
  depends on the output image size, if you want to use this
  in any other image size, you must use transformations to
  to keep the object's shape.
*/

#include "pencil.inc"


#declare complexObject = union {
    merge{  // bottom box
        difference {
            cylinder { <0, 0, 0> <0, 2.5, 0>, 1
            pigment { color White transmit 0.8}
            }
            box {
                <0, 0, -1>,  // Near lower left corner
                <1, 2.5, 1>   // Far upper right corner
                pigment { 
                    color White transmit 1// <red, green, blue, filter, transmit>
                }
                scale <2, 2, 2> // <x, y, z>
            }
        }
        difference {
            cylinder { <5, 0, 0> <5, 2.5, 0>, 1
            pigment { color White transmit 0.8}
            }
            box {
                <4, 0, -1>,  // Near lower left corner
                <5, 2.5, 1>   // Far upper right corner
                pigment { 
                    color White transmit 1// <red, green, blue, filter, transmit>
                }
                scale 1.0001
            }
        }
        box {
            <0,   0, -1>,
            <5, 2.5,  1>
            pigment {
                color White transmit 0.8
            }
        }

      scale <1.0, 1.0, 1.5> // <x, y, z>
    }
    lathe {  // yoghurt vase
        cubic_spline 8,
        <0.00, 9.00>,
        <4.00, 2.50>,
        <4.00, 7.00>,
        <3.25, 9.50>,
        <3.50, 10.50>,
        <3.75, 10.75>,
        <3.75, 10.75>,
        <4.00, 19.00>
        texture {
            pigment {
                color White transmit 0.8
            }
        }
        scale <0.3, 0.3, 0.3> // <x, y, z>
        translate <4, 2, 0.1> // <x, y, z>
    }
    union {  // pencils
        object {
            hexagonalPencil
            scale <0.4, 0.2, 0.2> // <x, y, z>
            rotate <0,0,60>
            translate <4.1,3.2,0>
        }
        object {
            hexagonalPencil
            scale <0.4, 0.2, 0.2> // <x, y, z>
            rotate <0,10,60>
            translate <4,3.2,0>
        }
        object {
            hexagonalPencil
            scale <0.4, 0.2, 0.2> // <x, y, z>
            rotate <0,-10,110>
            translate <5,3.2,0>
        }
        object {
            hexagonalPencil
            scale <0.4, 0.2, 0.2> // <x, y, z>
            rotate <0,-11,110>
            translate <4.7,3.2,-0.4>
        }
        object {
            hexagonalPencil
            scale <0.4, 0.2, 0.2> // <x, y, z>
            rotate <0,-10,100>
            translate <5,3.2,-0.3>
        }
        object {
            hexagonalPencil
            scale <0.4, 0.2, 0.2> // <x, y, z>
            rotate <0,9,100>
            translate <4.65,3.2,0.8>
        }
        object {
            hexagonalPencil
            scale <0.4, 0.2, 0.2> // <x, y, z>
            rotate <0,-18,110>
            translate <5,3.2,0>
        }
        object {
            hexagonalPencil
            scale <0.4, 0.2, 0.2> // <x, y, z>
            rotate <0,-20,110>
            translate <4.7,3.2,-0.4>
        }
        translate <-0.5,0,0>
    }
    // colored spheres
    sphere {
        <-0.4, 0.5, 0.5>,
        0.45  // radius
        pigment { 
            Red transmit 0.5
        }
    }
    sphere {
        <-0.4, 0.5, -0.5>,
        0.45
        pigment { 
            Blue transmit 0.5
        }
    }
    sphere {
        <0.4, 0.5, 01>,
        0.45
        pigment { 
            Green transmit 0.5
        }
    }
    sphere {
        <0.4, 0.5, 0>,
        0.45
        pigment { 
            DarkBrown transmit 0.5
        }
    }
    sphere {
        <1.2, 0.5, 0.7>,
        0.45
        pigment { 
            DarkGreen transmit 0.5
        }
    }
    sphere {
        <0.4, 0.5, -1>,
        0.45
        pigment { 
            Blue transmit 0.5
        }
    }
    sphere {
        <1.9, 0.5, 1>,
        0.45
        pigment { 
            DarkGreen transmit 0.5
        }
    }
    sphere {
        <2.3, 0.5, 0.2>,
        0.45
        pigment { 
            DarkGreen transmit 0.5
        }
    }
    sphere {
        <1.3, 0.5, -1>,
        0.45
        pigment { 
            Brown transmit 0.5
        }
    }
    sphere {
        <1.4, 0.5, -0.1>,
        0.45
        pigment { 
            Blue transmit 0.5
        }
    }
    sphere {
        <2.1, 0.5, -1>,
        0.45
        pigment { 
            DarkBrown transmit 0.5
        }
    }
};