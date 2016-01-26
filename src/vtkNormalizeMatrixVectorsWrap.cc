/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkArrayDataAlgorithmWrap.h"
#include "vtkNormalizeMatrixVectorsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkNormalizeMatrixVectorsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkNormalizeMatrixVectorsWrap::ptpl;

VtkNormalizeMatrixVectorsWrap::VtkNormalizeMatrixVectorsWrap()
{ }

VtkNormalizeMatrixVectorsWrap::VtkNormalizeMatrixVectorsWrap(vtkSmartPointer<vtkNormalizeMatrixVectors> _native)
{ native = _native; }

VtkNormalizeMatrixVectorsWrap::~VtkNormalizeMatrixVectorsWrap()
{ }

void VtkNormalizeMatrixVectorsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNormalizeMatrixVectors").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NormalizeMatrixVectors").ToLocalChecked(), ConstructorGetter);
}

void VtkNormalizeMatrixVectorsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNormalizeMatrixVectorsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkArrayDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkArrayDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNormalizeMatrixVectorsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPValue", GetPValue);
	Nan::SetPrototypeMethod(tpl, "getPValue", GetPValue);

	Nan::SetPrototypeMethod(tpl, "GetVectorDimension", GetVectorDimension);
	Nan::SetPrototypeMethod(tpl, "getVectorDimension", GetVectorDimension);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPValue", SetPValue);
	Nan::SetPrototypeMethod(tpl, "setPValue", SetPValue);

	Nan::SetPrototypeMethod(tpl, "SetVectorDimension", SetVectorDimension);
	Nan::SetPrototypeMethod(tpl, "setVectorDimension", SetVectorDimension);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkNormalizeMatrixVectorsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNormalizeMatrixVectors> native = vtkSmartPointer<vtkNormalizeMatrixVectors>::New();
		VtkNormalizeMatrixVectorsWrap* obj = new VtkNormalizeMatrixVectorsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkNormalizeMatrixVectorsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNormalizeMatrixVectorsWrap *wrapper = ObjectWrap::Unwrap<VtkNormalizeMatrixVectorsWrap>(info.Holder());
	vtkNormalizeMatrixVectors *native = (vtkNormalizeMatrixVectors *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNormalizeMatrixVectorsWrap::GetPValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNormalizeMatrixVectorsWrap *wrapper = ObjectWrap::Unwrap<VtkNormalizeMatrixVectorsWrap>(info.Holder());
	vtkNormalizeMatrixVectors *native = (vtkNormalizeMatrixVectors *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNormalizeMatrixVectorsWrap::GetVectorDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNormalizeMatrixVectorsWrap *wrapper = ObjectWrap::Unwrap<VtkNormalizeMatrixVectorsWrap>(info.Holder());
	vtkNormalizeMatrixVectors *native = (vtkNormalizeMatrixVectors *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNormalizeMatrixVectorsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNormalizeMatrixVectorsWrap *wrapper = ObjectWrap::Unwrap<VtkNormalizeMatrixVectorsWrap>(info.Holder());
	vtkNormalizeMatrixVectors *native = (vtkNormalizeMatrixVectors *)wrapper->native.GetPointer();
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

void VtkNormalizeMatrixVectorsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNormalizeMatrixVectorsWrap *wrapper = ObjectWrap::Unwrap<VtkNormalizeMatrixVectorsWrap>(info.Holder());
	vtkNormalizeMatrixVectors *native = (vtkNormalizeMatrixVectors *)wrapper->native.GetPointer();
	vtkNormalizeMatrixVectors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkNormalizeMatrixVectorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkNormalizeMatrixVectorsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNormalizeMatrixVectorsWrap *w = new VtkNormalizeMatrixVectorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNormalizeMatrixVectorsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNormalizeMatrixVectorsWrap *wrapper = ObjectWrap::Unwrap<VtkNormalizeMatrixVectorsWrap>(info.Holder());
	vtkNormalizeMatrixVectors *native = (vtkNormalizeMatrixVectors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkNormalizeMatrixVectors * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkNormalizeMatrixVectorsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkNormalizeMatrixVectorsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNormalizeMatrixVectorsWrap *w = new VtkNormalizeMatrixVectorsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNormalizeMatrixVectorsWrap::SetPValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNormalizeMatrixVectorsWrap *wrapper = ObjectWrap::Unwrap<VtkNormalizeMatrixVectorsWrap>(info.Holder());
	vtkNormalizeMatrixVectors *native = (vtkNormalizeMatrixVectors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNormalizeMatrixVectorsWrap::SetVectorDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNormalizeMatrixVectorsWrap *wrapper = ObjectWrap::Unwrap<VtkNormalizeMatrixVectorsWrap>(info.Holder());
	vtkNormalizeMatrixVectors *native = (vtkNormalizeMatrixVectors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVectorDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

