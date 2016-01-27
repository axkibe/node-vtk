/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageMaskBitsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageMaskBitsWrap::ptpl;

VtkImageMaskBitsWrap::VtkImageMaskBitsWrap()
{ }

VtkImageMaskBitsWrap::VtkImageMaskBitsWrap(vtkSmartPointer<vtkImageMaskBits> _native)
{ native = _native; }

VtkImageMaskBitsWrap::~VtkImageMaskBitsWrap()
{ }

void VtkImageMaskBitsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageMaskBits").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageMaskBits").ToLocalChecked(), ConstructorGetter);
}

void VtkImageMaskBitsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageMaskBitsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageMaskBitsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOperation", GetOperation);
	Nan::SetPrototypeMethod(tpl, "getOperation", GetOperation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOperation", SetOperation);
	Nan::SetPrototypeMethod(tpl, "setOperation", SetOperation);

	Nan::SetPrototypeMethod(tpl, "SetOperationToAnd", SetOperationToAnd);
	Nan::SetPrototypeMethod(tpl, "setOperationToAnd", SetOperationToAnd);

	Nan::SetPrototypeMethod(tpl, "SetOperationToNand", SetOperationToNand);
	Nan::SetPrototypeMethod(tpl, "setOperationToNand", SetOperationToNand);

	Nan::SetPrototypeMethod(tpl, "SetOperationToNor", SetOperationToNor);
	Nan::SetPrototypeMethod(tpl, "setOperationToNor", SetOperationToNor);

	Nan::SetPrototypeMethod(tpl, "SetOperationToOr", SetOperationToOr);
	Nan::SetPrototypeMethod(tpl, "setOperationToOr", SetOperationToOr);

	Nan::SetPrototypeMethod(tpl, "SetOperationToXor", SetOperationToXor);
	Nan::SetPrototypeMethod(tpl, "setOperationToXor", SetOperationToXor);

	ptpl.Reset( tpl );
}

void VtkImageMaskBitsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageMaskBits> native = vtkSmartPointer<vtkImageMaskBits>::New();
		VtkImageMaskBitsWrap* obj = new VtkImageMaskBitsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageMaskBitsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageMaskBitsWrap::GetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMaskBitsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
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

void VtkImageMaskBitsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	vtkImageMaskBits * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageMaskBitsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageMaskBitsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMaskBitsWrap *w = new VtkImageMaskBitsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMaskBitsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageMaskBits * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageMaskBitsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageMaskBitsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageMaskBitsWrap *w = new VtkImageMaskBitsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMaskBitsWrap::SetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOperation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMaskBitsWrap::SetOperationToAnd(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToAnd();
}

void VtkImageMaskBitsWrap::SetOperationToNand(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToNand();
}

void VtkImageMaskBitsWrap::SetOperationToNor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToNor();
}

void VtkImageMaskBitsWrap::SetOperationToOr(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToOr();
}

void VtkImageMaskBitsWrap::SetOperationToXor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskBitsWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskBitsWrap>(info.Holder());
	vtkImageMaskBits *native = (vtkImageMaskBits *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToXor();
}

