/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkGenericMovieWriterWrap.h"
#include "vtkOggTheoraWriterWrap.h"

using namespace v8;

extern void vtkIOMovieNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkGenericMovieWriterWrap::Init( exports );
	VtkOggTheoraWriterWrap::Init( exports );
}

