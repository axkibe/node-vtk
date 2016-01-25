/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataArrayWrap.h"
#include "vtkIntArrayWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkIntArrayWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkIntArrayWrap::ptpl;

VtkIntArrayWrap::VtkIntArrayWrap()
{ }

VtkIntArrayWrap::VtkIntArrayWrap(vtkSmartPointer<vtkIntArray> _native)
{ native = _native; }

VtkIntArrayWrap::~VtkIntArrayWrap()
{ }

void VtkIntArrayWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataArrayWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataArrayWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkIntArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkIntArray").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("IntArray").ToLocalChecked(),tpl->GetFunction());
}

void VtkIntArrayWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

}

void VtkIntArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIntArray> native = vtkSmartPointer<vtkIntArray>::New();
		VtkIntArrayWrap* obj = new VtkIntArrayWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkIntArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIntArrayWrap>(info.Holder());
	vtkIntArray *native = (vtkIntArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIntArrayWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIntArrayWrap>(info.Holder());
	vtkIntArray *native = (vtkIntArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIntArrayWrap::GetDataTypeValueMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIntArrayWrap>(info.Holder());
	vtkIntArray *native = (vtkIntArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeValueMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIntArrayWrap::GetDataTypeValueMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIntArrayWrap>(info.Holder());
	vtkIntArray *native = (vtkIntArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeValueMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIntArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIntArrayWrap>(info.Holder());
	vtkIntArray *native = (vtkIntArray *)wrapper->native.GetPointer();
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

void VtkIntArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIntArrayWrap>(info.Holder());
	vtkIntArray *native = (vtkIntArray *)wrapper->native.GetPointer();
	vtkIntArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIntArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIntArrayWrap *w = new VtkIntArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIntArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkIntArrayWrap>(info.Holder());
	vtkIntArray *native = (vtkIntArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIntArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkIntArrayWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIntArrayWrap *w = new VtkIntArrayWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
