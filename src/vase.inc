/*
  This object was designed for a 460x815px image.
  As POV-Ray's coordinate system (for some FUCKING reason)
  depends on the output image size, if you want to use this
  in any other image size, you must use transformations to
  to keep the object's shape.
*/

#declare out_vase_texture = 
    texture {
        pigment {
            color Red filter 0.8
        }
    }
    
#declare in_vase_texture = 
    texture {
        pigment {
            color Red filter 1
        }
    }

#declare vase_finnish = 
    finish {
        ambient 0
        diffuse 0.1
        reflection .20
        specular 1
        roughness 0.001
	}		

#declare vase_interior = 
    interior {
        ior 1.3
    }


#declare outer_vase = sor {
    6,  // number of points
    <0.0, -0.5>,
    <1.0, 0.0>,
    <1.8, 0.9>,
    <0.7, 2.0>,
    <0.4, 3.4>,
    <0.3, 4.3>
    texture { out_vase_texture }
    finish { vase_finnish }		
    interior { vase_interior }
    hollow off
}


#declare inner_vase = union {
    sor {
        6,  // number of points
        <1.1, 0.0>,
        <1.3, 0.3>,
        <1.7, 0.9>,
        <0.6, 2.0>,
        <0.3, 3.4>,
        <0.2, 4.3>
        open  // no caps
        texture { in_vase_texture }
        finish { vase_finnish }		
        interior { vase_interior }
        hollow on
        // translate <0, -0.5, 0> // <x, y, z>
    }

    difference {  // bottom part
        sphere { 
            <0, 3, 0>, 2.98 // <x, y, z>, radius
            texture { in_vase_texture }
            finish { vase_finnish }		
            interior { vase_interior }
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