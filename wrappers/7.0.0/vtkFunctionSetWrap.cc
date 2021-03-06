/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkFunctionSetWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFunctionSetWrap::ptpl;

VtkFunctionSetWrap::VtkFunctionSetWrap()
{ }

VtkFunctionSetWrap::VtkFunctionSetWrap(vtkSmartPointer<vtkFunctionSet> _native)
{ native = _native; }

VtkFunctionSetWrap::~VtkFunctionSetWrap()
{ }

void VtkFunctionSetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFunctionSet").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FunctionSet").ToLocalChecked(), ConstructorGetter);
}

void VtkFunctionSetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFunctionSetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFunctionSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFunctions", GetNumberOfFunctions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFunctions", GetNumberOfFunctions);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfIndependentVariables", GetNumberOfIndependentVariables);
	Nan::SetPrototypeMethod(tpl, "getNumberOfIndependentVariables", GetNumberOfIndependentVariables);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKFUNCTIONSETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKFUNCTIONSETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkFunctionSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkFunctionSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionSetWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionSetWrap>(info.Holder());
	vtkFunctionSet *native = (vtkFunctionSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFunctionSetWrap::GetNumberOfFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionSetWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionSetWrap>(info.Holder());
	vtkFunctionSet *native = (vtkFunctionSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFunctions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFunctionSetWrap::GetNumberOfIndependentVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionSetWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionSetWrap>(info.Holder());
	vtkFunctionSet *native = (vtkFunctionSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfIndependentVariables();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFunctionSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionSetWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionSetWrap>(info.Holder());
	vtkFunctionSet *native = (vtkFunctionSet *)wrapper->native.GetPointer();
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

void VtkFunctionSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionSetWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionSetWrap>(info.Holder());
	vtkFunctionSet *native = (vtkFunctionSet *)wrapper->native.GetPointer();
	vtkFunctionSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkFunctionSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFunctionSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFunctionSetWrap *w = new VtkFunctionSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFunctionSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionSetWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionSetWrap>(info.Holder());
	vtkFunctionSet *native = (vtkFunctionSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFunctionSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkFunctionSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFunctionSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFunctionSetWrap *w = new VtkFunctionSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

