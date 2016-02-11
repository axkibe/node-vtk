/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageResliceWrap.h"
#include "vtkImageFlipWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageFlipWrap::ptpl;

VtkImageFlipWrap::VtkImageFlipWrap()
{ }

VtkImageFlipWrap::VtkImageFlipWrap(vtkSmartPointer<vtkImageFlip> _native)
{ native = _native; }

VtkImageFlipWrap::~VtkImageFlipWrap()
{ }

void VtkImageFlipWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageFlip").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageFlip").ToLocalChecked(), ConstructorGetter);
}

void VtkImageFlipWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageFlipWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageResliceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageResliceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageFlipWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FlipAboutOriginOff", FlipAboutOriginOff);
	Nan::SetPrototypeMethod(tpl, "flipAboutOriginOff", FlipAboutOriginOff);

	Nan::SetPrototypeMethod(tpl, "FlipAboutOriginOn", FlipAboutOriginOn);
	Nan::SetPrototypeMethod(tpl, "flipAboutOriginOn", FlipAboutOriginOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFilteredAxes", GetFilteredAxes);
	Nan::SetPrototypeMethod(tpl, "getFilteredAxes", GetFilteredAxes);

	Nan::SetPrototypeMethod(tpl, "GetFilteredAxis", GetFilteredAxis);
	Nan::SetPrototypeMethod(tpl, "getFilteredAxis", GetFilteredAxis);

	Nan::SetPrototypeMethod(tpl, "GetFlipAboutOrigin", GetFlipAboutOrigin);
	Nan::SetPrototypeMethod(tpl, "getFlipAboutOrigin", GetFlipAboutOrigin);

	Nan::SetPrototypeMethod(tpl, "GetPreserveImageExtent", GetPreserveImageExtent);
	Nan::SetPrototypeMethod(tpl, "getPreserveImageExtent", GetPreserveImageExtent);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PreserveImageExtentOff", PreserveImageExtentOff);
	Nan::SetPrototypeMethod(tpl, "preserveImageExtentOff", PreserveImageExtentOff);

	Nan::SetPrototypeMethod(tpl, "PreserveImageExtentOn", PreserveImageExtentOn);
	Nan::SetPrototypeMethod(tpl, "preserveImageExtentOn", PreserveImageExtentOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFilteredAxes", SetFilteredAxes);
	Nan::SetPrototypeMethod(tpl, "setFilteredAxes", SetFilteredAxes);

	Nan::SetPrototypeMethod(tpl, "SetFilteredAxis", SetFilteredAxis);
	Nan::SetPrototypeMethod(tpl, "setFilteredAxis", SetFilteredAxis);

	Nan::SetPrototypeMethod(tpl, "SetFlipAboutOrigin", SetFlipAboutOrigin);
	Nan::SetPrototypeMethod(tpl, "setFlipAboutOrigin", SetFlipAboutOrigin);

	Nan::SetPrototypeMethod(tpl, "SetPreserveImageExtent", SetPreserveImageExtent);
	Nan::SetPrototypeMethod(tpl, "setPreserveImageExtent", SetPreserveImageExtent);

	ptpl.Reset( tpl );
}

void VtkImageFlipWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageFlip> native = vtkSmartPointer<vtkImageFlip>::New();
		VtkImageFlipWrap* obj = new VtkImageFlipWrap(native);
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

void VtkImageFlipWrap::FlipAboutOriginOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipAboutOriginOff();
}

void VtkImageFlipWrap::FlipAboutOriginOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipAboutOriginOn();
}

void VtkImageFlipWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageFlipWrap::GetFilteredAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilteredAxes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageFlipWrap::GetFilteredAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilteredAxis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageFlipWrap::GetFlipAboutOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFlipAboutOrigin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageFlipWrap::GetPreserveImageExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreserveImageExtent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageFlipWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
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

void VtkImageFlipWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	vtkImageFlip * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageFlipWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageFlipWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageFlipWrap *w = new VtkImageFlipWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageFlipWrap::PreserveImageExtentOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveImageExtentOff();
}

void VtkImageFlipWrap::PreserveImageExtentOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveImageExtentOn();
}

void VtkImageFlipWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageFlip * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageFlipWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageFlipWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageFlipWrap *w = new VtkImageFlipWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageFlipWrap::SetFilteredAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilteredAxes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageFlipWrap::SetFilteredAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilteredAxis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageFlipWrap::SetFlipAboutOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFlipAboutOrigin(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageFlipWrap::SetPreserveImageExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageFlipWrap *wrapper = ObjectWrap::Unwrap<VtkImageFlipWrap>(info.Holder());
	vtkImageFlip *native = (vtkImageFlip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreserveImageExtent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

