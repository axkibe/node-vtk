/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataArrayWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkIdTypeArrayWrap::ptpl;

VtkIdTypeArrayWrap::VtkIdTypeArrayWrap()
{ }

VtkIdTypeArrayWrap::VtkIdTypeArrayWrap(vtkSmartPointer<vtkIdTypeArray> _native)
{ native = _native; }

VtkIdTypeArrayWrap::~VtkIdTypeArrayWrap()
{ }

void VtkIdTypeArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkIdTypeArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("IdTypeArray").ToLocalChecked(), ConstructorGetter);
}

void VtkIdTypeArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkIdTypeArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkIdTypeArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkIdTypeArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIdTypeArray> native = vtkSmartPointer<vtkIdTypeArray>::New();
		VtkIdTypeArrayWrap* obj = new VtkIdTypeArrayWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkIdTypeArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIdTypeArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info.Holder());
	vtkIdTypeArray *native = (vtkIdTypeArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIdTypeArrayWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIdTypeArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info.Holder());
	vtkIdTypeArray *native = (vtkIdTypeArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIdTypeArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIdTypeArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info.Holder());
	vtkIdTypeArray *native = (vtkIdTypeArray *)wrapper->native.GetPointer();
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

void VtkIdTypeArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIdTypeArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info.Holder());
	vtkIdTypeArray *native = (vtkIdTypeArray *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIdTypeArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIdTypeArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info.Holder());
	vtkIdTypeArray *native = (vtkIdTypeArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIdTypeArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkIdTypeArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

