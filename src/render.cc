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

#include "vtkRenderWindowWrap.h"

using namespace v8;


NAN_METHOD( render )
{
    VtkRenderWindowWrap *w = Nan::ObjectWrap::Unwrap<VtkRenderWindowWrap>( info[ 0 ]->ToObject( ) );
	vtkRenderWindow *renderWindow = (vtkRenderWindow *) w->native.GetPointer();

	vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New( );
	renderWindowInteractor->SetRenderWindow( renderWindow );
	renderWindowInteractor->Initialize( );

	vtkInteractorStyle* style1 = vtkInteractorStyleTrackballCamera::New();
	renderWindowInteractor->SetInteractorStyle(style1);

	//Render and interact
	renderWindow->Render( );
	renderWindowInteractor->Start( );
}


