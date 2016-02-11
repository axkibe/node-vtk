/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkExporterWrap.h"
#include "vtkIVExporterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkIVExporterWrap::ptpl;

VtkIVExporterWrap::VtkIVExporterWrap()
{ }

VtkIVExporterWrap::VtkIVExporterWrap(vtkSmartPointer<vtkIVExporter> _native)
{ native = _native; }

VtkIVExporterWrap::~VtkIVExporterWrap()
{ }

void VtkIVExporterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkIVExporter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("IVExporter").ToLocalChecked(), ConstructorGetter);
}

void VtkIVExporterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkIVExporterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExporterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExporterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkIVExporterWrap").ToLocalChecked());
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

	ptpl.Reset( tpl );
}

void VtkIVExporterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIVExporter> native = vtkSmartPointer<vtkIVExporter>::New();
		VtkIVExporterWrap* obj = new VtkIVExporterWrap(native);
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

void VtkIVExporterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVExporterWrap *wrapper = ObjectWrap::Unwrap<VtkIVExporterWrap>(info.Holder());
	vtkIVExporter *native = (vtkIVExporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIVExporterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVExporterWrap *wrapper = ObjectWrap::Unwrap<VtkIVExporterWrap>(info.Holder());
	vtkIVExporter *native = (vtkIVExporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIVExporterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVExporterWrap *wrapper = ObjectWrap::Unwrap<VtkIVExporterWrap>(info.Holder());
	vtkIVExporter *native = (vtkIVExporter *)wrapper->native.GetPointer();
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

void VtkIVExporterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVExporterWrap *wrapper = ObjectWrap::Unwrap<VtkIVExporterWrap>(info.Holder());
	vtkIVExporter *native = (vtkIVExporter *)wrapper->native.GetPointer();
	vtkIVExporter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkIVExporterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIVExporterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIVExporterWrap *w = new VtkIVExporterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIVExporterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVExporterWrap *wrapper = ObjectWrap::Unwrap<VtkIVExporterWrap>(info.Holder());
	vtkIVExporter *native = (vtkIVExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIVExporter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkIVExporterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIVExporterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIVExporterWrap *w = new VtkIVExporterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIVExporterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVExporterWrap *wrapper = ObjectWrap::Unwrap<VtkIVExporterWrap>(info.Holder());
	vtkIVExporter *native = (vtkIVExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

