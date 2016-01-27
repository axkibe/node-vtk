/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTreeAlgorithmWrap.h"
#include "vtkTreeFieldAggregatorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTreeFieldAggregatorWrap::ptpl;

VtkTreeFieldAggregatorWrap::VtkTreeFieldAggregatorWrap()
{ }

VtkTreeFieldAggregatorWrap::VtkTreeFieldAggregatorWrap(vtkSmartPointer<vtkTreeFieldAggregator> _native)
{ native = _native; }

VtkTreeFieldAggregatorWrap::~VtkTreeFieldAggregatorWrap()
{ }

void VtkTreeFieldAggregatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTreeFieldAggregator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TreeFieldAggregator").ToLocalChecked(), ConstructorGetter);
}

void VtkTreeFieldAggregatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTreeFieldAggregatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTreeFieldAggregatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetField", GetField);
	Nan::SetPrototypeMethod(tpl, "getField", GetField);

	Nan::SetPrototypeMethod(tpl, "GetMinValue", GetMinValue);
	Nan::SetPrototypeMethod(tpl, "getMinValue", GetMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LeafVertexUnitSizeOff", LeafVertexUnitSizeOff);
	Nan::SetPrototypeMethod(tpl, "leafVertexUnitSizeOff", LeafVertexUnitSizeOff);

	Nan::SetPrototypeMethod(tpl, "LeafVertexUnitSizeOn", LeafVertexUnitSizeOn);
	Nan::SetPrototypeMethod(tpl, "leafVertexUnitSizeOn", LeafVertexUnitSizeOn);

	Nan::SetPrototypeMethod(tpl, "LogScaleOff", LogScaleOff);
	Nan::SetPrototypeMethod(tpl, "logScaleOff", LogScaleOff);

	Nan::SetPrototypeMethod(tpl, "LogScaleOn", LogScaleOn);
	Nan::SetPrototypeMethod(tpl, "logScaleOn", LogScaleOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetField", SetField);
	Nan::SetPrototypeMethod(tpl, "setField", SetField);

	Nan::SetPrototypeMethod(tpl, "SetMinValue", SetMinValue);
	Nan::SetPrototypeMethod(tpl, "setMinValue", SetMinValue);

	ptpl.Reset( tpl );
}

void VtkTreeFieldAggregatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTreeFieldAggregator> native = vtkSmartPointer<vtkTreeFieldAggregator>::New();
		VtkTreeFieldAggregatorWrap* obj = new VtkTreeFieldAggregatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTreeFieldAggregatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTreeFieldAggregatorWrap::GetField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetField();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTreeFieldAggregatorWrap::GetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeFieldAggregatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
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

void VtkTreeFieldAggregatorWrap::LeafVertexUnitSizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LeafVertexUnitSizeOff();
}

void VtkTreeFieldAggregatorWrap::LeafVertexUnitSizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LeafVertexUnitSizeOn();
}

void VtkTreeFieldAggregatorWrap::LogScaleOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LogScaleOff();
}

void VtkTreeFieldAggregatorWrap::LogScaleOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LogScaleOn();
}

void VtkTreeFieldAggregatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	vtkTreeFieldAggregator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTreeFieldAggregatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeFieldAggregatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeFieldAggregatorWrap *w = new VtkTreeFieldAggregatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeFieldAggregatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTreeFieldAggregator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTreeFieldAggregatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTreeFieldAggregatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTreeFieldAggregatorWrap *w = new VtkTreeFieldAggregatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeFieldAggregatorWrap::SetField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetField(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeFieldAggregatorWrap::SetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeFieldAggregatorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeFieldAggregatorWrap>(info.Holder());
	vtkTreeFieldAggregator *native = (vtkTreeFieldAggregator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
