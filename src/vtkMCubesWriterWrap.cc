/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWriterWrap.h"
#include "vtkMCubesWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMCubesWriterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkMCubesWriterWrap::ptpl;

VtkMCubesWriterWrap::VtkMCubesWriterWrap()
{ }

VtkMCubesWriterWrap::VtkMCubesWriterWrap(vtkSmartPointer<vtkMCubesWriter> _native)
{ native = _native; }

VtkMCubesWriterWrap::~VtkMCubesWriterWrap()
{ }

void VtkMCubesWriterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkMCubesWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkMCubesWriter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MCubesWriter").ToLocalChecked(),tpl->GetFunction());
}

void VtkMCubesWriterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetLimitsFileName", GetLimitsFileName);
	Nan::SetPrototypeMethod(tpl, "getLimitsFileName", GetLimitsFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetLimitsFileName", SetLimitsFileName);
	Nan::SetPrototypeMethod(tpl, "setLimitsFileName", SetLimitsFileName);

}

void VtkMCubesWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMCubesWriter> native = vtkSmartPointer<vtkMCubesWriter>::New();
		VtkMCubesWriterWrap* obj = new VtkMCubesWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMCubesWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesWriterWrap>(info.Holder());
	vtkMCubesWriter *native = (vtkMCubesWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMCubesWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesWriterWrap>(info.Holder());
	vtkMCubesWriter *native = (vtkMCubesWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMCubesWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesWriterWrap>(info.Holder());
	vtkMCubesWriter *native = (vtkMCubesWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInput(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataWrap *w = new VtkPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMCubesWriterWrap::GetLimitsFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesWriterWrap>(info.Holder());
	vtkMCubesWriter *native = (vtkMCubesWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLimitsFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMCubesWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesWriterWrap>(info.Holder());
	vtkMCubesWriter *native = (vtkMCubesWriter *)wrapper->native.GetPointer();
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

void VtkMCubesWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesWriterWrap>(info.Holder());
	vtkMCubesWriter *native = (vtkMCubesWriter *)wrapper->native.GetPointer();
	vtkMCubesWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMCubesWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMCubesWriterWrap *w = new VtkMCubesWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMCubesWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesWriterWrap>(info.Holder());
	vtkMCubesWriter *native = (vtkMCubesWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMCubesWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkMCubesWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMCubesWriterWrap *w = new VtkMCubesWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMCubesWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesWriterWrap>(info.Holder());
	vtkMCubesWriter *native = (vtkMCubesWriter *)wrapper->native.GetPointer();
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

void VtkMCubesWriterWrap::SetLimitsFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesWriterWrap>(info.Holder());
	vtkMCubesWriter *native = (vtkMCubesWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLimitsFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

