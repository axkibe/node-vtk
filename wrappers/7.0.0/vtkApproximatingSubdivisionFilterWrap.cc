/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkApproximatingSubdivisionFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkApproximatingSubdivisionFilterWrap::ptpl;

VtkApproximatingSubdivisionFilterWrap::VtkApproximatingSubdivisionFilterWrap()
{ }

VtkApproximatingSubdivisionFilterWrap::VtkApproximatingSubdivisionFilterWrap(vtkSmartPointer<vtkApproximatingSubdivisionFilter> _native)
{ native = _native; }

VtkApproximatingSubdivisionFilterWrap::~VtkApproximatingSubdivisionFilterWrap()
{ }

void VtkApproximatingSubdivisionFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkApproximatingSubdivisionFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ApproximatingSubdivisionFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkApproximatingSubdivisionFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkApproximatingSubdivisionFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkApproximatingSubdivisionFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSubdivisions", GetNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSubdivisions", GetNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSubdivisions", SetNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSubdivisions", SetNumberOfSubdivisions);

	ptpl.Reset( tpl );
}

void VtkApproximatingSubdivisionFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkApproximatingSubdivisionFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApproximatingSubdivisionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkApproximatingSubdivisionFilterWrap>(info.Holder());
	vtkApproximatingSubdivisionFilter *native = (vtkApproximatingSubdivisionFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkApproximatingSubdivisionFilterWrap::GetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApproximatingSubdivisionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkApproximatingSubdivisionFilterWrap>(info.Holder());
	vtkApproximatingSubdivisionFilter *native = (vtkApproximatingSubdivisionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSubdivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApproximatingSubdivisionFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApproximatingSubdivisionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkApproximatingSubdivisionFilterWrap>(info.Holder());
	vtkApproximatingSubdivisionFilter *native = (vtkApproximatingSubdivisionFilter *)wrapper->native.GetPointer();
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

void VtkApproximatingSubdivisionFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApproximatingSubdivisionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkApproximatingSubdivisionFilterWrap>(info.Holder());
	vtkApproximatingSubdivisionFilter *native = (vtkApproximatingSubdivisionFilter *)wrapper->native.GetPointer();
	vtkApproximatingSubdivisionFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkApproximatingSubdivisionFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkApproximatingSubdivisionFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkApproximatingSubdivisionFilterWrap *w = new VtkApproximatingSubdivisionFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkApproximatingSubdivisionFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApproximatingSubdivisionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkApproximatingSubdivisionFilterWrap>(info.Holder());
	vtkApproximatingSubdivisionFilter *native = (vtkApproximatingSubdivisionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkApproximatingSubdivisionFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkApproximatingSubdivisionFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkApproximatingSubdivisionFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkApproximatingSubdivisionFilterWrap *w = new VtkApproximatingSubdivisionFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApproximatingSubdivisionFilterWrap::SetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApproximatingSubdivisionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkApproximatingSubdivisionFilterWrap>(info.Holder());
	vtkApproximatingSubdivisionFilter *native = (vtkApproximatingSubdivisionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSubdivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
