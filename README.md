EPICS (http://www.aps.anl.gov/epics/) build files for re2c (http://re2c.org/)


You should be able to build re2c.exe on Windows by adding these 
files into the EPICS build tree. You will need to update configure/RELEASE
as per usual to define where EPICS_BASE is.
 
Contains a copy of re2c-0.16 with one small change to fillpoints.cc
which was just to undef the default INFINITY macro
