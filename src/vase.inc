/*
  This object was designed for a 1024x768px image.
  As POV-Ray's coordinate system (for some FUCKING reason)
  depends on the output image size, if you want to use this
  in any other image size, you must use transformations to
  to keep the object's shape.
*/

#declare outer_vase = sor {
    6,  // number of points
    <0.00, -0.10>,
    <0.80, 0.0>,
    <1.44, 1.8>,
    <0.56, 4.0>,
    <0.20, 6.8>,
    <0.24, 8.6>
    texture {
        pigment {
            color Red transmit 0.2
        }
    }
    hollow off
}

/* 460x815 model:
<0.0, -0.5>,
<1.0, 0.0>,
<1.8, 0.9>,
<0.7, 2.0>,
<0.4, 3.4>,
<0.3, 4.3>
*/

#declare inner_vase = union {
    sor {
        6,  // number of points
        <1.00, 0.0>,
        <1.15, 0.8>,
        <1.38, 1.8>,
        <0.55, 4.0>,
        <0.18, 6.8>,
        <0.22, 8.6>
        open  // no caps
        texture {
            pigment {
                color Red transmit 0.3
            }
        }
        hollow on
        // translate <0, -0.5, 0> // <x, y, z>
    }
    /* 460x815 model:
    <1.1, 0.0>,
    <1.3, 0.3>,
    <1.7, 0.9>,
    <0.6, 2.0>,
    <0.3, 3.4>,
    <0.2, 4.3>
    */

    difference {  // bottom part
        sphere { 
            <0, 1.70, 0>, 1.45 // <x, y, z>, radius
            texture {
                pigment {
                    color Red transmit 0.2
                }
            }
            hollow on
        }
        /* 460x815 model:
        <0, 3, 0>, 2.98
        */
        box {  // to cut the top of the sphere
            <-5, 0.8, 5>, <5, 9, -5> // <x, y, z> near lower left corner, <x, y, z> far upper right corner
        }
        /* 460x815 model:
        <-5, 0.33, 5>, <5, 9, -5>
        */
    }
}


#declare vase = difference {
    object{outer_vase}
    object{inner_vase}
}