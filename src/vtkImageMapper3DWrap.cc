/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractMapper3DWrap.h"
#include "vtkImageMapper3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkImageSliceWrap.h"
#include "vtkWindowWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkPlaneWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageMapper3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageMapper3DWrap::ptpl;

VtkImageMapper3DWrap::VtkImageMapper3DWrap()
{ }

VtkImageMapper3DWrap::VtkImageMapper3DWrap(vtkSmartPointer<vtkImageMapper3D> _native)
{ native = _native; }

VtkImageMapper3DWrap::~VtkImageMapper3DWrap()
{ }

void VtkImageMapper3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageMapper3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageMapper3D").ToLocalChecked(), ConstructorGetter);
}

void VtkImageMapper3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageMapper3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractMapper3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractMapper3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageMapper3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BackgroundOff", BackgroundOff);
	Nan::SetPrototypeMethod(tpl, "backgroundOff", BackgroundOff);

	Nan::SetPrototypeMethod(tpl, "BackgroundOn", BackgroundOn);
	Nan::SetPrototypeMethod(tpl, "backgroundOn", BackgroundOn);

	Nan::SetPrototypeMethod(tpl, "BorderOff", BorderOff);
	Nan::SetPrototypeMethod(tpl, "borderOff", BorderOff);

	Nan::SetPrototypeMethod(tpl, "BorderOn", BorderOn);
	Nan::SetPrototypeMethod(tpl, "borderOn", BorderOn);

	Nan::SetPrototypeMethod(tpl, "GetBackground", GetBackground);
	Nan::SetPrototypeMethod(tpl, "getBackground", GetBackground);

	Nan::SetPrototypeMethod(tpl, "GetBorder", GetBorder);
	Nan::SetPrototypeMethod(tpl, "getBorder", GetBorder);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectInput", GetDataObjectInput);
	Nan::SetPrototypeMethod(tpl, "getDataObjectInput", GetDataObjectInput);

	Nan::SetPrototypeMethod(tpl, "GetDataSetInput", GetDataSetInput);
	Nan::SetPrototypeMethod(tpl, "getDataSetInput", GetDataSetInput);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreads", GetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreads", GetNumberOfThreads);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreadsMaxValue", GetNumberOfThreadsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreadsMaxValue", GetNumberOfThreadsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreadsMinValue", GetNumberOfThreadsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreadsMinValue", GetNumberOfThreadsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSliceAtFocalPoint", GetSliceAtFocalPoint);
	Nan::SetPrototypeMethod(tpl, "getSliceAtFocalPoint", GetSliceAtFocalPoint);

	Nan::SetPrototypeMethod(tpl, "GetSliceFacesCamera", GetSliceFacesCamera);
	Nan::SetPrototypeMethod(tpl, "getSliceFacesCamera", GetSliceFacesCamera);

	Nan::SetPrototypeMethod(tpl, "GetSlicePlane", GetSlicePlane);
	Nan::SetPrototypeMethod(tpl, "getSlicePlane", GetSlicePlane);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBackground", SetBackground);
	Nan::SetPrototypeMethod(tpl, "setBackground", SetBackground);

	Nan::SetPrototypeMethod(tpl, "SetBorder", SetBorder);
	Nan::SetPrototypeMethod(tpl, "setBorder", SetBorder);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfThreads", SetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "setNumberOfThreads", SetNumberOfThreads);

	Nan::SetPrototypeMethod(tpl, "SetSliceAtFocalPoint", SetSliceAtFocalPoint);
	Nan::SetPrototypeMethod(tpl, "setSliceAtFocalPoint", SetSliceAtFocalPoint);

	Nan::SetPrototypeMethod(tpl, "SetSliceFacesCamera", SetSliceFacesCamera);
	Nan::SetPrototypeMethod(tpl, "setSliceFacesCamera", SetSliceFacesCamera);

	Nan::SetPrototypeMethod(tpl, "SliceAtFocalPointOff", SliceAtFocalPointOff);
	Nan::SetPrototypeMethod(tpl, "sliceAtFocalPointOff", SliceAtFocalPointOff);

	Nan::SetPrototypeMethod(tpl, "SliceAtFocalPointOn", SliceAtFocalPointOn);
	Nan::SetPrototypeMethod(tpl, "sliceAtFocalPointOn", SliceAtFocalPointOn);

	Nan::SetPrototypeMethod(tpl, "SliceFacesCameraOff", SliceFacesCameraOff);
	Nan::SetPrototypeMethod(tpl, "sliceFacesCameraOff", SliceFacesCameraOff);

	Nan::SetPrototypeMethod(tpl, "SliceFacesCameraOn", SliceFacesCameraOn);
	Nan::SetPrototypeMethod(tpl, "sliceFacesCameraOn", SliceFacesCameraOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkImageMapper3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageMapper3DWrap::BackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BackgroundOff();
}

void VtkImageMapper3DWrap::BackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BackgroundOn();
}

void VtkImageMapper3DWrap::BorderOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BorderOff();
}

void VtkImageMapper3DWrap::BorderOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BorderOn();
}

void VtkImageMapper3DWrap::GetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackground();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapper3DWrap::GetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapper3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageMapper3DWrap::GetDataObjectInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectInput();
		VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMapper3DWrap::GetDataSetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSetInput();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataSetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMapper3DWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMapper3DWrap::GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreads();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapper3DWrap::GetNumberOfThreadsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreadsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapper3DWrap::GetNumberOfThreadsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreadsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapper3DWrap::GetSliceAtFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceAtFocalPoint();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapper3DWrap::GetSliceFacesCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceFacesCamera();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapper3DWrap::GetSlicePlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	vtkPlane * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlicePlane();
		VtkPlaneWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlaneWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneWrap *w = new VtkPlaneWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMapper3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	vtkImageMapper3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageMapper3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageMapper3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMapper3DWrap *w = new VtkImageMapper3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMapper3DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImageSliceWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImageSliceWrap *a1 = ObjectWrap::Unwrap<VtkImageSliceWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkImageSlice *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageMapper3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageMapper3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkImageMapper3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageMapper3DWrap *w = new VtkImageMapper3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::SetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackground(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::SetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfThreads(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::SetSliceAtFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSliceAtFocalPoint(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::SetSliceFacesCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSliceFacesCamera(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapper3DWrap::SliceAtFocalPointOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SliceAtFocalPointOff();
}

void VtkImageMapper3DWrap::SliceAtFocalPointOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SliceAtFocalPointOn();
}

void VtkImageMapper3DWrap::SliceFacesCameraOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SliceFacesCameraOff();
}

void VtkImageMapper3DWrap::SliceFacesCameraOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info.Holder());
	vtkImageMapper3D *native = (vtkImageMapper3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SliceFacesCameraOn();
}

