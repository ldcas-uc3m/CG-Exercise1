#declare outer_vase = sor {
    6,  // number of points
    <0.0, -0.5>,
    <1.0, 0.0>,
    <1.8, 0.9>,
    <0.7, 2.0>,
    <0.4, 3.4>,
    <0.3, 4.3>
    texture {
        pigment {
        color Red transmit 0.2
        }
    }
    hollow off
}


#declare inner_vase = union {
    sor {
        6,  // number of points
        <1.1, 0.5>,
        <1.3, 0.8>,
        <1.7, 1.4>,
        <0.6, 2.5>,
        <0.3, 3.9>,
        <0.2, 4.8>
        open  // no caps
        texture {
            pigment {
            color Red transmit 0.3
            }
        }
        hollow on
        translate <0, -0.5, 0> // <x, y, z>
    }
    difference {  // bottom part
        sphere { 
            <0, 3, 0>, 2.98 // <x, y, z>, radius
            texture {
                pigment {
                color Red transmit 0.2
                }
            }
            hollow on
        }
        box {  // to cut the top of the sphere
            <-5, 0.33, 5>, <5, 9, -5> // <x, y, z> near lower left corner, <x, y, z> far upper right corner
        }
    }
}


#declare vase = difference {
    object{outer_vase}
    object{inner_vase}
}