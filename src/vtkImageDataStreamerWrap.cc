/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageDataStreamerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkExtentTranslatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageDataStreamerWrap::ptpl;

VtkImageDataStreamerWrap::VtkImageDataStreamerWrap()
{ }

VtkImageDataStreamerWrap::VtkImageDataStreamerWrap(vtkSmartPointer<vtkImageDataStreamer> _native)
{ native = _native; }

VtkImageDataStreamerWrap::~VtkImageDataStreamerWrap()
{ }

void VtkImageDataStreamerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageDataStreamer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageDataStreamer").ToLocalChecked(), ConstructorGetter);
}

void VtkImageDataStreamerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageDataStreamerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageDataStreamerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExtentTranslator", GetExtentTranslator);
	Nan::SetPrototypeMethod(tpl, "getExtentTranslator", GetExtentTranslator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfStreamDivisions", GetNumberOfStreamDivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfStreamDivisions", GetNumberOfStreamDivisions);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExtentTranslator", SetExtentTranslator);
	Nan::SetPrototypeMethod(tpl, "setExtentTranslator", SetExtentTranslator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfStreamDivisions", SetNumberOfStreamDivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfStreamDivisions", SetNumberOfStreamDivisions);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	Nan::SetPrototypeMethod(tpl, "UpdateWholeExtent", UpdateWholeExtent);
	Nan::SetPrototypeMethod(tpl, "updateWholeExtent", UpdateWholeExtent);

	ptpl.Reset( tpl );
}

void VtkImageDataStreamerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageDataStreamer> native = vtkSmartPointer<vtkImageDataStreamer>::New();
		VtkImageDataStreamerWrap* obj = new VtkImageDataStreamerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageDataStreamerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageDataStreamerWrap::GetExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
	vtkExtentTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtentTranslator();
		VtkExtentTranslatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtentTranslatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtentTranslatorWrap *w = new VtkExtentTranslatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageDataStreamerWrap::GetNumberOfStreamDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfStreamDivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDataStreamerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
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

void VtkImageDataStreamerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
	vtkImageDataStreamer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageDataStreamerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataStreamerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataStreamerWrap *w = new VtkImageDataStreamerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageDataStreamerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageDataStreamer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageDataStreamerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDataStreamerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataStreamerWrap *w = new VtkImageDataStreamerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataStreamerWrap::SetExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkExtentTranslatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkExtentTranslatorWrap *a0 = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtentTranslator(
			(vtkExtentTranslator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataStreamerWrap::SetNumberOfStreamDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfStreamDivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataStreamerWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Update(
			info[0]->Int32Value()
		);
		return;
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

void VtkImageDataStreamerWrap::UpdateWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataStreamerWrap>(info.Holder());
	vtkImageDataStreamer *native = (vtkImageDataStreamer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdateWholeExtent();
}

