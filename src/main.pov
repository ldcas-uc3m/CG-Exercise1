#include "colors.inc"    // The include files contain
#include "stones.inc"    // pre-defined scene elements
#include "textures.inc"    // pre-defined scene elements
#include "shapes.inc"
#include "glass.inc"
#include "metals.inc"
#include "woods.inc"
#include "vase.inc"

camera {
    location <0, 3, -4>
    look_at  <0, 1,  2>
}


vase


light_source {
    <10, 10, -10> // <x, y, z>
    color <1.0, 1.0,  1.0> // <red, green, blue>
    area_light <5, 0, 0>, <0, 0, 5>, 5, 5 // <x, y, z>, <x, y, z>, size 1, size 2
    adaptive 1
    jitter
}

plane { <0, 1, 0>, -1
    pigment {
      checker color Red, color Blue
    }
  }


plane { <0, 0, 1>, 70
    pigment {
      checker color Yellow, color Blue
    }
  }


