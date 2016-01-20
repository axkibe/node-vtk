// makies a cone
'use strict';
var vtk, source, mapper, actor, renderer, renderWindow, renderWindowInteractor;

vtk = require('./vtk');

source = new vtk.coneSource( );
source.setResolution( 10 );

mapper = new vtk.polyDataMapper( );

mapper.setInputConnection(0, source.getOutputPort( 0 ) );

actor = new vtk.actor( );
actor.setMapper( mapper );

renderer = new vtk.renderer( );
renderer.addActor( actor );
renderer.setBackground( 0.3, 0.2, 0.1 );
renderer.resetCamera( );

renderWindow = new vtk.renderWindow( );
renderWindow.addRenderer( renderer );

renderWindowInteractor = new vtk.renderWindowInteractor( );
renderWindowInteractor.setRenderWindow( renderWindow );
renderWindowInteractor.setInteractorStyle( new vtk.interactorStyleTrackballCamera( ) );

renderWindow.render();

renderWindowInteractor.start( );
