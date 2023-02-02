#declare complexObject = 
union{
    merge{
        difference {
            cylinder { <0, 0, 0> <0, 2.5, 0>, 1
            pigment { color White transmit 0.8}
            }
            box {
                <0, 0, -1>,  // Near lower left corner
                <1, 2.5, 1>   // Far upper right corner
                pigment { 
                    color White transmit 1// <red, green, blue, filter, transmit>
                }
                scale 1.0001
            }
        }
        difference {
            cylinder { <5, 0, 0> <5, 2.5, 0>, 1
            pigment { color White transmit 0.8}
            }
            box {
                <4, 0, -1>,  // Near lower left corner
                <5, 2.5, 1>   // Far upper right corner
                pigment { 
                    color White transmit 1// <red, green, blue, filter, transmit>
                }
                scale 1.0001
            }
        }
        box{
            <0, 0, -1>,
            <5, 2.5, 1>
            pigment{
                color White transmit 0.8
            }
        }
         lathe { 
            cubic_spline 8,
            <-30,8.5>,<0,2.5>, <4,6.5>, <3,8.5>, <3.5,11.75>, <4,12.25>,<4,12>,<4,20>
            texture{pigment{color White transmit 0}}
        }
    }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
  sphere{
    <0,0.5,0>,
    0.5
    pigment { 
        Black
    }
  }
};