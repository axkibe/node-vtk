#include <nan.h>

#include <vtkConeSource.h>
#include <vtkPolyData.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>

#include "node-vtk.h"

using namespace v8;


NAN_METHOD( render )
{
	//Create a cone
	VtkConeSourceWrap *source = Nan::ObjectWrap::Unwrap<VtkConeSourceWrap>( info[ 0 ]->ToObject( ) );
 
	//Create a mapper and actor
	vtkSmartPointer<vtkPolyDataMapper> mapper = vtkSmartPointer<vtkPolyDataMapper>::New( );
	mapper->SetInputConnection( source->coneSource->GetOutputPort( ) );
 
	vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();
	actor->SetMapper( mapper );
 
	//Create a renderer, render window, and interactor
	vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
	vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
	renderWindow->AddRenderer( renderer );
	vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New( );
	renderWindowInteractor->SetRenderWindow( renderWindow );
 
	//Add the actors to the scene
	renderer->AddActor( actor );
	renderer->SetBackground( .3, .2, .1 );
 
	//Render and interact
	renderWindow->Render( );
	renderWindowInteractor->Start( );
}


