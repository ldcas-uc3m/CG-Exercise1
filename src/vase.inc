#declare vase = 

cone {
    <0, 1, 2>, 2 // <x, y, z>, center & radius of one end
    <0, 5, 2>, 0.25 // <x, y, z>, center & radius of the other end
    texture {
        
        pigment { 
            color Red // <red, green, blue, filter, transmit>
        }
        finish {
            phong 0.25
            reflection { 
                0.00 metallic 0.00
            }
        } 
    }
}