/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCurveRepresentationWrap.h"
#include "vtkSplineRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkParametricSplineWrap.h"
#include "vtkDoubleArrayWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSplineRepresentationWrap::ptpl;

VtkSplineRepresentationWrap::VtkSplineRepresentationWrap()
{ }

VtkSplineRepresentationWrap::VtkSplineRepresentationWrap(vtkSmartPointer<vtkSplineRepresentation> _native)
{ native = _native; }

VtkSplineRepresentationWrap::~VtkSplineRepresentationWrap()
{ }

void VtkSplineRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSplineRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SplineRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkSplineRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSplineRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCurveRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCurveRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSplineRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHandlePositions", GetHandlePositions);
	Nan::SetPrototypeMethod(tpl, "getHandlePositions", GetHandlePositions);

	Nan::SetPrototypeMethod(tpl, "GetParametricSpline", GetParametricSpline);
	Nan::SetPrototypeMethod(tpl, "getParametricSpline", GetParametricSpline);

	Nan::SetPrototypeMethod(tpl, "GetPolyData", GetPolyData);
	Nan::SetPrototypeMethod(tpl, "getPolyData", GetPolyData);

	Nan::SetPrototypeMethod(tpl, "GetResolution", GetResolution);
	Nan::SetPrototypeMethod(tpl, "getResolution", GetResolution);

	Nan::SetPrototypeMethod(tpl, "GetSummedLength", GetSummedLength);
	Nan::SetPrototypeMethod(tpl, "getSummedLength", GetSummedLength);

	Nan::SetPrototypeMethod(tpl, "InitializeHandles", InitializeHandles);
	Nan::SetPrototypeMethod(tpl, "initializeHandles", InitializeHandles);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfHandles", SetNumberOfHandles);
	Nan::SetPrototypeMethod(tpl, "setNumberOfHandles", SetNumberOfHandles);

	Nan::SetPrototypeMethod(tpl, "SetParametricSpline", SetParametricSpline);
	Nan::SetPrototypeMethod(tpl, "setParametricSpline", SetParametricSpline);

	Nan::SetPrototypeMethod(tpl, "SetResolution", SetResolution);
	Nan::SetPrototypeMethod(tpl, "setResolution", SetResolution);

	ptpl.Reset( tpl );
}

void VtkSplineRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSplineRepresentation> native = vtkSmartPointer<vtkSplineRepresentation>::New();
		VtkSplineRepresentationWrap* obj = new VtkSplineRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSplineRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkSplineRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSplineRepresentationWrap::GetHandlePositions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	vtkDoubleArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandlePositions();
		VtkDoubleArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDoubleArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDoubleArrayWrap *w = new VtkDoubleArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineRepresentationWrap::GetParametricSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	vtkParametricSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParametricSpline();
		VtkParametricSplineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParametricSplineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricSplineWrap *w = new VtkParametricSplineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineRepresentationWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPolyData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineRepresentationWrap::GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineRepresentationWrap::GetSummedLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSummedLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineRepresentationWrap::InitializeHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->InitializeHandles(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkSplineRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	vtkSplineRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSplineRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplineRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineRepresentationWrap *w = new VtkSplineRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSplineRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSplineRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSplineRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSplineRepresentationWrap *w = new VtkSplineRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineRepresentationWrap::SetNumberOfHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfHandles(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineRepresentationWrap::SetParametricSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkParametricSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkParametricSplineWrap *a0 = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParametricSpline(
			(vtkParametricSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineRepresentationWrap::SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSplineRepresentationWrap>(info.Holder());
	vtkSplineRepresentation *native = (vtkSplineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

