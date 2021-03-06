/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkExtractVectorComponentsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractVectorComponentsWrap::ptpl;

VtkExtractVectorComponentsWrap::VtkExtractVectorComponentsWrap()
{ }

VtkExtractVectorComponentsWrap::VtkExtractVectorComponentsWrap(vtkSmartPointer<vtkExtractVectorComponents> _native)
{ native = _native; }

VtkExtractVectorComponentsWrap::~VtkExtractVectorComponentsWrap()
{ }

void VtkExtractVectorComponentsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractVectorComponents").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractVectorComponents").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractVectorComponentsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractVectorComponentsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractVectorComponentsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ExtractToFieldDataOff", ExtractToFieldDataOff);
	Nan::SetPrototypeMethod(tpl, "extractToFieldDataOff", ExtractToFieldDataOff);

	Nan::SetPrototypeMethod(tpl, "ExtractToFieldDataOn", ExtractToFieldDataOn);
	Nan::SetPrototypeMethod(tpl, "extractToFieldDataOn", ExtractToFieldDataOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExtractToFieldData", GetExtractToFieldData);
	Nan::SetPrototypeMethod(tpl, "getExtractToFieldData", GetExtractToFieldData);

	Nan::SetPrototypeMethod(tpl, "GetVxComponent", GetVxComponent);
	Nan::SetPrototypeMethod(tpl, "getVxComponent", GetVxComponent);

	Nan::SetPrototypeMethod(tpl, "GetVyComponent", GetVyComponent);
	Nan::SetPrototypeMethod(tpl, "getVyComponent", GetVyComponent);

	Nan::SetPrototypeMethod(tpl, "GetVzComponent", GetVzComponent);
	Nan::SetPrototypeMethod(tpl, "getVzComponent", GetVzComponent);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExtractToFieldData", SetExtractToFieldData);
	Nan::SetPrototypeMethod(tpl, "setExtractToFieldData", SetExtractToFieldData);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

#ifdef VTK_NODE_PLUS_VTKEXTRACTVECTORCOMPONENTSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEXTRACTVECTORCOMPONENTSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkExtractVectorComponentsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractVectorComponents> native = vtkSmartPointer<vtkExtractVectorComponents>::New();
		VtkExtractVectorComponentsWrap* obj = new VtkExtractVectorComponentsWrap(native);
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

void VtkExtractVectorComponentsWrap::ExtractToFieldDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractToFieldDataOff();
}

void VtkExtractVectorComponentsWrap::ExtractToFieldDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractToFieldDataOn();
}

void VtkExtractVectorComponentsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractVectorComponentsWrap::GetExtractToFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractToFieldData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractVectorComponentsWrap::GetVxComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVxComponent();
	VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractVectorComponentsWrap::GetVyComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVyComponent();
	VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractVectorComponentsWrap::GetVzComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVzComponent();
	VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractVectorComponentsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
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

void VtkExtractVectorComponentsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
	vtkExtractVectorComponents * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkExtractVectorComponentsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractVectorComponentsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractVectorComponentsWrap *w = new VtkExtractVectorComponentsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractVectorComponentsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractVectorComponents * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkExtractVectorComponentsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractVectorComponentsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractVectorComponentsWrap *w = new VtkExtractVectorComponentsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractVectorComponentsWrap::SetExtractToFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtractToFieldData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractVectorComponentsWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVectorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVectorComponentsWrap>(info.Holder());
	vtkExtractVectorComponents *native = (vtkExtractVectorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

