/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnsignedLongLongArrayWrap.h"
#include "vtkTypeUInt64ArrayWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTypeUInt64ArrayWrap::ptpl;

VtkTypeUInt64ArrayWrap::VtkTypeUInt64ArrayWrap()
{ }

VtkTypeUInt64ArrayWrap::VtkTypeUInt64ArrayWrap(vtkSmartPointer<vtkTypeUInt64Array> _native)
{ native = _native; }

VtkTypeUInt64ArrayWrap::~VtkTypeUInt64ArrayWrap()
{ }

void VtkTypeUInt64ArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTypeUInt64Array").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TypeUInt64Array").ToLocalChecked(), ConstructorGetter);
}

void VtkTypeUInt64ArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTypeUInt64ArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnsignedLongLongArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnsignedLongLongArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTypeUInt64ArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FastDownCast", FastDownCast);
	Nan::SetPrototypeMethod(tpl, "fastDownCast", FastDownCast);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKTYPEUINT64ARRAYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTYPEUINT64ARRAYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTypeUInt64ArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTypeUInt64Array> native = vtkSmartPointer<vtkTypeUInt64Array>::New();
		VtkTypeUInt64ArrayWrap* obj = new VtkTypeUInt64ArrayWrap(native);
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

void VtkTypeUInt64ArrayWrap::FastDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeUInt64ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeUInt64ArrayWrap>(info.Holder());
	vtkTypeUInt64Array *native = (vtkTypeUInt64Array *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		vtkTypeUInt64Array * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->FastDownCast(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		VtkTypeUInt64ArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTypeUInt64ArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTypeUInt64ArrayWrap *w = new VtkTypeUInt64ArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTypeUInt64ArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeUInt64ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeUInt64ArrayWrap>(info.Holder());
	vtkTypeUInt64Array *native = (vtkTypeUInt64Array *)wrapper->native.GetPointer();
	vtkTypeUInt64Array * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTypeUInt64ArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTypeUInt64ArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTypeUInt64ArrayWrap *w = new VtkTypeUInt64ArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTypeUInt64ArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeUInt64ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeUInt64ArrayWrap>(info.Holder());
	vtkTypeUInt64Array *native = (vtkTypeUInt64Array *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTypeUInt64Array * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTypeUInt64ArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTypeUInt64ArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTypeUInt64ArrayWrap *w = new VtkTypeUInt64ArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

