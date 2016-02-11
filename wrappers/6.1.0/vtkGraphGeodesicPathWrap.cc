/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGeodesicPathWrap.h"
#include "vtkGraphGeodesicPathWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGraphGeodesicPathWrap::ptpl;

VtkGraphGeodesicPathWrap::VtkGraphGeodesicPathWrap()
{ }

VtkGraphGeodesicPathWrap::VtkGraphGeodesicPathWrap(vtkSmartPointer<vtkGraphGeodesicPath> _native)
{ native = _native; }

VtkGraphGeodesicPathWrap::~VtkGraphGeodesicPathWrap()
{ }

void VtkGraphGeodesicPathWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGraphGeodesicPath").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GraphGeodesicPath").ToLocalChecked(), ConstructorGetter);
}

void VtkGraphGeodesicPathWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGraphGeodesicPathWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGeodesicPathWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGeodesicPathWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGraphGeodesicPathWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkGraphGeodesicPathWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGraphGeodesicPathWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkGraphGeodesicPathWrap>(info.Holder());
	vtkGraphGeodesicPath *native = (vtkGraphGeodesicPath *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphGeodesicPathWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkGraphGeodesicPathWrap>(info.Holder());
	vtkGraphGeodesicPath *native = (vtkGraphGeodesicPath *)wrapper->native.GetPointer();
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

void VtkGraphGeodesicPathWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkGraphGeodesicPathWrap>(info.Holder());
	vtkGraphGeodesicPath *native = (vtkGraphGeodesicPath *)wrapper->native.GetPointer();
	vtkGraphGeodesicPath * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGraphGeodesicPathWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphGeodesicPathWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphGeodesicPathWrap *w = new VtkGraphGeodesicPathWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphGeodesicPathWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphGeodesicPathWrap *wrapper = ObjectWrap::Unwrap<VtkGraphGeodesicPathWrap>(info.Holder());
	vtkGraphGeodesicPath *native = (vtkGraphGeodesicPath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphGeodesicPath * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGraphGeodesicPathWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphGeodesicPathWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphGeodesicPathWrap *w = new VtkGraphGeodesicPathWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

