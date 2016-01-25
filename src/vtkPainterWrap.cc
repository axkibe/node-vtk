/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkPainterWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationWrap.h"
#include "vtkWindowWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPainterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPainterWrap::ptpl;

VtkPainterWrap::VtkPainterWrap()
{ }

VtkPainterWrap::VtkPainterWrap(vtkSmartPointer<vtkPainter> _native)
{ native = _native; }

VtkPainterWrap::~VtkPainterWrap()
{ }

void VtkPainterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPainter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Painter").ToLocalChecked(),tpl->GetFunction());
}

void VtkPainterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CONSERVE_MEMORY", CONSERVE_MEMORY);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDelegatePainter", GetDelegatePainter);
	Nan::SetPrototypeMethod(tpl, "getDelegatePainter", GetDelegatePainter);

	Nan::SetPrototypeMethod(tpl, "GetInformation", GetInformation);
	Nan::SetPrototypeMethod(tpl, "getInformation", GetInformation);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetProgress", GetProgress);
	Nan::SetPrototypeMethod(tpl, "getProgress", GetProgress);

	Nan::SetPrototypeMethod(tpl, "GetProgressMaxValue", GetProgressMaxValue);
	Nan::SetPrototypeMethod(tpl, "getProgressMaxValue", GetProgressMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetProgressMinValue", GetProgressMinValue);
	Nan::SetPrototypeMethod(tpl, "getProgressMinValue", GetProgressMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTimeToDraw", GetTimeToDraw);
	Nan::SetPrototypeMethod(tpl, "getTimeToDraw", GetTimeToDraw);

	Nan::SetPrototypeMethod(tpl, "HIGH_QUALITY", HIGH_QUALITY);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "STATIC_DATA", STATIC_DATA);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDelegatePainter", SetDelegatePainter);
	Nan::SetPrototypeMethod(tpl, "setDelegatePainter", SetDelegatePainter);

	Nan::SetPrototypeMethod(tpl, "SetInformation", SetInformation);
	Nan::SetPrototypeMethod(tpl, "setInformation", SetInformation);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetProgress", SetProgress);
	Nan::SetPrototypeMethod(tpl, "setProgress", SetProgress);

}

void VtkPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPainterWrap::CONSERVE_MEMORY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CONSERVE_MEMORY();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPainterWrap::GetDelegatePainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	vtkPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDelegatePainter();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPainterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPainterWrap *w = new VtkPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterWrap::GetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	vtkInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInformation();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationWrap *w = new VtkInformationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterWrap::GetProgress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProgress();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPainterWrap::GetProgressMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProgressMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPainterWrap::GetProgressMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProgressMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPainterWrap::GetTimeToDraw(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeToDraw();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPainterWrap::HIGH_QUALITY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HIGH_QUALITY();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
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

void VtkPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	vtkPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPainterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPainterWrap *w = new VtkPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterWrap::STATIC_DATA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->STATIC_DATA();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPainter * r;
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
			Nan::New<v8::Function>(VtkPainterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPainterWrap *w = new VtkPainterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterWrap::SetDelegatePainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPainterWrap *a0 = ObjectWrap::Unwrap<VtkPainterWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDelegatePainter(
			(vtkPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterWrap::SetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInformation(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterWrap::SetProgress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterWrap>(info.Holder());
	vtkPainter *native = (vtkPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProgress(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

