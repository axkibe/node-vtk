/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageQuantizeRGBToIndexWrap.h"
#include "vtkObjectWrap.h"
#include "vtkLookupTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageQuantizeRGBToIndexWrap::constructor;

VtkImageQuantizeRGBToIndexWrap::VtkImageQuantizeRGBToIndexWrap()
{ }

VtkImageQuantizeRGBToIndexWrap::VtkImageQuantizeRGBToIndexWrap(vtkSmartPointer<vtkImageQuantizeRGBToIndex> _native)
{ native = _native; }

VtkImageQuantizeRGBToIndexWrap::~VtkImageQuantizeRGBToIndexWrap()
{ }

void VtkImageQuantizeRGBToIndexWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageQuantizeRGBToIndexWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkImageAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageQuantizeRGBToIndex").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageQuantizeRGBToIndex").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageQuantizeRGBToIndexWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetBuildTreeExecuteTime", GetBuildTreeExecuteTime);
	Nan::SetPrototypeMethod(tpl, "getBuildTreeExecuteTime", GetBuildTreeExecuteTime);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInitializeExecuteTime", GetInitializeExecuteTime);
	Nan::SetPrototypeMethod(tpl, "getInitializeExecuteTime", GetInitializeExecuteTime);

	Nan::SetPrototypeMethod(tpl, "GetInputType", GetInputType);
	Nan::SetPrototypeMethod(tpl, "getInputType", GetInputType);

	Nan::SetPrototypeMethod(tpl, "GetLookupIndexExecuteTime", GetLookupIndexExecuteTime);
	Nan::SetPrototypeMethod(tpl, "getLookupIndexExecuteTime", GetLookupIndexExecuteTime);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfColors", GetNumberOfColors);
	Nan::SetPrototypeMethod(tpl, "getNumberOfColors", GetNumberOfColors);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfColorsMaxValue", GetNumberOfColorsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfColorsMaxValue", GetNumberOfColorsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfColorsMinValue", GetNumberOfColorsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfColorsMinValue", GetNumberOfColorsMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBuildTreeExecuteTime", SetBuildTreeExecuteTime);
	Nan::SetPrototypeMethod(tpl, "setBuildTreeExecuteTime", SetBuildTreeExecuteTime);

	Nan::SetPrototypeMethod(tpl, "SetInitializeExecuteTime", SetInitializeExecuteTime);
	Nan::SetPrototypeMethod(tpl, "setInitializeExecuteTime", SetInitializeExecuteTime);

	Nan::SetPrototypeMethod(tpl, "SetLookupIndexExecuteTime", SetLookupIndexExecuteTime);
	Nan::SetPrototypeMethod(tpl, "setLookupIndexExecuteTime", SetLookupIndexExecuteTime);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfColors", SetNumberOfColors);
	Nan::SetPrototypeMethod(tpl, "setNumberOfColors", SetNumberOfColors);

}

void VtkImageQuantizeRGBToIndexWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageQuantizeRGBToIndex> native = vtkSmartPointer<vtkImageQuantizeRGBToIndex>::New();
		VtkImageQuantizeRGBToIndexWrap* obj = new VtkImageQuantizeRGBToIndexWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageQuantizeRGBToIndexWrap::GetBuildTreeExecuteTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBuildTreeExecuteTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageQuantizeRGBToIndexWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageQuantizeRGBToIndexWrap::GetInitializeExecuteTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInitializeExecuteTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageQuantizeRGBToIndexWrap::GetInputType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageQuantizeRGBToIndexWrap::GetLookupIndexExecuteTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupIndexExecuteTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageQuantizeRGBToIndexWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	vtkLookupTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupTable();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLookupTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLookupTableWrap *w = new VtkLookupTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageQuantizeRGBToIndexWrap::GetNumberOfColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfColors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageQuantizeRGBToIndexWrap::GetNumberOfColorsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfColorsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageQuantizeRGBToIndexWrap::GetNumberOfColorsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfColorsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageQuantizeRGBToIndexWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
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

void VtkImageQuantizeRGBToIndexWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	vtkImageQuantizeRGBToIndex * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageQuantizeRGBToIndexWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageQuantizeRGBToIndexWrap *w = new VtkImageQuantizeRGBToIndexWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageQuantizeRGBToIndexWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageQuantizeRGBToIndex * r;
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
			Nan::New<v8::Function>(VtkImageQuantizeRGBToIndexWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageQuantizeRGBToIndexWrap *w = new VtkImageQuantizeRGBToIndexWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageQuantizeRGBToIndexWrap::SetBuildTreeExecuteTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBuildTreeExecuteTime(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageQuantizeRGBToIndexWrap::SetInitializeExecuteTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInitializeExecuteTime(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageQuantizeRGBToIndexWrap::SetLookupIndexExecuteTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLookupIndexExecuteTime(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageQuantizeRGBToIndexWrap::SetNumberOfColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageQuantizeRGBToIndexWrap *wrapper = ObjectWrap::Unwrap<VtkImageQuantizeRGBToIndexWrap>(info.Holder());
	vtkImageQuantizeRGBToIndex *native = (vtkImageQuantizeRGBToIndex *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfColors(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

