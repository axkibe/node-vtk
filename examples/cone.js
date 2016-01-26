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
