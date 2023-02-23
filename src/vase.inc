/*
  This object was designed for a 460x815px image.
  As POV-Ray's coordinate system (for some FUCKING reason)
  depends on the output image size, if you want to use this
  in any other image size, you must use transformations to
  to keep the object's shape.
*/

#include "textures.inc"

// TEXTURES

#declare butt_texture = texture {
    Glass3
}

#declare vase_texture = texture {
    Glass3
    pigment {
        color Red filter 1
    }
}

#declare vase_finnish = finish {
    ambient 0
    diffuse 0.1
    reflection .20
    specular 1
    roughness 0.001
}

#declare vase_interior = interior {
    ior 1.3
}


// OBJECTS

#declare outer_vase = sor {
    6,  // number of points
    <0.0, -0.5>,
    <1.0, 0.0>,
    <1.8, 0.9>,
    <0.7, 2.0>,
    <0.4, 3.4>,
    <0.3, 4.3>
    hollow off
}


#declare full_vase = difference {
    object { outer_vase }
    object {
        outer_vase
        scale <0.9, 1.0, 0.9> // <x, y, z>
    }
}


#declare cutting_box = merge {
    sphere {  // cutting sphere
        <0, 2.4, 0>, 2.5 // <x, y, z>, radius
    }
    box {
        <-3, 0.3, -3>, <3, 3, 3> // <x, y, z> near lower left corner, <x, y, z> far upper right corner
        
    }
}

#declare butt = difference {
    object{outer_vase}
    object{cutting_box}
}


#declare top_vase = difference {
    object { 
        full_vase
    }
    object { 
        butt
        // bigger to avoid surface overlapping
        scale <1.001, 1.001, 1.001> 
    }
}

#declare vase = union {
    // top part
    
    object {
        top_vase
        texture { vase_texture }
        finish { vase_finnish }
        interior { vase_interior }
    }

    // bottom part
    object {
        butt
        texture { butt_texture }
        finish { vase_finnish }
        // interior { vase_interior }
    }
}
