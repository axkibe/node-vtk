/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkVolumeRayCastFunctionWrap.h"
#include "vtkVolumeRayCastCompositeFunctionWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVolumeRayCastCompositeFunctionWrap::ptpl;

VtkVolumeRayCastCompositeFunctionWrap::VtkVolumeRayCastCompositeFunctionWrap()
{ }

VtkVolumeRayCastCompositeFunctionWrap::VtkVolumeRayCastCompositeFunctionWrap(vtkSmartPointer<vtkVolumeRayCastCompositeFunction> _native)
{ native = _native; }

VtkVolumeRayCastCompositeFunctionWrap::~VtkVolumeRayCastCompositeFunctionWrap()
{ }

void VtkVolumeRayCastCompositeFunctionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVolumeRayCastCompositeFunction").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VolumeRayCastCompositeFunction").ToLocalChecked(), ConstructorGetter);
}

void VtkVolumeRayCastCompositeFunctionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVolumeRayCastCompositeFunctionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkVolumeRayCastFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkVolumeRayCastFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVolumeRayCastCompositeFunctionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompositeMethod", GetCompositeMethod);
	Nan::SetPrototypeMethod(tpl, "getCompositeMethod", GetCompositeMethod);

	Nan::SetPrototypeMethod(tpl, "GetCompositeMethodAsString", GetCompositeMethodAsString);
	Nan::SetPrototypeMethod(tpl, "getCompositeMethodAsString", GetCompositeMethodAsString);

	Nan::SetPrototypeMethod(tpl, "GetCompositeMethodMaxValue", GetCompositeMethodMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCompositeMethodMaxValue", GetCompositeMethodMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCompositeMethodMinValue", GetCompositeMethodMinValue);
	Nan::SetPrototypeMethod(tpl, "getCompositeMethodMinValue", GetCompositeMethodMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompositeMethod", SetCompositeMethod);
	Nan::SetPrototypeMethod(tpl, "setCompositeMethod", SetCompositeMethod);

	Nan::SetPrototypeMethod(tpl, "SetCompositeMethodToClassifyFirst", SetCompositeMethodToClassifyFirst);
	Nan::SetPrototypeMethod(tpl, "setCompositeMethodToClassifyFirst", SetCompositeMethodToClassifyFirst);

	Nan::SetPrototypeMethod(tpl, "SetCompositeMethodToInterpolateFirst", SetCompositeMethodToInterpolateFirst);
	Nan::SetPrototypeMethod(tpl, "setCompositeMethodToInterpolateFirst", SetCompositeMethodToInterpolateFirst);

	ptpl.Reset( tpl );
}

void VtkVolumeRayCastCompositeFunctionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVolumeRayCastCompositeFunction> native = vtkSmartPointer<vtkVolumeRayCastCompositeFunction>::New();
		VtkVolumeRayCastCompositeFunctionWrap* obj = new VtkVolumeRayCastCompositeFunctionWrap(native);
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

void VtkVolumeRayCastCompositeFunctionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeRayCastCompositeFunctionWrap::GetCompositeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompositeMethod();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeRayCastCompositeFunctionWrap::GetCompositeMethodAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompositeMethodAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeRayCastCompositeFunctionWrap::GetCompositeMethodMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompositeMethodMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeRayCastCompositeFunctionWrap::GetCompositeMethodMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompositeMethodMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeRayCastCompositeFunctionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
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

void VtkVolumeRayCastCompositeFunctionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
	vtkVolumeRayCastCompositeFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkVolumeRayCastCompositeFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumeRayCastCompositeFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeRayCastCompositeFunctionWrap *w = new VtkVolumeRayCastCompositeFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeRayCastCompositeFunctionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolumeRayCastCompositeFunction * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkVolumeRayCastCompositeFunctionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVolumeRayCastCompositeFunctionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeRayCastCompositeFunctionWrap *w = new VtkVolumeRayCastCompositeFunctionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeRayCastCompositeFunctionWrap::SetCompositeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompositeMethod(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeRayCastCompositeFunctionWrap::SetCompositeMethodToClassifyFirst(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompositeMethodToClassifyFirst();
}

void VtkVolumeRayCastCompositeFunctionWrap::SetCompositeMethodToInterpolateFirst(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeRayCastCompositeFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeRayCastCompositeFunctionWrap>(info.Holder());
	vtkVolumeRayCastCompositeFunction *native = (vtkVolumeRayCastCompositeFunction *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompositeMethodToInterpolateFirst();
}

