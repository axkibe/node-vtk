/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkExtentTranslatorWrap.h"
#include "vtkImageDataLIC2DExtentTranslatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataLIC2DWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageDataLIC2DExtentTranslatorWrap::ptpl;

VtkImageDataLIC2DExtentTranslatorWrap::VtkImageDataLIC2DExtentTranslatorWrap()
{ }

VtkImageDataLIC2DExtentTranslatorWrap::VtkImageDataLIC2DExtentTranslatorWrap(vtkSmartPointer<vtkImageDataLIC2DExtentTranslator> _native)
{ native = _native; }

VtkImageDataLIC2DExtentTranslatorWrap::~VtkImageDataLIC2DExtentTranslatorWrap()
{ }

void VtkImageDataLIC2DExtentTranslatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageDataLIC2DExtentTranslator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageDataLIC2DExtentTranslator").ToLocalChecked(), ConstructorGetter);
}

void VtkImageDataLIC2DExtentTranslatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageDataLIC2DExtentTranslatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExtentTranslatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExtentTranslatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageDataLIC2DExtentTranslatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAlgorithm", GetAlgorithm);
	Nan::SetPrototypeMethod(tpl, "getAlgorithm", GetAlgorithm);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInputExtentTranslator", GetInputExtentTranslator);
	Nan::SetPrototypeMethod(tpl, "getInputExtentTranslator", GetInputExtentTranslator);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlgorithm", SetAlgorithm);
	Nan::SetPrototypeMethod(tpl, "setAlgorithm", SetAlgorithm);

	Nan::SetPrototypeMethod(tpl, "SetInputExtentTranslator", SetInputExtentTranslator);
	Nan::SetPrototypeMethod(tpl, "setInputExtentTranslator", SetInputExtentTranslator);

	Nan::SetPrototypeMethod(tpl, "SetInputWholeExtent", SetInputWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setInputWholeExtent", SetInputWholeExtent);

	ptpl.Reset( tpl );
}

void VtkImageDataLIC2DExtentTranslatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageDataLIC2DExtentTranslator> native = vtkSmartPointer<vtkImageDataLIC2DExtentTranslator>::New();
		VtkImageDataLIC2DExtentTranslatorWrap* obj = new VtkImageDataLIC2DExtentTranslatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageDataLIC2DExtentTranslatorWrap::GetAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataLIC2DExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataLIC2DExtentTranslatorWrap>(info.Holder());
	vtkImageDataLIC2DExtentTranslator *native = (vtkImageDataLIC2DExtentTranslator *)wrapper->native.GetPointer();
	vtkImageDataLIC2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlgorithm();
		VtkImageDataLIC2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataLIC2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataLIC2DWrap *w = new VtkImageDataLIC2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageDataLIC2DExtentTranslatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataLIC2DExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataLIC2DExtentTranslatorWrap>(info.Holder());
	vtkImageDataLIC2DExtentTranslator *native = (vtkImageDataLIC2DExtentTranslator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageDataLIC2DExtentTranslatorWrap::GetInputExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataLIC2DExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataLIC2DExtentTranslatorWrap>(info.Holder());
	vtkImageDataLIC2DExtentTranslator *native = (vtkImageDataLIC2DExtentTranslator *)wrapper->native.GetPointer();
	vtkExtentTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputExtentTranslator();
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

void VtkImageDataLIC2DExtentTranslatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataLIC2DExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataLIC2DExtentTranslatorWrap>(info.Holder());
	vtkImageDataLIC2DExtentTranslator *native = (vtkImageDataLIC2DExtentTranslator *)wrapper->native.GetPointer();
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

void VtkImageDataLIC2DExtentTranslatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataLIC2DExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataLIC2DExtentTranslatorWrap>(info.Holder());
	vtkImageDataLIC2DExtentTranslator *native = (vtkImageDataLIC2DExtentTranslator *)wrapper->native.GetPointer();
	vtkImageDataLIC2DExtentTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageDataLIC2DExtentTranslatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataLIC2DExtentTranslatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataLIC2DExtentTranslatorWrap *w = new VtkImageDataLIC2DExtentTranslatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageDataLIC2DExtentTranslatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataLIC2DExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataLIC2DExtentTranslatorWrap>(info.Holder());
	vtkImageDataLIC2DExtentTranslator *native = (vtkImageDataLIC2DExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageDataLIC2DExtentTranslator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageDataLIC2DExtentTranslatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDataLIC2DExtentTranslatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataLIC2DExtentTranslatorWrap *w = new VtkImageDataLIC2DExtentTranslatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataLIC2DExtentTranslatorWrap::SetAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataLIC2DExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataLIC2DExtentTranslatorWrap>(info.Holder());
	vtkImageDataLIC2DExtentTranslator *native = (vtkImageDataLIC2DExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataLIC2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataLIC2DWrap *a0 = ObjectWrap::Unwrap<VtkImageDataLIC2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlgorithm(
			(vtkImageDataLIC2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataLIC2DExtentTranslatorWrap::SetInputExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataLIC2DExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataLIC2DExtentTranslatorWrap>(info.Holder());
	vtkImageDataLIC2DExtentTranslator *native = (vtkImageDataLIC2DExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkExtentTranslatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkExtentTranslatorWrap *a0 = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputExtentTranslator(
			(vtkExtentTranslator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDataLIC2DExtentTranslatorWrap::SetInputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDataLIC2DExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageDataLIC2DExtentTranslatorWrap>(info.Holder());
	vtkImageDataLIC2DExtentTranslator *native = (vtkImageDataLIC2DExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetInputWholeExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

