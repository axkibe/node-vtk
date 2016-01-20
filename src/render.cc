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

#include "vtkRendererWrap.h"

using namespace v8;


NAN_METHOD( render )
{
    VtkRendererWrap *w = Nan::ObjectWrap::Unwrap<VtkRendererWrap>( info[ 0 ]->ToObject( ) );
	vtkRenderer *renderer = (vtkRenderer *) w->native.GetPointer();

	vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
	renderWindow->AddRenderer( renderer );

	vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New( );
	renderWindowInteractor->SetRenderWindow( renderWindow );
	renderWindowInteractor->Initialize( );

	vtkInteractorStyle* style1 = vtkInteractorStyleTrackballCamera::New();
	renderWindowInteractor->SetInteractorStyle(style1);

	//Render and interact
	renderWindow->Render( );
	renderWindowInteractor->Start( );
}


