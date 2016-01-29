/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkVectorNormWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVectorNormWrap::ptpl;

VtkVectorNormWrap::VtkVectorNormWrap()
{ }

VtkVectorNormWrap::VtkVectorNormWrap(vtkSmartPointer<vtkVectorNorm> _native)
{ native = _native; }

VtkVectorNormWrap::~VtkVectorNormWrap()
{ }

void VtkVectorNormWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVectorNorm").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VectorNorm").ToLocalChecked(), ConstructorGetter);
}

void VtkVectorNormWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVectorNormWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVectorNormWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAttributeMode", GetAttributeMode);
	Nan::SetPrototypeMethod(tpl, "getAttributeMode", GetAttributeMode);

	Nan::SetPrototypeMethod(tpl, "GetAttributeModeAsString", GetAttributeModeAsString);
	Nan::SetPrototypeMethod(tpl, "getAttributeModeAsString", GetAttributeModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNormalize", GetNormalize);
	Nan::SetPrototypeMethod(tpl, "getNormalize", GetNormalize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NormalizeOff", NormalizeOff);
	Nan::SetPrototypeMethod(tpl, "normalizeOff", NormalizeOff);

	Nan::SetPrototypeMethod(tpl, "NormalizeOn", NormalizeOn);
	Nan::SetPrototypeMethod(tpl, "normalizeOn", NormalizeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAttributeMode", SetAttributeMode);
	Nan::SetPrototypeMethod(tpl, "setAttributeMode", SetAttributeMode);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToDefault", SetAttributeModeToDefault);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToDefault", SetAttributeModeToDefault);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToUseCellData", SetAttributeModeToUseCellData);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToUseCellData", SetAttributeModeToUseCellData);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToUsePointData", SetAttributeModeToUsePointData);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToUsePointData", SetAttributeModeToUsePointData);

	Nan::SetPrototypeMethod(tpl, "SetNormalize", SetNormalize);
	Nan::SetPrototypeMethod(tpl, "setNormalize", SetNormalize);

	ptpl.Reset( tpl );
}

void VtkVectorNormWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVectorNorm> native = vtkSmartPointer<vtkVectorNorm>::New();
		VtkVectorNormWrap* obj = new VtkVectorNormWrap(native);
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

void VtkVectorNormWrap::GetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributeMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVectorNormWrap::GetAttributeModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributeModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVectorNormWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVectorNormWrap::GetNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVectorNormWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
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

void VtkVectorNormWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	vtkVectorNorm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkVectorNormWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVectorNormWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVectorNormWrap *w = new VtkVectorNormWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVectorNormWrap::NormalizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeOff();
}

void VtkVectorNormWrap::NormalizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeOn();
}

void VtkVectorNormWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVectorNorm * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkVectorNormWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVectorNormWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVectorNormWrap *w = new VtkVectorNormWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVectorNormWrap::SetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAttributeMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVectorNormWrap::SetAttributeModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToDefault();
}

void VtkVectorNormWrap::SetAttributeModeToUseCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToUseCellData();
}

void VtkVectorNormWrap::SetAttributeModeToUsePointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToUsePointData();
}

void VtkVectorNormWrap::SetNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorNormWrap *wrapper = ObjectWrap::Unwrap<VtkVectorNormWrap>(info.Holder());
	vtkVectorNorm *native = (vtkVectorNorm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

