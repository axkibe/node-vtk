/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTriangularTCoordsWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTriangularTCoordsWrap::ptpl;

VtkTriangularTCoordsWrap::VtkTriangularTCoordsWrap()
{ }

VtkTriangularTCoordsWrap::VtkTriangularTCoordsWrap(vtkSmartPointer<vtkTriangularTCoords> _native)
{ native = _native; }

VtkTriangularTCoordsWrap::~VtkTriangularTCoordsWrap()
{ }

void VtkTriangularTCoordsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTriangularTCoords").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TriangularTCoords").ToLocalChecked(), ConstructorGetter);
}

void VtkTriangularTCoordsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTriangularTCoordsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTriangularTCoordsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKTRIANGULARTCOORDSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTRIANGULARTCOORDSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTriangularTCoordsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTriangularTCoords> native = vtkSmartPointer<vtkTriangularTCoords>::New();
		VtkTriangularTCoordsWrap* obj = new VtkTriangularTCoordsWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTriangularTCoordsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTCoordsWrap>(info.Holder());
	vtkTriangularTCoords *native = (vtkTriangularTCoords *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTriangularTCoordsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTCoordsWrap>(info.Holder());
	vtkTriangularTCoords *native = (vtkTriangularTCoords *)wrapper->native.GetPointer();
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

void VtkTriangularTCoordsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTCoordsWrap>(info.Holder());
	vtkTriangularTCoords *native = (vtkTriangularTCoords *)wrapper->native.GetPointer();
	vtkTriangularTCoords * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTriangularTCoordsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTriangularTCoordsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTriangularTCoordsWrap *w = new VtkTriangularTCoordsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTriangularTCoordsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTriangularTCoordsWrap *wrapper = ObjectWrap::Unwrap<VtkTriangularTCoordsWrap>(info.Holder());
	vtkTriangularTCoords *native = (vtkTriangularTCoords *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTriangularTCoords * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTriangularTCoordsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTriangularTCoordsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTriangularTCoordsWrap *w = new VtkTriangularTCoordsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

