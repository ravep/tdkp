###############################################
# test script for piezo / poisson calculation #
###############################################

set options(-verbose) 1
set options(-conf)    "conf.tcl"
set options(-model)   "kp6x6WZ"
set options(-grid)    "sphere3d.asc.gz"
set options(-piezo)   1
set options(-scale_coords) 0.6
set options(-strain)  1
set options(-plot)    "strain"
set options(-bands)   1


source "../../../input/tow.tcl"

