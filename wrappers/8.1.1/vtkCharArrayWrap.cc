/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataArrayWrap.h"
#include "vtkCharArrayWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCharArrayWrap::ptpl;

VtkCharArrayWrap::VtkCharArrayWrap()
{ }

VtkCharArrayWrap::VtkCharArrayWrap(vtkSmartPointer<vtkCharArray> _native)
{ native = _native; }

VtkCharArrayWrap::~VtkCharArrayWrap()
{ }

void VtkCharArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCharArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CharArray").ToLocalChecked(), ConstructorGetter);
}

void VtkCharArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCharArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCharArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FastDownCast", FastDownCast);
	Nan::SetPrototypeMethod(tpl, "fastDownCast", FastDownCast);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeValueMax", GetDataTypeValueMax);
	Nan::SetPrototypeMethod(tpl, "getDataTypeValueMax", GetDataTypeValueMax);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeValueMin", GetDataTypeValueMin);
	Nan::SetPrototypeMethod(tpl, "getDataTypeValueMin", GetDataTypeValueMin);

	Nan::SetPrototypeMethod(tpl, "GetValueRange", GetValueRange);
	Nan::SetPrototypeMethod(tpl, "getValueRange", GetValueRange);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKCHARARRAYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCHARARRAYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCharArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCharArray> native = vtkSmartPointer<vtkCharArray>::New();
		VtkCharArrayWrap* obj = new VtkCharArrayWrap(native);
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

void VtkCharArrayWrap::FastDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCharArrayWrap>(info.Holder());
	vtkCharArray *native = (vtkCharArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		vtkCharArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->FastDownCast(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		VtkCharArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCharArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCharArrayWrap *w = new VtkCharArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCharArrayWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCharArrayWrap>(info.Holder());
	vtkCharArray *native = (vtkCharArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCharArrayWrap::GetDataTypeValueMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCharArrayWrap>(info.Holder());
	vtkCharArray *native = (vtkCharArray *)wrapper->native.GetPointer();
	char r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeValueMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCharArrayWrap::GetDataTypeValueMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCharArrayWrap>(info.Holder());
	vtkCharArray *native = (vtkCharArray *)wrapper->native.GetPointer();
	char r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeValueMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCharArrayWrap::GetValueRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCharArrayWrap>(info.Holder());
	vtkCharArray *native = (vtkCharArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetValueRange(
			info[0]->Int32Value()
		);
		Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(char));
		Local<v8::Int8Array> at = v8::Int8Array::New(ab, 0, 2);
		memcpy(ab->GetContents().Data(), r, 2 * sizeof(char));
		info.GetReturnValue().Set(at);
		return;
	}
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValueRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(char));
	Local<v8::Int8Array> at = v8::Int8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(char));
	info.GetReturnValue().Set(at);
}

void VtkCharArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCharArrayWrap>(info.Holder());
	vtkCharArray *native = (vtkCharArray *)wrapper->native.GetPointer();
	vtkCharArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCharArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCharArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCharArrayWrap *w = new VtkCharArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCharArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCharArrayWrap>(info.Holder());
	vtkCharArray *native = (vtkCharArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCharArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCharArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCharArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCharArrayWrap *w = new VtkCharArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

