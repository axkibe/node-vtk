/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataArrayWrap.h"
#include "vtkShortArrayWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkShortArrayWrap::ptpl;

VtkShortArrayWrap::VtkShortArrayWrap()
{ }

VtkShortArrayWrap::VtkShortArrayWrap(vtkSmartPointer<vtkShortArray> _native)
{ native = _native; }

VtkShortArrayWrap::~VtkShortArrayWrap()
{ }

void VtkShortArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkShortArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ShortArray").ToLocalChecked(), ConstructorGetter);
}

void VtkShortArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkShortArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkShortArrayWrap").ToLocalChecked());
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

#ifdef VTK_NODE_PLUS_VTKSHORTARRAYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSHORTARRAYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkShortArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkShortArray> native = vtkSmartPointer<vtkShortArray>::New();
		VtkShortArrayWrap* obj = new VtkShortArrayWrap(native);
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

void VtkShortArrayWrap::FastDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShortArrayWrap *wrapper = ObjectWrap::Unwrap<VtkShortArrayWrap>(info.Holder());
	vtkShortArray *native = (vtkShortArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		vtkShortArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->FastDownCast(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		VtkShortArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkShortArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkShortArrayWrap *w = new VtkShortArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkShortArrayWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShortArrayWrap *wrapper = ObjectWrap::Unwrap<VtkShortArrayWrap>(info.Holder());
	vtkShortArray *native = (vtkShortArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkShortArrayWrap::GetDataTypeValueMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShortArrayWrap *wrapper = ObjectWrap::Unwrap<VtkShortArrayWrap>(info.Holder());
	vtkShortArray *native = (vtkShortArray *)wrapper->native.GetPointer();
	short r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeValueMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkShortArrayWrap::GetDataTypeValueMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShortArrayWrap *wrapper = ObjectWrap::Unwrap<VtkShortArrayWrap>(info.Holder());
	vtkShortArray *native = (vtkShortArray *)wrapper->native.GetPointer();
	short r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeValueMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkShortArrayWrap::GetValueRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShortArrayWrap *wrapper = ObjectWrap::Unwrap<VtkShortArrayWrap>(info.Holder());
	vtkShortArray *native = (vtkShortArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		short const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetValueRange(
			info[0]->Int32Value()
		);
		Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(short));
		Local<v8::Int16Array> at = v8::Int16Array::New(ab, 0, 2);
		memcpy(ab->GetContents().Data(), r, 2 * sizeof(short));
		info.GetReturnValue().Set(at);
		return;
	}
	short const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValueRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(short));
	Local<v8::Int16Array> at = v8::Int16Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(short));
	info.GetReturnValue().Set(at);
}

void VtkShortArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShortArrayWrap *wrapper = ObjectWrap::Unwrap<VtkShortArrayWrap>(info.Holder());
	vtkShortArray *native = (vtkShortArray *)wrapper->native.GetPointer();
	vtkShortArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkShortArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkShortArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkShortArrayWrap *w = new VtkShortArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkShortArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShortArrayWrap *wrapper = ObjectWrap::Unwrap<VtkShortArrayWrap>(info.Holder());
	vtkShortArray *native = (vtkShortArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkShortArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkShortArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkShortArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkShortArrayWrap *w = new VtkShortArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

