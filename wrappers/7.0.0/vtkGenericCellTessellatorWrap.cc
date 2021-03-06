/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkGenericCellTessellatorWrap.h"
#include "vtkCollectionWrap.h"
#include "vtkGenericDataSetWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericCellTessellatorWrap::ptpl;

VtkGenericCellTessellatorWrap::VtkGenericCellTessellatorWrap()
{ }

VtkGenericCellTessellatorWrap::VtkGenericCellTessellatorWrap(vtkSmartPointer<vtkGenericCellTessellator> _native)
{ native = _native; }

VtkGenericCellTessellatorWrap::~VtkGenericCellTessellatorWrap()
{ }

void VtkGenericCellTessellatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericCellTessellator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericCellTessellator").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericCellTessellatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericCellTessellatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericCellTessellatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetErrorMetrics", GetErrorMetrics);
	Nan::SetPrototypeMethod(tpl, "getErrorMetrics", GetErrorMetrics);

	Nan::SetPrototypeMethod(tpl, "GetMeasurement", GetMeasurement);
	Nan::SetPrototypeMethod(tpl, "getMeasurement", GetMeasurement);

	Nan::SetPrototypeMethod(tpl, "InitErrorMetrics", InitErrorMetrics);
	Nan::SetPrototypeMethod(tpl, "initErrorMetrics", InitErrorMetrics);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetErrorMetrics", SetErrorMetrics);
	Nan::SetPrototypeMethod(tpl, "setErrorMetrics", SetErrorMetrics);

	Nan::SetPrototypeMethod(tpl, "SetMeasurement", SetMeasurement);
	Nan::SetPrototypeMethod(tpl, "setMeasurement", SetMeasurement);

#ifdef VTK_NODE_PLUS_VTKGENERICCELLTESSELLATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGENERICCELLTESSELLATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGenericCellTessellatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkGenericCellTessellatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info.Holder());
	vtkGenericCellTessellator *native = (vtkGenericCellTessellator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericCellTessellatorWrap::GetErrorMetrics(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info.Holder());
	vtkGenericCellTessellator *native = (vtkGenericCellTessellator *)wrapper->native.GetPointer();
	vtkCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetErrorMetrics();
	VtkCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCollectionWrap *w = new VtkCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericCellTessellatorWrap::GetMeasurement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info.Holder());
	vtkGenericCellTessellator *native = (vtkGenericCellTessellator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMeasurement();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericCellTessellatorWrap::InitErrorMetrics(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info.Holder());
	vtkGenericCellTessellator *native = (vtkGenericCellTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericDataSetWrap *a0 = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->InitErrorMetrics(
			(vtkGenericDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericCellTessellatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info.Holder());
	vtkGenericCellTessellator *native = (vtkGenericCellTessellator *)wrapper->native.GetPointer();
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

void VtkGenericCellTessellatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info.Holder());
	vtkGenericCellTessellator *native = (vtkGenericCellTessellator *)wrapper->native.GetPointer();
	vtkGenericCellTessellator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGenericCellTessellatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericCellTessellatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericCellTessellatorWrap *w = new VtkGenericCellTessellatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericCellTessellatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info.Holder());
	vtkGenericCellTessellator *native = (vtkGenericCellTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericCellTessellator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGenericCellTessellatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericCellTessellatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericCellTessellatorWrap *w = new VtkGenericCellTessellatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericCellTessellatorWrap::SetErrorMetrics(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info.Holder());
	vtkGenericCellTessellator *native = (vtkGenericCellTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCollectionWrap *a0 = ObjectWrap::Unwrap<VtkCollectionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetErrorMetrics(
			(vtkCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericCellTessellatorWrap::SetMeasurement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info.Holder());
	vtkGenericCellTessellator *native = (vtkGenericCellTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMeasurement(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

