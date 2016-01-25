/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkAppendPolyDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAppendPolyDataWrap::constructor;

VtkAppendPolyDataWrap::VtkAppendPolyDataWrap()
{ }

VtkAppendPolyDataWrap::VtkAppendPolyDataWrap(vtkSmartPointer<vtkAppendPolyData> _native)
{ native = _native; }

VtkAppendPolyDataWrap::~VtkAppendPolyDataWrap()
{ }

void VtkAppendPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkAppendPolyDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPolyDataAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkAppendPolyData").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AppendPolyData").ToLocalChecked(),tpl->GetFunction());
}

void VtkAppendPolyDataWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddInputData", AddInputData);
	Nan::SetPrototypeMethod(tpl, "addInputData", AddInputData);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetParallelStreaming", GetParallelStreaming);
	Nan::SetPrototypeMethod(tpl, "getParallelStreaming", GetParallelStreaming);

	Nan::SetPrototypeMethod(tpl, "GetUserManagedInputs", GetUserManagedInputs);
	Nan::SetPrototypeMethod(tpl, "getUserManagedInputs", GetUserManagedInputs);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ParallelStreamingOff", ParallelStreamingOff);
	Nan::SetPrototypeMethod(tpl, "parallelStreamingOff", ParallelStreamingOff);

	Nan::SetPrototypeMethod(tpl, "ParallelStreamingOn", ParallelStreamingOn);
	Nan::SetPrototypeMethod(tpl, "parallelStreamingOn", ParallelStreamingOn);

	Nan::SetPrototypeMethod(tpl, "RemoveInputData", RemoveInputData);
	Nan::SetPrototypeMethod(tpl, "removeInputData", RemoveInputData);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputConnectionByNumber", SetInputConnectionByNumber);
	Nan::SetPrototypeMethod(tpl, "setInputConnectionByNumber", SetInputConnectionByNumber);

	Nan::SetPrototypeMethod(tpl, "SetInputDataByNumber", SetInputDataByNumber);
	Nan::SetPrototypeMethod(tpl, "setInputDataByNumber", SetInputDataByNumber);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfInputs", SetNumberOfInputs);
	Nan::SetPrototypeMethod(tpl, "setNumberOfInputs", SetNumberOfInputs);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetParallelStreaming", SetParallelStreaming);
	Nan::SetPrototypeMethod(tpl, "setParallelStreaming", SetParallelStreaming);

	Nan::SetPrototypeMethod(tpl, "SetUserManagedInputs", SetUserManagedInputs);
	Nan::SetPrototypeMethod(tpl, "setUserManagedInputs", SetUserManagedInputs);

	Nan::SetPrototypeMethod(tpl, "UserManagedInputsOff", UserManagedInputsOff);
	Nan::SetPrototypeMethod(tpl, "userManagedInputsOff", UserManagedInputsOff);

	Nan::SetPrototypeMethod(tpl, "UserManagedInputsOn", UserManagedInputsOn);
	Nan::SetPrototypeMethod(tpl, "userManagedInputsOn", UserManagedInputsOn);

}

void VtkAppendPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAppendPolyData> native = vtkSmartPointer<vtkAppendPolyData>::New();
		VtkAppendPolyDataWrap* obj = new VtkAppendPolyDataWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAppendPolyDataWrap::AddInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddInputData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAppendPolyDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAppendPolyDataWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
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

void VtkAppendPolyDataWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAppendPolyDataWrap::GetParallelStreaming(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParallelStreaming();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAppendPolyDataWrap::GetUserManagedInputs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUserManagedInputs();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAppendPolyDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
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

void VtkAppendPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	vtkAppendPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAppendPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAppendPolyDataWrap *w = new VtkAppendPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAppendPolyDataWrap::ParallelStreamingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ParallelStreamingOff();
}

void VtkAppendPolyDataWrap::ParallelStreamingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ParallelStreamingOn();
}

void VtkAppendPolyDataWrap::RemoveInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveInputData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAppendPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAppendPolyData * r;
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
			Nan::New<v8::Function>(VtkAppendPolyDataWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAppendPolyDataWrap *w = new VtkAppendPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAppendPolyDataWrap::SetInputConnectionByNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkAlgorithmOutputWrap *a1 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputConnectionByNumber(
				info[0]->Int32Value(),
				(vtkAlgorithmOutput *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAppendPolyDataWrap::SetInputDataByNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkPolyDataWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputDataByNumber(
				info[0]->Int32Value(),
				(vtkPolyData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAppendPolyDataWrap::SetNumberOfInputs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfInputs(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAppendPolyDataWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAppendPolyDataWrap::SetParallelStreaming(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParallelStreaming(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAppendPolyDataWrap::SetUserManagedInputs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUserManagedInputs(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAppendPolyDataWrap::UserManagedInputsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UserManagedInputsOff();
}

void VtkAppendPolyDataWrap::UserManagedInputsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAppendPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkAppendPolyDataWrap>(info.Holder());
	vtkAppendPolyData *native = (vtkAppendPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UserManagedInputsOn();
}

