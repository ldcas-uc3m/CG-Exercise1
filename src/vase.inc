#declare outer_vase = sor {
    6,  // number of points
    <0.0, 0.0>,
    <1.0, 0.5>,
    <1.8, 1.4>,
    <0.7, 2.5>,
    <0.4, 3.9>,
    <0.3, 4.8>
    open  // no caps
    texture {
        pigment {
        color White transmit 0.7
        }
    }
    hollow off
    translate <0, -0.5, 0> // <x, y, z>
}


#declare inner_vase = sor {
    6,  // number of points
    <1.0, 0.5>,
    <1.2, 0.8>,
    <1.7, 1.4>,
    <0.6, 2.5>,
    <0.3, 3.9>,
    <0.2, 4.8>
    open
    texture {
        pigment {
        color Red
        }
    }
    hollow on
    translate <0, -0.5, 0> // <x, y, z>
}


#declare vase = union {
    object{outer_vase}
    object{inner_vase}
}