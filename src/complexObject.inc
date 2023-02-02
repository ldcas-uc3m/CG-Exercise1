#declare complexObject = 
union{
  difference {
    cylinder { <0, 0, 0> <0, 2.5, 0>, 1
      pigment { White }
    }
    box {
        <0, 0, -1>,  // Near lower left corner
        <1, 2.5, 1>   // Far upper right corner
        pigment { 
            color White // <red, green, blue, filter, transmit>
        }
    }
  }
  difference {
    cylinder { <5, 0, 0> <5, 2.5, 0>, 1
      pigment { White }
    }
    box {
        <4, 0, -1>,  // Near lower left corner
        <5, 2.5, 1>   // Far upper right corner
        pigment { 
            color White // <red, green, blue, filter, transmit>
        }
    }
  }
  box{
    <0, 0, -1>,
    <5, 2.5, 1>
    pigment{
        color White
    }
  }
};