# node-vtk
VTK bindings for Node.js

This is a wrapper around VTK providing bindings to Node.js.

This module does not bring VTK itself but wraps around the version installed
on your system.

Installation
============

If all goes well simply this should do it:
```
npm install vtk
```

It will build the wrapper classes matching the VTK installed on your system.
Currently 8.1.1 is supported.

Building the wrappers might take a little while.

You might need to install following packages for example on Debian:
```
sudo apt-get install vtk8-dev qtbase5-dev
```

Usage
=====

For example drawing a cone:

```
// makes a cone
'use strict';
var vtk, source, mapper, actor, renderer, renderWindow, renderWindowInteractor;

vtk = require('vtk');

source = new vtk.ConeSource();
source.setResolution( 10 );

mapper = new vtk.PolyDataMapper();
mapper.setInputConnection( source.getOutputPort() );

actor = new vtk.Actor();
actor.setMapper( mapper );

renderer = new vtk.Renderer();
renderer.addActor( actor );
renderer.setBackground( 0.3, 0.2, 0.1 );
renderer.resetCamera();

renderWindow = new vtk.RenderWindow();
renderWindow.addRenderer( renderer );

renderWindowInteractor = new vtk.RenderWindowInteractor();
renderWindowInteractor.setRenderWindow( renderWindow );
renderWindowInteractor.setInteractorStyle( new vtk.InteractorStyleTrackballCamera() );

renderWindow.render();
renderWindowInteractor.start();
```

Note that the renderWinowInteractor.start() call does not return until the render window is closed.
This means the Node.js event loop is halted during this.

