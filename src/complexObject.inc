#declare complexObject = sphere {
    <-1, 1, 1>, 1  // <x, y, z>, radius
    texture {
        
        pigment { 
            color Yellow  // <red, green, blue, filter, transmit>
        }
        finish {
            phong 0.25
            reflection { 
                0.00 metallic 0.00
            }
        } 
    }
}
