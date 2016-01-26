/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkExporterWrap.h"
#include "vtkOOGLExporterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOOGLExporterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOOGLExporterWrap::ptpl;

VtkOOGLExporterWrap::VtkOOGLExporterWrap()
{ }

VtkOOGLExporterWrap::VtkOOGLExporterWrap(vtkSmartPointer<vtkOOGLExporter> _native)
{ native = _native; }

VtkOOGLExporterWrap::~VtkOOGLExporterWrap()
{ }

void VtkOOGLExporterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOOGLExporter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OOGLExporter").ToLocalChecked(), ConstructorGetter);
}

void VtkOOGLExporterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOOGLExporterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExporterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExporterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOOGLExporterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkOOGLExporterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOOGLExporter> native = vtkSmartPointer<vtkOOGLExporter>::New();
		VtkOOGLExporterWrap* obj = new VtkOOGLExporterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOOGLExporterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOOGLExporterWrap *wrapper = ObjectWrap::Unwrap<VtkOOGLExporterWrap>(info.Holder());
	vtkOOGLExporter *native = (vtkOOGLExporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOOGLExporterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOOGLExporterWrap *wrapper = ObjectWrap::Unwrap<VtkOOGLExporterWrap>(info.Holder());
	vtkOOGLExporter *native = (vtkOOGLExporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOOGLExporterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOOGLExporterWrap *wrapper = ObjectWrap::Unwrap<VtkOOGLExporterWrap>(info.Holder());
	vtkOOGLExporter *native = (vtkOOGLExporter *)wrapper->native.GetPointer();
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

void VtkOOGLExporterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOOGLExporterWrap *wrapper = ObjectWrap::Unwrap<VtkOOGLExporterWrap>(info.Holder());
	vtkOOGLExporter *native = (vtkOOGLExporter *)wrapper->native.GetPointer();
	vtkOOGLExporter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOOGLExporterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOOGLExporterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOOGLExporterWrap *w = new VtkOOGLExporterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOOGLExporterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOOGLExporterWrap *wrapper = ObjectWrap::Unwrap<VtkOOGLExporterWrap>(info.Holder());
	vtkOOGLExporter *native = (vtkOOGLExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOOGLExporter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOOGLExporterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkOOGLExporterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOOGLExporterWrap *w = new VtkOOGLExporterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOOGLExporterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOOGLExporterWrap *wrapper = ObjectWrap::Unwrap<VtkOOGLExporterWrap>(info.Holder());
	vtkOOGLExporter *native = (vtkOOGLExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

