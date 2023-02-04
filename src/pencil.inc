#declare pencil = 
    merge{
        difference{
            sphere {
                <0, 0, -1>, 1 // <x, y, z>, radius
                pigment { 
                    color Black // <red, green, blue, filter, transmit>
                }   
            }
            cylinder {
                <0, 0, -1>, <0, 0, 0>, 1 // center of one end, center of other end, radius 
                pigment { 
                    color Red transmit 1// <red, green, blue, filter, transmit>
                }
            }
        }
        cylinder {
            <0, 0, -1>, <0, 0, 0>, 1 // center of one end, center of other end, radius 
            pigment { 
                color Red// <red, green, blue, filter, transmit>
            }
        }
        cylinder {
            <0, 0, 0>, <0, 0, 13>, 1 // center of one end, center of other end, radius
            open // remove end caps
            
        }
        cone {
            <0, 0, 13>, 1    // Center and radius of one end
            <0, 0, 14.5>, 0.3    // Center and radius of other end
            open              // Removes end caps
            pigment { 
                color <0.78, 0.58, 0.29, 0.0, 0.0> // <red, green, blue, filter, transmit>
            }
        }
        cone {
            <0, 0, 14.5>, 0.3 // <x, y, z>, center & radius of one end
            <0, 0, 15>, 0 // <x, y, z>, center & radius of the other end
            
        }
        rotate <0, 90, 0> // <x°, y°, z°>
    };

#declare pencil2 = 
    merge{
        prism {
            linear_sweep
            linear_spline
            0, // sweep the following shape from here ...
            1, // ... up through here
            7, // the number of points making up the shape ...
            <3,5>, <-3,5>, <-5,0>, <-3,-5>, <3, -5>, <5,0>, <3,5>
            pigment { Black}
            scale <0.3, 15, 0.3> // <x, y, z>
        }
        prism {
            linear_sweep
            linear_spline
            0, // sweep the following shape from here ...
            1, // ... up through here
            7, // the number of points making up the shape ...
            <3,5>, <-3,5>, <-5,0>, <-3,-5>, <3, -5>, <5,0>, <3,5>
            pigment { Red}
            scale <0.3, 1.0, 0.3> // <x, y, z>
            translate <0, -1.0, 0> // <x, y, z>
        }
        prism {
            linear_sweep
            linear_spline
            0, // sweep the following shape from here ...
            1, // ... up through here
            7, // the number of points making up the shape ...
            <3,5>, <-3,5>, <-5,0>, <-3,-5>, <3, -5>, <5,0>, <3,5>
            pigment { Black}
            scale <0.3, 2.0, 0.3> // <x, y, z>
            translate <0, -2.9, 0> // <x, y, z>
        }
        translate <0,0,-10>
        rotate <0, 0, -90> // <x°, y°, z°>
        scale <0.85,0.7,0.7>
    };

#declare scaffold = 
    difference{
    object{pencil2}
    object{
        pencil2
        translate <0,0,-1.8>
        scale <1.1,0.8,0.8>
    }
    translate <0, 0, 7> // <x, y, z>
};

#declare hexagonalPencil = 
    difference{
        object{pencil}
        object{
            scaffold
            scale <1,1.1,1.1>
        }
    };