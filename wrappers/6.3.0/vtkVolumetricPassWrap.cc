/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDefaultPassWrap.h"
#include "vtkVolumetricPassWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVolumetricPassWrap::ptpl;

VtkVolumetricPassWrap::VtkVolumetricPassWrap()
{ }

VtkVolumetricPassWrap::VtkVolumetricPassWrap(vtkSmartPointer<vtkVolumetricPass> _native)
{ native = _native; }

VtkVolumetricPassWrap::~VtkVolumetricPassWrap()
{ }

void VtkVolumetricPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVolumetricPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VolumetricPass").ToLocalChecked(), ConstructorGetter);
}

void VtkVolumetricPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVolumetricPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDefaultPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDefaultPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVolumetricPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKVOLUMETRICPASSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKVOLUMETRICPASSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkVolumetricPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVolumetricPass> native = vtkSmartPointer<vtkVolumetricPass>::New();
		VtkVolumetricPassWrap* obj = new VtkVolumetricPassWrap(native);
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

void VtkVolumetricPassWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumetricPassWrap *wrapper = ObjectWrap::Unwrap<VtkVolumetricPassWrap>(info.Holder());
	vtkVolumetricPass *native = (vtkVolumetricPass *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumetricPassWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumetricPassWrap *wrapper = ObjectWrap::Unwrap<VtkVolumetricPassWrap>(info.Holder());
	vtkVolumetricPass *native = (vtkVolumetricPass *)wrapper->native.GetPointer();
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

void VtkVolumetricPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumetricPassWrap *wrapper = ObjectWrap::Unwrap<VtkVolumetricPassWrap>(info.Holder());
	vtkVolumetricPass *native = (vtkVolumetricPass *)wrapper->native.GetPointer();
	vtkVolumetricPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkVolumetricPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumetricPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumetricPassWrap *w = new VtkVolumetricPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumetricPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumetricPassWrap *wrapper = ObjectWrap::Unwrap<VtkVolumetricPassWrap>(info.Holder());
	vtkVolumetricPass *native = (vtkVolumetricPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolumetricPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkVolumetricPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVolumetricPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumetricPassWrap *w = new VtkVolumetricPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

