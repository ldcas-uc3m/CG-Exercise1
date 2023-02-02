#include "colors.inc"
#include "stones.inc"
#include "textures.inc"
#include "shapes.inc"
#include "glass.inc"
#include "metals.inc"
#include "woods.inc"

#include "vase.inc"
#include "complexObject.inc"


// ROOM
plane { <0, 1, 0>, 0
    pigment {
      checker color Red, color Blue
    }
}

plane { <0, 0, 1>, 6
    pigment {
      checker color Yellow, color Blue
    }
}


// OBJECTS
vase
complexObject


// LIGHTS
light_source {
    <10, 10, -10> // <x, y, z>
    color <1.0, 1.0,  1.0> // <red, green, blue>
    area_light <5, 0, 0>, <0, 0, 5>, 5, 5 // <x, y, z>, <x, y, z>, size 1, size 2
    adaptive 1
    jitter
}


// CAMERA
camera {
    location <0, 2, -4>
    look_at  <0, 2,  0>
}

