/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageChangeInformationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageChangeInformationWrap::ptpl;

VtkImageChangeInformationWrap::VtkImageChangeInformationWrap()
{ }

VtkImageChangeInformationWrap::VtkImageChangeInformationWrap(vtkSmartPointer<vtkImageChangeInformation> _native)
{ native = _native; }

VtkImageChangeInformationWrap::~VtkImageChangeInformationWrap()
{ }

void VtkImageChangeInformationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageChangeInformation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageChangeInformation").ToLocalChecked(), ConstructorGetter);
}

void VtkImageChangeInformationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageChangeInformationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageChangeInformationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CenterImageOff", CenterImageOff);
	Nan::SetPrototypeMethod(tpl, "centerImageOff", CenterImageOff);

	Nan::SetPrototypeMethod(tpl, "CenterImageOn", CenterImageOn);
	Nan::SetPrototypeMethod(tpl, "centerImageOn", CenterImageOn);

	Nan::SetPrototypeMethod(tpl, "GetCenterImage", GetCenterImage);
	Nan::SetPrototypeMethod(tpl, "getCenterImage", GetCenterImage);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInformationInput", GetInformationInput);
	Nan::SetPrototypeMethod(tpl, "getInformationInput", GetInformationInput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenterImage", SetCenterImage);
	Nan::SetPrototypeMethod(tpl, "setCenterImage", SetCenterImage);

	Nan::SetPrototypeMethod(tpl, "SetExtentTranslation", SetExtentTranslation);
	Nan::SetPrototypeMethod(tpl, "setExtentTranslation", SetExtentTranslation);

	Nan::SetPrototypeMethod(tpl, "SetInformationInputData", SetInformationInputData);
	Nan::SetPrototypeMethod(tpl, "setInformationInputData", SetInformationInputData);

	Nan::SetPrototypeMethod(tpl, "SetOriginScale", SetOriginScale);
	Nan::SetPrototypeMethod(tpl, "setOriginScale", SetOriginScale);

	Nan::SetPrototypeMethod(tpl, "SetOriginTranslation", SetOriginTranslation);
	Nan::SetPrototypeMethod(tpl, "setOriginTranslation", SetOriginTranslation);

	Nan::SetPrototypeMethod(tpl, "SetOutputExtentStart", SetOutputExtentStart);
	Nan::SetPrototypeMethod(tpl, "setOutputExtentStart", SetOutputExtentStart);

	Nan::SetPrototypeMethod(tpl, "SetOutputOrigin", SetOutputOrigin);
	Nan::SetPrototypeMethod(tpl, "setOutputOrigin", SetOutputOrigin);

	Nan::SetPrototypeMethod(tpl, "SetOutputSpacing", SetOutputSpacing);
	Nan::SetPrototypeMethod(tpl, "setOutputSpacing", SetOutputSpacing);

	Nan::SetPrototypeMethod(tpl, "SetSpacingScale", SetSpacingScale);
	Nan::SetPrototypeMethod(tpl, "setSpacingScale", SetSpacingScale);

	ptpl.Reset( tpl );
}

void VtkImageChangeInformationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageChangeInformation> native = vtkSmartPointer<vtkImageChangeInformation>::New();
		VtkImageChangeInformationWrap* obj = new VtkImageChangeInformationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageChangeInformationWrap::CenterImageOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CenterImageOff();
}

void VtkImageChangeInformationWrap::CenterImageOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CenterImageOn();
}

void VtkImageChangeInformationWrap::GetCenterImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenterImage();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageChangeInformationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageChangeInformationWrap::GetInformationInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInformationInput();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageChangeInformationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
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

void VtkImageChangeInformationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	vtkImageChangeInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageChangeInformationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageChangeInformationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageChangeInformationWrap *w = new VtkImageChangeInformationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageChangeInformationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageChangeInformation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageChangeInformationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageChangeInformationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageChangeInformationWrap *w = new VtkImageChangeInformationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageChangeInformationWrap::SetCenterImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCenterImage(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageChangeInformationWrap::SetExtentTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetExtentTranslation(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageChangeInformationWrap::SetInformationInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInformationInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageChangeInformationWrap::SetOriginScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOriginScale(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageChangeInformationWrap::SetOriginTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOriginTranslation(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageChangeInformationWrap::SetOutputExtentStart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOutputExtentStart(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageChangeInformationWrap::SetOutputOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOutputOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageChangeInformationWrap::SetOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOutputSpacing(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageChangeInformationWrap::SetSpacingScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageChangeInformationWrap *wrapper = ObjectWrap::Unwrap<VtkImageChangeInformationWrap>(info.Holder());
	vtkImageChangeInformation *native = (vtkImageChangeInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSpacingScale(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

