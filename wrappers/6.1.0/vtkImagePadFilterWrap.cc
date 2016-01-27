/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImagePadFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImagePadFilterWrap::ptpl;

VtkImagePadFilterWrap::VtkImagePadFilterWrap()
{ }

VtkImagePadFilterWrap::VtkImagePadFilterWrap(vtkSmartPointer<vtkImagePadFilter> _native)
{ native = _native; }

VtkImagePadFilterWrap::~VtkImagePadFilterWrap()
{ }

void VtkImagePadFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImagePadFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImagePadFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkImagePadFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImagePadFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImagePadFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputNumberOfScalarComponents", GetOutputNumberOfScalarComponents);
	Nan::SetPrototypeMethod(tpl, "getOutputNumberOfScalarComponents", GetOutputNumberOfScalarComponents);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutputNumberOfScalarComponents", SetOutputNumberOfScalarComponents);
	Nan::SetPrototypeMethod(tpl, "setOutputNumberOfScalarComponents", SetOutputNumberOfScalarComponents);

	Nan::SetPrototypeMethod(tpl, "SetOutputWholeExtent", SetOutputWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setOutputWholeExtent", SetOutputWholeExtent);

	ptpl.Reset( tpl );
}

void VtkImagePadFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImagePadFilter> native = vtkSmartPointer<vtkImagePadFilter>::New();
		VtkImagePadFilterWrap* obj = new VtkImagePadFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImagePadFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImagePadFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImagePadFilterWrap>(info.Holder());
	vtkImagePadFilter *native = (vtkImagePadFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImagePadFilterWrap::GetOutputNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImagePadFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImagePadFilterWrap>(info.Holder());
	vtkImagePadFilter *native = (vtkImagePadFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputNumberOfScalarComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImagePadFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImagePadFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImagePadFilterWrap>(info.Holder());
	vtkImagePadFilter *native = (vtkImagePadFilter *)wrapper->native.GetPointer();
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

void VtkImagePadFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImagePadFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImagePadFilterWrap>(info.Holder());
	vtkImagePadFilter *native = (vtkImagePadFilter *)wrapper->native.GetPointer();
	vtkImagePadFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImagePadFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImagePadFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImagePadFilterWrap *w = new VtkImagePadFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImagePadFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImagePadFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImagePadFilterWrap>(info.Holder());
	vtkImagePadFilter *native = (vtkImagePadFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImagePadFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImagePadFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImagePadFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImagePadFilterWrap *w = new VtkImagePadFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImagePadFilterWrap::SetOutputNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImagePadFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImagePadFilterWrap>(info.Holder());
	vtkImagePadFilter *native = (vtkImagePadFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputNumberOfScalarComponents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImagePadFilterWrap::SetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImagePadFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImagePadFilterWrap>(info.Holder());
	vtkImagePadFilter *native = (vtkImagePadFilter *)wrapper->native.GetPointer();
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
							native->SetOutputWholeExtent(
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

