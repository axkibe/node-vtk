#include <nan.h>

#include <vtkObject.h>
#include <vtkCamera.h>
#include <vtkCommand.h>
#include <vtkCallbackCommand.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkPolyData.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>

#include "vtkActorWrap.h"

using namespace v8;


NAN_METHOD( render )
{
//	VtkPolyDataMapperWrap *mw = Nan::ObjectWrap::Unwrap<VtkPolyDataMapperWrap>( info[ 0 ]->ToObject( ) );
//	vtkPolyDataMapper *mapper = (vtkPolyDataMapper *) mw->native.GetPointer();

//	vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();
//	actor->SetMapper( mapper );

    VtkActorWrap *w = Nan::ObjectWrap::Unwrap<VtkActorWrap>( info[ 0 ]->ToObject( ) );
	vtkActor *actor = (vtkActor *) w->native.GetPointer();

	//Create a renderer, render window, and interactor
	vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
	vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
	renderWindow->AddRenderer( renderer );

	vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New( );
	renderWindowInteractor->SetRenderWindow( renderWindow );
	renderWindowInteractor->Initialize( );

	vtkInteractorStyle* style1 = vtkInteractorStyleTrackballCamera::New();
	renderWindowInteractor->SetInteractorStyle(style1);

	//Add the actors to the scene
	renderer->AddActor( actor );
	renderer->SetBackground( .3, .2, .1 );
	renderer->ResetCamera( );

	//Render and interact
	renderWindow->Render( );
	renderWindowInteractor->Start( );
}


