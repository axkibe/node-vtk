/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderPassWrap.h"
#include "vtkDepthPeelingPassWrap.h"
#include "vtkObjectWrap.h"
#include "vtkWindowWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationIntegerVectorKeyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDepthPeelingPassWrap::ptpl;

VtkDepthPeelingPassWrap::VtkDepthPeelingPassWrap()
{ }

VtkDepthPeelingPassWrap::VtkDepthPeelingPassWrap(vtkSmartPointer<vtkDepthPeelingPass> _native)
{ native = _native; }

VtkDepthPeelingPassWrap::~VtkDepthPeelingPassWrap()
{ }

void VtkDepthPeelingPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDepthPeelingPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DepthPeelingPass").ToLocalChecked(), ConstructorGetter);
}

void VtkDepthPeelingPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDepthPeelingPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDepthPeelingPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DestinationSize", DestinationSize);
	Nan::SetPrototypeMethod(tpl, "destinationSize", DestinationSize);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfPeels", GetMaximumNumberOfPeels);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfPeels", GetMaximumNumberOfPeels);

	Nan::SetPrototypeMethod(tpl, "GetOcclusionRatio", GetOcclusionRatio);
	Nan::SetPrototypeMethod(tpl, "getOcclusionRatio", GetOcclusionRatio);

	Nan::SetPrototypeMethod(tpl, "GetOcclusionRatioMaxValue", GetOcclusionRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOcclusionRatioMaxValue", GetOcclusionRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOcclusionRatioMinValue", GetOcclusionRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getOcclusionRatioMinValue", GetOcclusionRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTranslucentPass", GetTranslucentPass);
	Nan::SetPrototypeMethod(tpl, "getTranslucentPass", GetTranslucentPass);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OpaqueZTextureUnit", OpaqueZTextureUnit);
	Nan::SetPrototypeMethod(tpl, "opaqueZTextureUnit", OpaqueZTextureUnit);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfPeels", SetMaximumNumberOfPeels);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfPeels", SetMaximumNumberOfPeels);

	Nan::SetPrototypeMethod(tpl, "SetOcclusionRatio", SetOcclusionRatio);
	Nan::SetPrototypeMethod(tpl, "setOcclusionRatio", SetOcclusionRatio);

	Nan::SetPrototypeMethod(tpl, "SetTranslucentPass", SetTranslucentPass);
	Nan::SetPrototypeMethod(tpl, "setTranslucentPass", SetTranslucentPass);

	Nan::SetPrototypeMethod(tpl, "TranslucentZTextureUnit", TranslucentZTextureUnit);
	Nan::SetPrototypeMethod(tpl, "translucentZTextureUnit", TranslucentZTextureUnit);

	ptpl.Reset( tpl );
}

void VtkDepthPeelingPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDepthPeelingPass> native = vtkSmartPointer<vtkDepthPeelingPass>::New();
		VtkDepthPeelingPassWrap* obj = new VtkDepthPeelingPassWrap(native);
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

void VtkDepthPeelingPassWrap::DestinationSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	vtkInformationIntegerVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DestinationSize();
		VtkInformationIntegerVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerVectorKeyWrap *w = new VtkInformationIntegerVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDepthPeelingPassWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDepthPeelingPassWrap::GetMaximumNumberOfPeels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfPeels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDepthPeelingPassWrap::GetOcclusionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOcclusionRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDepthPeelingPassWrap::GetOcclusionRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOcclusionRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDepthPeelingPassWrap::GetOcclusionRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOcclusionRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDepthPeelingPassWrap::GetTranslucentPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	vtkRenderPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslucentPass();
		VtkRenderPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderPassWrap *w = new VtkRenderPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDepthPeelingPassWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
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

void VtkDepthPeelingPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	vtkDepthPeelingPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDepthPeelingPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDepthPeelingPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDepthPeelingPassWrap *w = new VtkDepthPeelingPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDepthPeelingPassWrap::OpaqueZTextureUnit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->OpaqueZTextureUnit();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDepthPeelingPassWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
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

void VtkDepthPeelingPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDepthPeelingPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDepthPeelingPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDepthPeelingPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDepthPeelingPassWrap *w = new VtkDepthPeelingPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthPeelingPassWrap::SetMaximumNumberOfPeels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfPeels(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthPeelingPassWrap::SetOcclusionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOcclusionRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthPeelingPassWrap::SetTranslucentPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderPassWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderPassWrap *a0 = ObjectWrap::Unwrap<VtkRenderPassWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslucentPass(
			(vtkRenderPass *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthPeelingPassWrap::TranslucentZTextureUnit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthPeelingPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthPeelingPassWrap>(info.Holder());
	vtkDepthPeelingPass *native = (vtkDepthPeelingPass *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->TranslucentZTextureUnit();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

