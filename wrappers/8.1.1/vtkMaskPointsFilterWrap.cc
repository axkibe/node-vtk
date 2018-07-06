/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPointCloudFilterWrap.h"
#include "vtkMaskPointsFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMaskPointsFilterWrap::ptpl;

VtkMaskPointsFilterWrap::VtkMaskPointsFilterWrap()
{ }

VtkMaskPointsFilterWrap::VtkMaskPointsFilterWrap(vtkSmartPointer<vtkMaskPointsFilter> _native)
{ native = _native; }

VtkMaskPointsFilterWrap::~VtkMaskPointsFilterWrap()
{ }

void VtkMaskPointsFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMaskPointsFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MaskPointsFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkMaskPointsFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMaskPointsFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointCloudFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointCloudFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMaskPointsFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetEmptyValue", GetEmptyValue);
	Nan::SetPrototypeMethod(tpl, "getEmptyValue", GetEmptyValue);

	Nan::SetPrototypeMethod(tpl, "GetMask", GetMask);
	Nan::SetPrototypeMethod(tpl, "getMask", GetMask);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEmptyValue", SetEmptyValue);
	Nan::SetPrototypeMethod(tpl, "setEmptyValue", SetEmptyValue);

	Nan::SetPrototypeMethod(tpl, "SetMaskConnection", SetMaskConnection);
	Nan::SetPrototypeMethod(tpl, "setMaskConnection", SetMaskConnection);

	Nan::SetPrototypeMethod(tpl, "SetMaskData", SetMaskData);
	Nan::SetPrototypeMethod(tpl, "setMaskData", SetMaskData);

#ifdef VTK_NODE_PLUS_VTKMASKPOINTSFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMASKPOINTSFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMaskPointsFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMaskPointsFilter> native = vtkSmartPointer<vtkMaskPointsFilter>::New();
		VtkMaskPointsFilterWrap* obj = new VtkMaskPointsFilterWrap(native);
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

void VtkMaskPointsFilterWrap::GetEmptyValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsFilterWrap>(info.Holder());
	vtkMaskPointsFilter *native = (vtkMaskPointsFilter *)wrapper->native.GetPointer();
	unsigned char r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEmptyValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsFilterWrap::GetMask(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsFilterWrap>(info.Holder());
	vtkMaskPointsFilter *native = (vtkMaskPointsFilter *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMask();
	VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMaskPointsFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsFilterWrap>(info.Holder());
	vtkMaskPointsFilter *native = (vtkMaskPointsFilter *)wrapper->native.GetPointer();
	vtkMaskPointsFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMaskPointsFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMaskPointsFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMaskPointsFilterWrap *w = new VtkMaskPointsFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMaskPointsFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsFilterWrap>(info.Holder());
	vtkMaskPointsFilter *native = (vtkMaskPointsFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMaskPointsFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMaskPointsFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMaskPointsFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMaskPointsFilterWrap *w = new VtkMaskPointsFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskPointsFilterWrap::SetEmptyValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsFilterWrap>(info.Holder());
	vtkMaskPointsFilter *native = (vtkMaskPointsFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEmptyValue(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskPointsFilterWrap::SetMaskConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsFilterWrap>(info.Holder());
	vtkMaskPointsFilter *native = (vtkMaskPointsFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaskConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskPointsFilterWrap::SetMaskData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsFilterWrap>(info.Holder());
	vtkMaskPointsFilter *native = (vtkMaskPointsFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaskData(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
