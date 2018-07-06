/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkFillHolesFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFillHolesFilterWrap::ptpl;

VtkFillHolesFilterWrap::VtkFillHolesFilterWrap()
{ }

VtkFillHolesFilterWrap::VtkFillHolesFilterWrap(vtkSmartPointer<vtkFillHolesFilter> _native)
{ native = _native; }

VtkFillHolesFilterWrap::~VtkFillHolesFilterWrap()
{ }

void VtkFillHolesFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFillHolesFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FillHolesFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkFillHolesFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFillHolesFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFillHolesFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetHoleSize", GetHoleSize);
	Nan::SetPrototypeMethod(tpl, "getHoleSize", GetHoleSize);

	Nan::SetPrototypeMethod(tpl, "GetHoleSizeMaxValue", GetHoleSizeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHoleSizeMaxValue", GetHoleSizeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHoleSizeMinValue", GetHoleSizeMinValue);
	Nan::SetPrototypeMethod(tpl, "getHoleSizeMinValue", GetHoleSizeMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHoleSize", SetHoleSize);
	Nan::SetPrototypeMethod(tpl, "setHoleSize", SetHoleSize);

#ifdef VTK_NODE_PLUS_VTKFILLHOLESFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKFILLHOLESFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkFillHolesFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFillHolesFilter> native = vtkSmartPointer<vtkFillHolesFilter>::New();
		VtkFillHolesFilterWrap* obj = new VtkFillHolesFilterWrap(native);
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

void VtkFillHolesFilterWrap::GetHoleSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFillHolesFilterWrap *wrapper = ObjectWrap::Unwrap<VtkFillHolesFilterWrap>(info.Holder());
	vtkFillHolesFilter *native = (vtkFillHolesFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHoleSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFillHolesFilterWrap::GetHoleSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFillHolesFilterWrap *wrapper = ObjectWrap::Unwrap<VtkFillHolesFilterWrap>(info.Holder());
	vtkFillHolesFilter *native = (vtkFillHolesFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHoleSizeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFillHolesFilterWrap::GetHoleSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFillHolesFilterWrap *wrapper = ObjectWrap::Unwrap<VtkFillHolesFilterWrap>(info.Holder());
	vtkFillHolesFilter *native = (vtkFillHolesFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHoleSizeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFillHolesFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFillHolesFilterWrap *wrapper = ObjectWrap::Unwrap<VtkFillHolesFilterWrap>(info.Holder());
	vtkFillHolesFilter *native = (vtkFillHolesFilter *)wrapper->native.GetPointer();
	vtkFillHolesFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkFillHolesFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFillHolesFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFillHolesFilterWrap *w = new VtkFillHolesFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFillHolesFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFillHolesFilterWrap *wrapper = ObjectWrap::Unwrap<VtkFillHolesFilterWrap>(info.Holder());
	vtkFillHolesFilter *native = (vtkFillHolesFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkFillHolesFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkFillHolesFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFillHolesFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFillHolesFilterWrap *w = new VtkFillHolesFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFillHolesFilterWrap::SetHoleSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFillHolesFilterWrap *wrapper = ObjectWrap::Unwrap<VtkFillHolesFilterWrap>(info.Holder());
	vtkFillHolesFilter *native = (vtkFillHolesFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHoleSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

