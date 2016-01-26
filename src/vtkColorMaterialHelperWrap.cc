/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkColorMaterialHelperWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkColorMaterialHelperWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkColorMaterialHelperWrap::ptpl;

VtkColorMaterialHelperWrap::VtkColorMaterialHelperWrap()
{ }

VtkColorMaterialHelperWrap::VtkColorMaterialHelperWrap(vtkSmartPointer<vtkColorMaterialHelper> _native)
{ native = _native; }

VtkColorMaterialHelperWrap::~VtkColorMaterialHelperWrap()
{ }

void VtkColorMaterialHelperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkColorMaterialHelper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ColorMaterialHelper").ToLocalChecked(), ConstructorGetter);
}

void VtkColorMaterialHelperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkColorMaterialHelperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkColorMaterialHelperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrepareForRendering", PrepareForRendering);
	Nan::SetPrototypeMethod(tpl, "prepareForRendering", PrepareForRendering);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetUniformVariables", SetUniformVariables);
	Nan::SetPrototypeMethod(tpl, "setUniformVariables", SetUniformVariables);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkColorMaterialHelperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkColorMaterialHelper> native = vtkSmartPointer<vtkColorMaterialHelper>::New();
		VtkColorMaterialHelperWrap* obj = new VtkColorMaterialHelperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkColorMaterialHelperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorMaterialHelperWrap *wrapper = ObjectWrap::Unwrap<VtkColorMaterialHelperWrap>(info.Holder());
	vtkColorMaterialHelper *native = (vtkColorMaterialHelper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkColorMaterialHelperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorMaterialHelperWrap *wrapper = ObjectWrap::Unwrap<VtkColorMaterialHelperWrap>(info.Holder());
	vtkColorMaterialHelper *native = (vtkColorMaterialHelper *)wrapper->native.GetPointer();
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

void VtkColorMaterialHelperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorMaterialHelperWrap *wrapper = ObjectWrap::Unwrap<VtkColorMaterialHelperWrap>(info.Holder());
	vtkColorMaterialHelper *native = (vtkColorMaterialHelper *)wrapper->native.GetPointer();
	vtkColorMaterialHelper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkColorMaterialHelperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkColorMaterialHelperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkColorMaterialHelperWrap *w = new VtkColorMaterialHelperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkColorMaterialHelperWrap::PrepareForRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorMaterialHelperWrap *wrapper = ObjectWrap::Unwrap<VtkColorMaterialHelperWrap>(info.Holder());
	vtkColorMaterialHelper *native = (vtkColorMaterialHelper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PrepareForRendering();
}

void VtkColorMaterialHelperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorMaterialHelperWrap *wrapper = ObjectWrap::Unwrap<VtkColorMaterialHelperWrap>(info.Holder());
	vtkColorMaterialHelper *native = (vtkColorMaterialHelper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkColorMaterialHelperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorMaterialHelperWrap *wrapper = ObjectWrap::Unwrap<VtkColorMaterialHelperWrap>(info.Holder());
	vtkColorMaterialHelper *native = (vtkColorMaterialHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkColorMaterialHelper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkColorMaterialHelperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkColorMaterialHelperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkColorMaterialHelperWrap *w = new VtkColorMaterialHelperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkColorMaterialHelperWrap::SetUniformVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorMaterialHelperWrap *wrapper = ObjectWrap::Unwrap<VtkColorMaterialHelperWrap>(info.Holder());
	vtkColorMaterialHelper *native = (vtkColorMaterialHelper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetUniformVariables();
}

