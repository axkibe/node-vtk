/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkMapArrayValuesWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMapArrayValuesWrap::ptpl;

VtkMapArrayValuesWrap::VtkMapArrayValuesWrap()
{ }

VtkMapArrayValuesWrap::VtkMapArrayValuesWrap(vtkSmartPointer<vtkMapArrayValues> _native)
{ native = _native; }

VtkMapArrayValuesWrap::~VtkMapArrayValuesWrap()
{ }

void VtkMapArrayValuesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMapArrayValues").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MapArrayValues").ToLocalChecked(), ConstructorGetter);
}

void VtkMapArrayValuesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMapArrayValuesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMapArrayValuesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddToMap", AddToMap);
	Nan::SetPrototypeMethod(tpl, "addToMap", AddToMap);

	Nan::SetPrototypeMethod(tpl, "ClearMap", ClearMap);
	Nan::SetPrototypeMethod(tpl, "clearMap", ClearMap);

	Nan::SetPrototypeMethod(tpl, "GetFieldType", GetFieldType);
	Nan::SetPrototypeMethod(tpl, "getFieldType", GetFieldType);

	Nan::SetPrototypeMethod(tpl, "GetFillValue", GetFillValue);
	Nan::SetPrototypeMethod(tpl, "getFillValue", GetFillValue);

	Nan::SetPrototypeMethod(tpl, "GetInputArrayName", GetInputArrayName);
	Nan::SetPrototypeMethod(tpl, "getInputArrayName", GetInputArrayName);

	Nan::SetPrototypeMethod(tpl, "GetMapSize", GetMapSize);
	Nan::SetPrototypeMethod(tpl, "getMapSize", GetMapSize);

	Nan::SetPrototypeMethod(tpl, "GetOutputArrayName", GetOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "getOutputArrayName", GetOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "GetOutputArrayType", GetOutputArrayType);
	Nan::SetPrototypeMethod(tpl, "getOutputArrayType", GetOutputArrayType);

	Nan::SetPrototypeMethod(tpl, "GetPassArray", GetPassArray);
	Nan::SetPrototypeMethod(tpl, "getPassArray", GetPassArray);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassArrayOff", PassArrayOff);
	Nan::SetPrototypeMethod(tpl, "passArrayOff", PassArrayOff);

	Nan::SetPrototypeMethod(tpl, "PassArrayOn", PassArrayOn);
	Nan::SetPrototypeMethod(tpl, "passArrayOn", PassArrayOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFieldType", SetFieldType);
	Nan::SetPrototypeMethod(tpl, "setFieldType", SetFieldType);

	Nan::SetPrototypeMethod(tpl, "SetFillValue", SetFillValue);
	Nan::SetPrototypeMethod(tpl, "setFillValue", SetFillValue);

	Nan::SetPrototypeMethod(tpl, "SetInputArrayName", SetInputArrayName);
	Nan::SetPrototypeMethod(tpl, "setInputArrayName", SetInputArrayName);

	Nan::SetPrototypeMethod(tpl, "SetOutputArrayName", SetOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "setOutputArrayName", SetOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "SetOutputArrayType", SetOutputArrayType);
	Nan::SetPrototypeMethod(tpl, "setOutputArrayType", SetOutputArrayType);

	Nan::SetPrototypeMethod(tpl, "SetPassArray", SetPassArray);
	Nan::SetPrototypeMethod(tpl, "setPassArray", SetPassArray);

#ifdef VTK_NODE_PLUS_VTKMAPARRAYVALUESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMAPARRAYVALUESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMapArrayValuesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMapArrayValues> native = vtkSmartPointer<vtkMapArrayValues>::New();
		VtkMapArrayValuesWrap* obj = new VtkMapArrayValuesWrap(native);
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

void VtkMapArrayValuesWrap::AddToMap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddToMap(
				*a0,
				*a1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddToMap(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddToMap(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddToMap(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMapArrayValuesWrap::ClearMap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearMap();
}

void VtkMapArrayValuesWrap::GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMapArrayValuesWrap::GetFillValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFillValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMapArrayValuesWrap::GetInputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMapArrayValuesWrap::GetMapSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMapArrayValuesWrap::GetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMapArrayValuesWrap::GetOutputArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputArrayType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMapArrayValuesWrap::GetPassArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMapArrayValuesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	vtkMapArrayValues * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMapArrayValuesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMapArrayValuesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMapArrayValuesWrap *w = new VtkMapArrayValuesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMapArrayValuesWrap::PassArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassArrayOff();
}

void VtkMapArrayValuesWrap::PassArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassArrayOn();
}

void VtkMapArrayValuesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMapArrayValues * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMapArrayValuesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMapArrayValuesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMapArrayValuesWrap *w = new VtkMapArrayValuesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMapArrayValuesWrap::SetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMapArrayValuesWrap::SetFillValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFillValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMapArrayValuesWrap::SetInputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMapArrayValuesWrap::SetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMapArrayValuesWrap::SetOutputArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputArrayType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMapArrayValuesWrap::SetPassArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMapArrayValuesWrap *wrapper = ObjectWrap::Unwrap<VtkMapArrayValuesWrap>(info.Holder());
	vtkMapArrayValues *native = (vtkMapArrayValues *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

