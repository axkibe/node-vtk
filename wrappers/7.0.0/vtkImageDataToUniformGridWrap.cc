/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkImageDataToUniformGridWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageDataToUniformGridWrap::ptpl;

VtkImageDataToUniformGridWrap::VtkImageDataToUniformGridWrap()
{ }

VtkImageDataToUniformGridWrap::VtkImageDataToUniformGridWrap(vtkSmartPointer<vtkImageDataToUniformGrid> _native)
{ native = _native; }

VtkImageDataToUniformGridWrap::~VtkImageDataToUniformGridWrap()
{ }

void VtkImageDataToUniformGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageDataToUniformGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageDataToUniformGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkImageDataToUniformGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageDataToUniformGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageDataToUniformGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetReverse", GetReverse);
	Nan::SetPrototypeMethod(tpl, "getReverse", GetReverse);

	Nan::SetPrototypeMethod(tpl, "GetReverseMaxValue", GetReverseMaxValue);
	Nan::SetPrototypeMethod(tpl, "getReverseMaxValue", GetReverseMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetReverseMinValue", GetReverseMinValue);
	Nan::SetPrototypeMethod(tpl, "getReverseMinValue", GetReverseMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReverseOff", ReverseOff);
	Nan::SetPrototypeMethod(tpl, "reverseOff", ReverseOff);

	Nan::SetPrototypeMethod(tpl, "ReverseOn", ReverseOn);
	Nan::SetPrototypeMethod(tpl, "reverseOn", ReverseOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetReverse", SetReverse);
	Nan::SetPrototypeMethod(tpl, "setReverse", SetReverse);

	ptpl.Reset( tpl );
}

void VtkImageDataToUniformGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageDataToUniformGrid> native = vtkSmartPointer<vtkImageDataToUniformGrid>::New();
		VtkImageDataToUniformGridWrap* obj = new VtkImageDataToUniformGridWrap(native);
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

void VtkImageDataToUniformGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageDataToUniformGridWrap::GetReverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReverse();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataToUniformGridWrap::GetReverseMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReverseMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataToUniformGridWrap::GetReverseMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReverseMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataToUniformGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
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

void VtkImageDataToUniformGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
	vtkImageDataToUniformGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageDataToUniformGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataToUniformGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataToUniformGridWrap *w = new VtkImageDataToUniformGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageDataToUniformGridWrap::ReverseOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseOff();
}

void VtkImageDataToUniformGridWrap::ReverseOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseOn();
}

void VtkImageDataToUniformGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageDataToUniformGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageDataToUniformGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDataToUniformGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataToUniformGridWrap *w = new VtkImageDataToUniformGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataToUniformGridWrap::SetReverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataToUniformGridWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataToUniformGridWrap>(info.Holder());
	vtkImageDataToUniformGrid *native = (vtkImageDataToUniformGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReverse(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

