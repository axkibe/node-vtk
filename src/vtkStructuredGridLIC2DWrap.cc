/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkStructuredGridLIC2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRenderWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkStructuredGridLIC2DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredGridLIC2DWrap::ptpl;

VtkStructuredGridLIC2DWrap::VtkStructuredGridLIC2DWrap()
{ }

VtkStructuredGridLIC2DWrap::VtkStructuredGridLIC2DWrap(vtkSmartPointer<vtkStructuredGridLIC2D> _native)
{ native = _native; }

VtkStructuredGridLIC2DWrap::~VtkStructuredGridLIC2DWrap()
{ }

void VtkStructuredGridLIC2DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStructuredGridAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkStructuredGridLIC2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkStructuredGridLIC2D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("StructuredGridLIC2D").ToLocalChecked(),tpl->GetFunction());
}

void VtkStructuredGridLIC2DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetContext", GetContext);
	Nan::SetPrototypeMethod(tpl, "getContext", GetContext);

	Nan::SetPrototypeMethod(tpl, "GetFBOSuccess", GetFBOSuccess);
	Nan::SetPrototypeMethod(tpl, "getFBOSuccess", GetFBOSuccess);

	Nan::SetPrototypeMethod(tpl, "GetLICSuccess", GetLICSuccess);
	Nan::SetPrototypeMethod(tpl, "getLICSuccess", GetLICSuccess);

	Nan::SetPrototypeMethod(tpl, "GetMagnification", GetMagnification);
	Nan::SetPrototypeMethod(tpl, "getMagnification", GetMagnification);

	Nan::SetPrototypeMethod(tpl, "GetMagnificationMaxValue", GetMagnificationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMagnificationMaxValue", GetMagnificationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMagnificationMinValue", GetMagnificationMinValue);
	Nan::SetPrototypeMethod(tpl, "getMagnificationMinValue", GetMagnificationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOpenGLExtensionsSupported", GetOpenGLExtensionsSupported);
	Nan::SetPrototypeMethod(tpl, "getOpenGLExtensionsSupported", GetOpenGLExtensionsSupported);

	Nan::SetPrototypeMethod(tpl, "GetStepSize", GetStepSize);
	Nan::SetPrototypeMethod(tpl, "getStepSize", GetStepSize);

	Nan::SetPrototypeMethod(tpl, "GetSteps", GetSteps);
	Nan::SetPrototypeMethod(tpl, "getSteps", GetSteps);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetContext", SetContext);
	Nan::SetPrototypeMethod(tpl, "setContext", SetContext);

	Nan::SetPrototypeMethod(tpl, "SetMagnification", SetMagnification);
	Nan::SetPrototypeMethod(tpl, "setMagnification", SetMagnification);

	Nan::SetPrototypeMethod(tpl, "SetStepSize", SetStepSize);
	Nan::SetPrototypeMethod(tpl, "setStepSize", SetStepSize);

	Nan::SetPrototypeMethod(tpl, "SetSteps", SetSteps);
	Nan::SetPrototypeMethod(tpl, "setSteps", SetSteps);

}

void VtkStructuredGridLIC2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredGridLIC2D> native = vtkSmartPointer<vtkStructuredGridLIC2D>::New();
		VtkStructuredGridLIC2DWrap* obj = new VtkStructuredGridLIC2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStructuredGridLIC2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredGridLIC2DWrap::GetContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	vtkRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContext();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRenderWindowWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowWrap *w = new VtkRenderWindowWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridLIC2DWrap::GetFBOSuccess(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFBOSuccess();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridLIC2DWrap::GetLICSuccess(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLICSuccess();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridLIC2DWrap::GetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMagnification();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridLIC2DWrap::GetMagnificationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMagnificationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridLIC2DWrap::GetMagnificationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMagnificationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridLIC2DWrap::GetOpenGLExtensionsSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpenGLExtensionsSupported();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridLIC2DWrap::GetStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStepSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridLIC2DWrap::GetSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridLIC2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
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

void VtkStructuredGridLIC2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	vtkStructuredGridLIC2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStructuredGridLIC2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridLIC2DWrap *w = new VtkStructuredGridLIC2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridLIC2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredGridLIC2D * r;
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
			Nan::New<v8::Function>(VtkStructuredGridLIC2DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridLIC2DWrap *w = new VtkStructuredGridLIC2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridLIC2DWrap::SetContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SetContext(
			(vtkRenderWindow *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridLIC2DWrap::SetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMagnification(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridLIC2DWrap::SetStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStepSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridLIC2DWrap::SetSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridLIC2DWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridLIC2DWrap>(info.Holder());
	vtkStructuredGridLIC2D *native = (vtkStructuredGridLIC2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSteps(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

