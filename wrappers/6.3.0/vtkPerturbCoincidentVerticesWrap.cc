/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkPerturbCoincidentVerticesWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPerturbCoincidentVerticesWrap::ptpl;

VtkPerturbCoincidentVerticesWrap::VtkPerturbCoincidentVerticesWrap()
{ }

VtkPerturbCoincidentVerticesWrap::VtkPerturbCoincidentVerticesWrap(vtkSmartPointer<vtkPerturbCoincidentVertices> _native)
{ native = _native; }

VtkPerturbCoincidentVerticesWrap::~VtkPerturbCoincidentVerticesWrap()
{ }

void VtkPerturbCoincidentVerticesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPerturbCoincidentVertices").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PerturbCoincidentVertices").ToLocalChecked(), ConstructorGetter);
}

void VtkPerturbCoincidentVerticesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPerturbCoincidentVerticesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPerturbCoincidentVerticesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPerturbFactor", GetPerturbFactor);
	Nan::SetPrototypeMethod(tpl, "getPerturbFactor", GetPerturbFactor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPerturbFactor", SetPerturbFactor);
	Nan::SetPrototypeMethod(tpl, "setPerturbFactor", SetPerturbFactor);

	ptpl.Reset( tpl );
}

void VtkPerturbCoincidentVerticesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPerturbCoincidentVertices> native = vtkSmartPointer<vtkPerturbCoincidentVertices>::New();
		VtkPerturbCoincidentVerticesWrap* obj = new VtkPerturbCoincidentVerticesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPerturbCoincidentVerticesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerturbCoincidentVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkPerturbCoincidentVerticesWrap>(info.Holder());
	vtkPerturbCoincidentVertices *native = (vtkPerturbCoincidentVertices *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPerturbCoincidentVerticesWrap::GetPerturbFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerturbCoincidentVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkPerturbCoincidentVerticesWrap>(info.Holder());
	vtkPerturbCoincidentVertices *native = (vtkPerturbCoincidentVertices *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPerturbFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPerturbCoincidentVerticesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerturbCoincidentVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkPerturbCoincidentVerticesWrap>(info.Holder());
	vtkPerturbCoincidentVertices *native = (vtkPerturbCoincidentVertices *)wrapper->native.GetPointer();
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

void VtkPerturbCoincidentVerticesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerturbCoincidentVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkPerturbCoincidentVerticesWrap>(info.Holder());
	vtkPerturbCoincidentVertices *native = (vtkPerturbCoincidentVertices *)wrapper->native.GetPointer();
	vtkPerturbCoincidentVertices * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPerturbCoincidentVerticesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPerturbCoincidentVerticesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPerturbCoincidentVerticesWrap *w = new VtkPerturbCoincidentVerticesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPerturbCoincidentVerticesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerturbCoincidentVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkPerturbCoincidentVerticesWrap>(info.Holder());
	vtkPerturbCoincidentVertices *native = (vtkPerturbCoincidentVertices *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPerturbCoincidentVertices * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPerturbCoincidentVerticesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPerturbCoincidentVerticesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPerturbCoincidentVerticesWrap *w = new VtkPerturbCoincidentVerticesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerturbCoincidentVerticesWrap::SetPerturbFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerturbCoincidentVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkPerturbCoincidentVerticesWrap>(info.Holder());
	vtkPerturbCoincidentVertices *native = (vtkPerturbCoincidentVertices *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPerturbFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

