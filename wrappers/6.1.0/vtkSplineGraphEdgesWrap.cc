/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkSplineGraphEdgesWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSplineWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSplineGraphEdgesWrap::ptpl;

VtkSplineGraphEdgesWrap::VtkSplineGraphEdgesWrap()
{ }

VtkSplineGraphEdgesWrap::VtkSplineGraphEdgesWrap(vtkSmartPointer<vtkSplineGraphEdges> _native)
{ native = _native; }

VtkSplineGraphEdgesWrap::~VtkSplineGraphEdgesWrap()
{ }

void VtkSplineGraphEdgesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSplineGraphEdges").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SplineGraphEdges").ToLocalChecked(), ConstructorGetter);
}

void VtkSplineGraphEdgesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSplineGraphEdgesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSplineGraphEdgesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSpline", GetSpline);
	Nan::SetPrototypeMethod(tpl, "getSpline", GetSpline);

	Nan::SetPrototypeMethod(tpl, "GetSplineType", GetSplineType);
	Nan::SetPrototypeMethod(tpl, "getSplineType", GetSplineType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSpline", SetSpline);
	Nan::SetPrototypeMethod(tpl, "setSpline", SetSpline);

	Nan::SetPrototypeMethod(tpl, "SetSplineType", SetSplineType);
	Nan::SetPrototypeMethod(tpl, "setSplineType", SetSplineType);

	ptpl.Reset( tpl );
}

void VtkSplineGraphEdgesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSplineGraphEdges> native = vtkSmartPointer<vtkSplineGraphEdges>::New();
		VtkSplineGraphEdgesWrap* obj = new VtkSplineGraphEdgesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSplineGraphEdgesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineGraphEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkSplineGraphEdgesWrap>(info.Holder());
	vtkSplineGraphEdges *native = (vtkSplineGraphEdges *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSplineGraphEdgesWrap::GetSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineGraphEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkSplineGraphEdgesWrap>(info.Holder());
	vtkSplineGraphEdges *native = (vtkSplineGraphEdges *)wrapper->native.GetPointer();
	vtkSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSpline();
		VtkSplineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineWrap *w = new VtkSplineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineGraphEdgesWrap::GetSplineType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineGraphEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkSplineGraphEdgesWrap>(info.Holder());
	vtkSplineGraphEdges *native = (vtkSplineGraphEdges *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplineType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineGraphEdgesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineGraphEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkSplineGraphEdgesWrap>(info.Holder());
	vtkSplineGraphEdges *native = (vtkSplineGraphEdges *)wrapper->native.GetPointer();
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

void VtkSplineGraphEdgesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineGraphEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkSplineGraphEdgesWrap>(info.Holder());
	vtkSplineGraphEdges *native = (vtkSplineGraphEdges *)wrapper->native.GetPointer();
	vtkSplineGraphEdges * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSplineGraphEdgesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplineGraphEdgesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineGraphEdgesWrap *w = new VtkSplineGraphEdgesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineGraphEdgesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineGraphEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkSplineGraphEdgesWrap>(info.Holder());
	vtkSplineGraphEdges *native = (vtkSplineGraphEdges *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSplineGraphEdges * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSplineGraphEdgesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSplineGraphEdgesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSplineGraphEdgesWrap *w = new VtkSplineGraphEdgesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineGraphEdgesWrap::SetSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineGraphEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkSplineGraphEdgesWrap>(info.Holder());
	vtkSplineGraphEdges *native = (vtkSplineGraphEdges *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSplineWrap *a0 = ObjectWrap::Unwrap<VtkSplineWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSpline(
			(vtkSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineGraphEdgesWrap::SetSplineType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineGraphEdgesWrap *wrapper = ObjectWrap::Unwrap<VtkSplineGraphEdgesWrap>(info.Holder());
	vtkSplineGraphEdges *native = (vtkSplineGraphEdges *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSplineType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

