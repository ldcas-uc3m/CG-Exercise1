/*
By Luis Daniel Casais Mezquida and Lucía María Moya Sans
*/

#include "colors.inc"
#include "shapes.inc"

#include "vase.inc"
#include "complexObject.inc"


// ROOM
plane { <0, 1, 0>, 0
    pigment {
        color Gray
    }
    finish {
        reflection 0.4
    }

  }

plane { <0, 0, 1>, 3
    pigment {
        color White
    }
    finish {
        reflection 0
        ambient 0.8
        diffuse 0.1
    }
    
}


// OBJECTS
object {
    vase
    scale<0.95,1,0.95>
    translate <1.7,0,0.4>
}
object {
    complexObject
    scale <0.42,0.18,0.42>
    rotate <0,-30,0>
    translate <-2.1,0,-1.5>
}


// LIGHTS
light_source {
    <1, 5, 2.5> // <x, y, z>
    color <1.0, 1.0,  1.0> // <red, green, blue>
    area_light <10, 0, 0>, <0, 0, 10>, 5, 5 // <x, y, z>, <x, y, z>, size 1, size 2
    adaptive 1
    jitter
}


// CAMERA
camera {
    location <0, 1.5, -5.5>
    look_at  <0, 1.5,  0>
}