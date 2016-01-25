/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageCheckerboardWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageCheckerboardWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageCheckerboardWrap::ptpl;

VtkImageCheckerboardWrap::VtkImageCheckerboardWrap()
{ }

VtkImageCheckerboardWrap::VtkImageCheckerboardWrap(vtkSmartPointer<vtkImageCheckerboard> _native)
{ native = _native; }

VtkImageCheckerboardWrap::~VtkImageCheckerboardWrap()
{ }

void VtkImageCheckerboardWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageCheckerboardWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageCheckerboard").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageCheckerboard").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageCheckerboardWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInput1Data", SetInput1Data);
	Nan::SetPrototypeMethod(tpl, "setInput1Data", SetInput1Data);

	Nan::SetPrototypeMethod(tpl, "SetInput2Data", SetInput2Data);
	Nan::SetPrototypeMethod(tpl, "setInput2Data", SetInput2Data);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfDivisions", SetNumberOfDivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfDivisions", SetNumberOfDivisions);

}

void VtkImageCheckerboardWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageCheckerboard> native = vtkSmartPointer<vtkImageCheckerboard>::New();
		VtkImageCheckerboardWrap* obj = new VtkImageCheckerboardWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageCheckerboardWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageCheckerboardWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
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

void VtkImageCheckerboardWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	vtkImageCheckerboard * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageCheckerboardWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageCheckerboardWrap *w = new VtkImageCheckerboardWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageCheckerboardWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageCheckerboard * r;
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
			Nan::New<v8::Function>(VtkImageCheckerboardWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageCheckerboardWrap *w = new VtkImageCheckerboardWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCheckerboardWrap::SetInput1Data(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput1Data(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCheckerboardWrap::SetInput2Data(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput2Data(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCheckerboardWrap::SetNumberOfDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
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
				native->SetNumberOfDivisions(
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

