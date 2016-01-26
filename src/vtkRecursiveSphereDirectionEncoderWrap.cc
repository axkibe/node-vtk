/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDirectionEncoderWrap.h"
#include "vtkRecursiveSphereDirectionEncoderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkRecursiveSphereDirectionEncoderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkRecursiveSphereDirectionEncoderWrap::ptpl;

VtkRecursiveSphereDirectionEncoderWrap::VtkRecursiveSphereDirectionEncoderWrap()
{ }

VtkRecursiveSphereDirectionEncoderWrap::VtkRecursiveSphereDirectionEncoderWrap(vtkSmartPointer<vtkRecursiveSphereDirectionEncoder> _native)
{ native = _native; }

VtkRecursiveSphereDirectionEncoderWrap::~VtkRecursiveSphereDirectionEncoderWrap()
{ }

void VtkRecursiveSphereDirectionEncoderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRecursiveSphereDirectionEncoder").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RecursiveSphereDirectionEncoder").ToLocalChecked(), ConstructorGetter);
}

void VtkRecursiveSphereDirectionEncoderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRecursiveSphereDirectionEncoderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDirectionEncoderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDirectionEncoderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRecursiveSphereDirectionEncoderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfEncodedDirections", GetNumberOfEncodedDirections);
	Nan::SetPrototypeMethod(tpl, "getNumberOfEncodedDirections", GetNumberOfEncodedDirections);

	Nan::SetPrototypeMethod(tpl, "GetRecursionDepth", GetRecursionDepth);
	Nan::SetPrototypeMethod(tpl, "getRecursionDepth", GetRecursionDepth);

	Nan::SetPrototypeMethod(tpl, "GetRecursionDepthMaxValue", GetRecursionDepthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRecursionDepthMaxValue", GetRecursionDepthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRecursionDepthMinValue", GetRecursionDepthMinValue);
	Nan::SetPrototypeMethod(tpl, "getRecursionDepthMinValue", GetRecursionDepthMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRecursionDepth", SetRecursionDepth);
	Nan::SetPrototypeMethod(tpl, "setRecursionDepth", SetRecursionDepth);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkRecursiveSphereDirectionEncoderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRecursiveSphereDirectionEncoder> native = vtkSmartPointer<vtkRecursiveSphereDirectionEncoder>::New();
		VtkRecursiveSphereDirectionEncoderWrap* obj = new VtkRecursiveSphereDirectionEncoderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRecursiveSphereDirectionEncoderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveSphereDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveSphereDirectionEncoderWrap>(info.Holder());
	vtkRecursiveSphereDirectionEncoder *native = (vtkRecursiveSphereDirectionEncoder *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRecursiveSphereDirectionEncoderWrap::GetNumberOfEncodedDirections(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveSphereDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveSphereDirectionEncoderWrap>(info.Holder());
	vtkRecursiveSphereDirectionEncoder *native = (vtkRecursiveSphereDirectionEncoder *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEncodedDirections();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveSphereDirectionEncoderWrap::GetRecursionDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveSphereDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveSphereDirectionEncoderWrap>(info.Holder());
	vtkRecursiveSphereDirectionEncoder *native = (vtkRecursiveSphereDirectionEncoder *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRecursionDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveSphereDirectionEncoderWrap::GetRecursionDepthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveSphereDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveSphereDirectionEncoderWrap>(info.Holder());
	vtkRecursiveSphereDirectionEncoder *native = (vtkRecursiveSphereDirectionEncoder *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRecursionDepthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveSphereDirectionEncoderWrap::GetRecursionDepthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveSphereDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveSphereDirectionEncoderWrap>(info.Holder());
	vtkRecursiveSphereDirectionEncoder *native = (vtkRecursiveSphereDirectionEncoder *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRecursionDepthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveSphereDirectionEncoderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveSphereDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveSphereDirectionEncoderWrap>(info.Holder());
	vtkRecursiveSphereDirectionEncoder *native = (vtkRecursiveSphereDirectionEncoder *)wrapper->native.GetPointer();
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

void VtkRecursiveSphereDirectionEncoderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveSphereDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveSphereDirectionEncoderWrap>(info.Holder());
	vtkRecursiveSphereDirectionEncoder *native = (vtkRecursiveSphereDirectionEncoder *)wrapper->native.GetPointer();
	vtkRecursiveSphereDirectionEncoder * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRecursiveSphereDirectionEncoderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRecursiveSphereDirectionEncoderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRecursiveSphereDirectionEncoderWrap *w = new VtkRecursiveSphereDirectionEncoderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRecursiveSphereDirectionEncoderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveSphereDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveSphereDirectionEncoderWrap>(info.Holder());
	vtkRecursiveSphereDirectionEncoder *native = (vtkRecursiveSphereDirectionEncoder *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRecursiveSphereDirectionEncoder * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRecursiveSphereDirectionEncoderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkRecursiveSphereDirectionEncoderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRecursiveSphereDirectionEncoderWrap *w = new VtkRecursiveSphereDirectionEncoderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRecursiveSphereDirectionEncoderWrap::SetRecursionDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveSphereDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveSphereDirectionEncoderWrap>(info.Holder());
	vtkRecursiveSphereDirectionEncoder *native = (vtkRecursiveSphereDirectionEncoder *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRecursionDepth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

