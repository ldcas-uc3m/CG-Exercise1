#include "colors.inc"
#include "shapes.inc"
#include "glass.inc"

#include "vase.inc"
#include "complexObject.inc"


// ROOM
plane { <0, 1, 0>, 0
    pigment {
      checker color Gray, color White
    }
  }

plane { <0, 0, 1>, 6
    pigment {
      checker color Gray, color White
    }
}


// OBJECTS
object {
    vase
}
// object {
//   complexObject
//   rotate <0,-25,0>
// }


// LIGHTS
light_source {
    <0, 5, 5> // <x, y, z>
    color <1.0, 1.0,  1.0> // <red, green, blue>
    area_light <5, 0, 0>, <0, 0, 5>, 5, 5 // <x, y, z>, <x, y, z>, size 1, size 2
    adaptive 1
    jitter
}


// CAMERA
// luisda's camera
camera {
    location <0, 1.5, -5.5>
    look_at  <0, 1.5,  0>
}

// cia's camera
// camera {
//     angle 50
//     location <2, 20, -30>
//     look_at <0, 1, 0>
// }