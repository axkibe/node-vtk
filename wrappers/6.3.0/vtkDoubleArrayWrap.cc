/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataArrayWrap.h"
#include "vtkDoubleArrayWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDoubleArrayWrap::ptpl;

VtkDoubleArrayWrap::VtkDoubleArrayWrap()
{ }

VtkDoubleArrayWrap::VtkDoubleArrayWrap(vtkSmartPointer<vtkDoubleArray> _native)
{ native = _native; }

VtkDoubleArrayWrap::~VtkDoubleArrayWrap()
{ }

void VtkDoubleArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDoubleArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DoubleArray").ToLocalChecked(), ConstructorGetter);
}

void VtkDoubleArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDoubleArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDoubleArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeValueMax", GetDataTypeValueMax);
	Nan::SetPrototypeMethod(tpl, "getDataTypeValueMax", GetDataTypeValueMax);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeValueMin", GetDataTypeValueMin);
	Nan::SetPrototypeMethod(tpl, "getDataTypeValueMin", GetDataTypeValueMin);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkDoubleArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDoubleArray> native = vtkSmartPointer<vtkDoubleArray>::New();
		VtkDoubleArrayWrap* obj = new VtkDoubleArrayWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDoubleArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDoubleArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info.Holder());
	vtkDoubleArray *native = (vtkDoubleArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDoubleArrayWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDoubleArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info.Holder());
	vtkDoubleArray *native = (vtkDoubleArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDoubleArrayWrap::GetDataTypeValueMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDoubleArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info.Holder());
	vtkDoubleArray *native = (vtkDoubleArray *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeValueMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDoubleArrayWrap::GetDataTypeValueMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDoubleArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info.Holder());
	vtkDoubleArray *native = (vtkDoubleArray *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeValueMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDoubleArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDoubleArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info.Holder());
	vtkDoubleArray *native = (vtkDoubleArray *)wrapper->native.GetPointer();
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

void VtkDoubleArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDoubleArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info.Holder());
	vtkDoubleArray *native = (vtkDoubleArray *)wrapper->native.GetPointer();
	vtkDoubleArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDoubleArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDoubleArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDoubleArrayWrap *w = new VtkDoubleArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDoubleArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDoubleArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info.Holder());
	vtkDoubleArray *native = (vtkDoubleArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDoubleArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDoubleArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDoubleArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDoubleArrayWrap *w = new VtkDoubleArrayWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

