/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkQuadratureSchemeDictionaryGeneratorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkQuadratureSchemeDictionaryGeneratorWrap::ptpl;

VtkQuadratureSchemeDictionaryGeneratorWrap::VtkQuadratureSchemeDictionaryGeneratorWrap()
{ }

VtkQuadratureSchemeDictionaryGeneratorWrap::VtkQuadratureSchemeDictionaryGeneratorWrap(vtkSmartPointer<vtkQuadratureSchemeDictionaryGenerator> _native)
{ native = _native; }

VtkQuadratureSchemeDictionaryGeneratorWrap::~VtkQuadratureSchemeDictionaryGeneratorWrap()
{ }

void VtkQuadratureSchemeDictionaryGeneratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkQuadratureSchemeDictionaryGenerator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("QuadratureSchemeDictionaryGenerator").ToLocalChecked(), ConstructorGetter);
}

void VtkQuadratureSchemeDictionaryGeneratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkQuadratureSchemeDictionaryGeneratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkQuadratureSchemeDictionaryGeneratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkQuadratureSchemeDictionaryGeneratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkQuadratureSchemeDictionaryGenerator> native = vtkSmartPointer<vtkQuadratureSchemeDictionaryGenerator>::New();
		VtkQuadratureSchemeDictionaryGeneratorWrap* obj = new VtkQuadratureSchemeDictionaryGeneratorWrap(native);
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

void VtkQuadratureSchemeDictionaryGeneratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDictionaryGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDictionaryGeneratorWrap>(info.Holder());
	vtkQuadratureSchemeDictionaryGenerator *native = (vtkQuadratureSchemeDictionaryGenerator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkQuadratureSchemeDictionaryGeneratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDictionaryGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDictionaryGeneratorWrap>(info.Holder());
	vtkQuadratureSchemeDictionaryGenerator *native = (vtkQuadratureSchemeDictionaryGenerator *)wrapper->native.GetPointer();
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

void VtkQuadratureSchemeDictionaryGeneratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDictionaryGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDictionaryGeneratorWrap>(info.Holder());
	vtkQuadratureSchemeDictionaryGenerator *native = (vtkQuadratureSchemeDictionaryGenerator *)wrapper->native.GetPointer();
	vtkQuadratureSchemeDictionaryGenerator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkQuadratureSchemeDictionaryGeneratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkQuadratureSchemeDictionaryGeneratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuadratureSchemeDictionaryGeneratorWrap *w = new VtkQuadratureSchemeDictionaryGeneratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadratureSchemeDictionaryGeneratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadratureSchemeDictionaryGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkQuadratureSchemeDictionaryGeneratorWrap>(info.Holder());
	vtkQuadratureSchemeDictionaryGenerator *native = (vtkQuadratureSchemeDictionaryGenerator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkQuadratureSchemeDictionaryGenerator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkQuadratureSchemeDictionaryGeneratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkQuadratureSchemeDictionaryGeneratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkQuadratureSchemeDictionaryGeneratorWrap *w = new VtkQuadratureSchemeDictionaryGeneratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
