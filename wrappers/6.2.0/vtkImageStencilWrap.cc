/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageStencilWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageStencilDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageStencilWrap::ptpl;

VtkImageStencilWrap::VtkImageStencilWrap()
{ }

VtkImageStencilWrap::VtkImageStencilWrap(vtkSmartPointer<vtkImageStencil> _native)
{ native = _native; }

VtkImageStencilWrap::~VtkImageStencilWrap()
{ }

void VtkImageStencilWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageStencil").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageStencil").ToLocalChecked(), ConstructorGetter);
}

void VtkImageStencilWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageStencilWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageStencilWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBackgroundInput", GetBackgroundInput);
	Nan::SetPrototypeMethod(tpl, "getBackgroundInput", GetBackgroundInput);

	Nan::SetPrototypeMethod(tpl, "GetBackgroundValue", GetBackgroundValue);
	Nan::SetPrototypeMethod(tpl, "getBackgroundValue", GetBackgroundValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetReverseStencil", GetReverseStencil);
	Nan::SetPrototypeMethod(tpl, "getReverseStencil", GetReverseStencil);

	Nan::SetPrototypeMethod(tpl, "GetStencil", GetStencil);
	Nan::SetPrototypeMethod(tpl, "getStencil", GetStencil);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReverseStencilOff", ReverseStencilOff);
	Nan::SetPrototypeMethod(tpl, "reverseStencilOff", ReverseStencilOff);

	Nan::SetPrototypeMethod(tpl, "ReverseStencilOn", ReverseStencilOn);
	Nan::SetPrototypeMethod(tpl, "reverseStencilOn", ReverseStencilOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBackgroundColor", SetBackgroundColor);
	Nan::SetPrototypeMethod(tpl, "setBackgroundColor", SetBackgroundColor);

	Nan::SetPrototypeMethod(tpl, "SetBackgroundInputData", SetBackgroundInputData);
	Nan::SetPrototypeMethod(tpl, "setBackgroundInputData", SetBackgroundInputData);

	Nan::SetPrototypeMethod(tpl, "SetBackgroundValue", SetBackgroundValue);
	Nan::SetPrototypeMethod(tpl, "setBackgroundValue", SetBackgroundValue);

	Nan::SetPrototypeMethod(tpl, "SetReverseStencil", SetReverseStencil);
	Nan::SetPrototypeMethod(tpl, "setReverseStencil", SetReverseStencil);

	Nan::SetPrototypeMethod(tpl, "SetStencilConnection", SetStencilConnection);
	Nan::SetPrototypeMethod(tpl, "setStencilConnection", SetStencilConnection);

	Nan::SetPrototypeMethod(tpl, "SetStencilData", SetStencilData);
	Nan::SetPrototypeMethod(tpl, "setStencilData", SetStencilData);

	ptpl.Reset( tpl );
}

void VtkImageStencilWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageStencil> native = vtkSmartPointer<vtkImageStencil>::New();
		VtkImageStencilWrap* obj = new VtkImageStencilWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageStencilWrap::GetBackgroundInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackgroundInput();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageStencilWrap::GetBackgroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackgroundValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageStencilWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageStencilWrap::GetReverseStencil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReverseStencil();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageStencilWrap::GetStencil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	vtkImageStencilData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStencil();
		VtkImageStencilDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageStencilDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageStencilDataWrap *w = new VtkImageStencilDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageStencilWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
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

void VtkImageStencilWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	vtkImageStencil * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageStencilWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageStencilWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageStencilWrap *w = new VtkImageStencilWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageStencilWrap::ReverseStencilOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseStencilOff();
}

void VtkImageStencilWrap::ReverseStencilOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseStencilOn();
}

void VtkImageStencilWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageStencil * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageStencilWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageStencilWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageStencilWrap *w = new VtkImageStencilWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageStencilWrap::SetBackgroundColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetBackgroundColor(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageStencilWrap::SetBackgroundInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackgroundInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageStencilWrap::SetBackgroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackgroundValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageStencilWrap::SetReverseStencil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReverseStencil(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageStencilWrap::SetStencilConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStencilConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageStencilWrap::SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImageStencilWrap>(info.Holder());
	vtkImageStencil *native = (vtkImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageStencilDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageStencilDataWrap *a0 = ObjectWrap::Unwrap<VtkImageStencilDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStencilData(
			(vtkImageStencilData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

